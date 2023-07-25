using UnityEngine;

public class ProjectionSpray : DrawerBase
{
    public Shader depthRendererShader;
    public int dpthResolution = 1024;
    public float sprayAngle = 30f;
    public float splayDistance = 1f;

    RenderTexture depthOutput;
    Matrix4x4 ProjectionOffsetMatrix = Matrix4x4.TRS(Vector3.one * .5f, Quaternion.identity, Vector3.one * .5f);
    Matrix4x4 projectionMatrix;

    protected override void UpdateDrawTarget()
    {
        drawTargetList.Clear();
        var planes = GeometryUtility.CalculateFrustumPlanes(transform.GetComponent<Camera>());
        drawTargetList.AddRange(
            DrawableBase.AllDrawableList.FindAll(d => GeometryUtility.TestPlanesAABB(planes, d.bounds))
        );
    }

    public override void DrawRts(RenderTexture[] rts, int pass)
    {
        RenderTexture.active = depthOutput;
        GL.Clear(true, true, Color.red * splayDistance);

        var sprayCamera = transform.GetComponent<Camera>();
        sprayCamera.fieldOfView = sprayAngle;
        sprayCamera.farClipPlane = splayDistance;
        sprayCamera.Render();

        projectionMatrix = ProjectionOffsetMatrix * sprayCamera.projectionMatrix * sprayCamera.worldToCameraMatrix;

        drawMat.SetFloat("_Dst", splayDistance);
        drawMat.SetTexture("_Depth", depthOutput);
        drawMat.SetMatrix("_ProjectionMatrix", projectionMatrix);
        drawMat.SetMatrix("_MatrixW2D", transform.worldToLocalMatrix);

        base.DrawRts(rts, pass);
    }

    private void Awake()
    {
        depthOutput = new RenderTexture(dpthResolution, dpthResolution, 0, RenderTextureFormat.RFloat);
        depthOutput.Create();
        GetComponent<Camera>().SetReplacementShader(depthRendererShader, "RenderType");
    }

    private void OnDestroy()
    {
        if (depthOutput != null)
            depthOutput.Release();
        depthOutput = null;
    }
}
