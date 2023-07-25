using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class DrawingManager : MonoBehaviour
{
    DrawerBase drawer;
    DrawableBase[] drawables;

    // Use this for initialization
    void Start()
    {
        drawer = FindObjectOfType<DrawerBase>();
        drawables = FindObjectsOfType<DrawableBase>();

        XRGrabInteractable grab = GetComponent<XRGrabInteractable>();
        grab.activated.AddListener(StartDrawingg);
        grab.deactivated.AddListener(StopDrawingg);
    }

    public void StartDrawingg(ActivateEventArgs arg)
    {
        drawer.drawing = true;
    }

    public void StopDrawingg(DeactivateEventArgs arg)
    {
        drawer.drawing = false;
    }

    // Update is called once per frame
    void Update()
    {
        var gun = GameObject.Find("Gun");

        if (gun != null)
        {
            drawer.color = Color.HSVToRGB((Time.time * 0.1f % 1f), 1f, 1f);
          //  drawer.transform.position = gun.transform.position;
          //  drawer.transform.rotation = gun.transform.rotation;
        }

        foreach (var drawable in drawables)
            drawable.ClearGuid();

        drawer.Draw();
        drawer.DrawGuid();

        foreach (var drawable in drawables)
            drawable.Apply();
    }

    //private void OnGUI()
    //{
    //    var width = Screen.width * 0.2f;
    //    var height = Screen.height;
    //    var rect = new Rect(0, 0, width, height);

    //    GUI.backgroundColor = Color.gray;
    //    for (var i = 0; i < 2; i++)
    //    {
    // //       var co = (CanvasObject)drawables[i];
    //        rect.x = (Screen.width - width) * i;

    //        GUILayout.BeginArea(rect, (GUIStyle)"box");
    //     //   GUILayout.Label(co.name);
    //        GUILayout.Label("position texture");
    //      //  GUILayout.Label(co.posTex, GUILayout.Width(width), GUILayout.Height(width));
    //        GUILayout.Label("canvas texture");
    //      //  GUILayout.Label(co.drawingTex, GUILayout.Width(width), GUILayout.Height(width));
    //        GUILayout.EndArea();
    //    }
    //}
}
