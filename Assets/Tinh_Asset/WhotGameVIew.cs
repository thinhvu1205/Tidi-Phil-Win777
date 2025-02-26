using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WhotGameVIew : GameView
{
    public static WhotGameVIew instance = null;
    protected override void Awake()
    {
        base.Awake();
        instance = this;
    }
    protected override void Start()
    {
        base.Start();
    }

    protected override void Update()
    {
        base.Update();
    }
}
