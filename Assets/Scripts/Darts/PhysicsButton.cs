using Mirror;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class PhysicsButton : NetworkBehaviour
{
    [SerializeField] private float threshold = .1f;
    [SerializeField] private float deadZone = .025f;
    [SerializeField] private TextMeshProUGUI Ready;
    
    public UnityEvent onPressed, onReleased;

    private bool _isPressed;
    private Vector3 _Startpos;
    private ConfigurableJoint _Joint;
    // Start is called before the first frame update
    void Start()
    {
        _Startpos = transform.localPosition;
        _Joint = GetComponent<ConfigurableJoint>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!_isPressed && GetValue() + threshold >= 1)
            Pressed();
        if (_isPressed && GetValue() - threshold <=0)
            Released();
        
    }
    private float GetValue()
    {
        var value = Vector3.Distance(_Startpos, transform.localPosition) / _Joint.linearLimit.limit;
        if (Mathf.Abs(value) < deadZone)
            value = 0;
        return Mathf.Clamp(value,-1f,1f);
    }
    private void Pressed()
    {
        _isPressed = true;
        onPressed.Invoke();
        Debug.Log("Pressed");
        Ready.text = "I'm Ready";
    }
    private void Released()
    {
        _isPressed = false;
        onReleased.Invoke();
        Debug.Log("Released");
    }
    

}
