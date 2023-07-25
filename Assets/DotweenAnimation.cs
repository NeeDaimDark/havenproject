using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class DotweenAnimation : MonoBehaviour
{
    [SerializeField]
    private float xDistance;
    [SerializeField]
    private float yDistance;
    [SerializeField]
    private float sequenceDuration;
    private float startingX;
    private float startingY;
    private Sequence sequence;
    private void OnEnable()
    {
        startingX = transform.localPosition.x;
        startingY = transform.localPosition.y;
        sequence = DOTween.Sequence();
        sequence.Append(transform.DOLocalMoveX(startingX + xDistance, sequenceDuration / 4));
        sequence.Append(transform.DOLocalMoveX(startingX- xDistance, sequenceDuration / 2));
        sequence.Append(transform.DOLocalMoveX(startingX, sequenceDuration / 4));
        sequence.Append(transform.DOLocalMoveY(startingY + yDistance, sequenceDuration / 4));
        sequence.Append(transform.DOLocalMoveY(startingY - yDistance, sequenceDuration / 2));
        sequence.Append(transform.DOLocalMoveY(startingY, sequenceDuration / 4));
        sequence.SetLoops(-1, LoopType.Restart).SetEase(Ease.Linear);
    }
}
