using UnityEngine;
using Mirror;
[DefaultExecutionOrder(-100)]
public class HandRotationSync : NetworkBehaviour
{
    [SerializeField] private Transform leftHand;
    [SerializeField] private Transform rightHand;

    private void Update()
    {
        if (isLocalPlayer)
        {
            CmdUpdateHandTransforms(leftHand.position, leftHand.rotation, rightHand.position, rightHand.rotation);
        }
    }

    [Command]
    private void CmdUpdateHandTransforms(Vector3 leftHandPosition, Quaternion leftHandRotation, Vector3 rightHandPosition, Quaternion rightHandRotation)
    {
        RpcUpdateHandTransforms(leftHandPosition, leftHandRotation, rightHandPosition, rightHandRotation);
    }

    [ClientRpc]
    private void RpcUpdateHandTransforms(Vector3 leftHandPosition, Quaternion leftHandRotation, Vector3 rightHandPosition, Quaternion rightHandRotation)
    {
        if (isLocalPlayer) return; // Prevent local player from updating their own hands

        leftHand.position = leftHandPosition;
        leftHand.rotation = leftHandRotation;
        rightHand.position = rightHandPosition;
        rightHand.rotation = rightHandRotation;
    }
}