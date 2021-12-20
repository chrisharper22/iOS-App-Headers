//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <FBSharedFramework/IGTouchDetectorDelegate-Protocol.h>

@class CALayer, IGTouchDetector, NSHashTable, NSString, UIView;

@interface IGBouncyButton : UIControl <IGTouchDetectorDelegate>
{
    IGTouchDetector *_touchDetector;
    NSHashTable *_blockingGesturesSet;
    CALayer *_hitTestVisualizer;
    _Bool _pushedDown;
    double _pushedDownScale;
    double _pushedDownAlpha;
    double _pushDownSpringSpeed;
    double _pushDownSpringBounciness;
    UIView *_contentView;
    struct UIEdgeInsets _hitTestExpansion;
    struct NSDirectionalEdgeInsets _hitTestDirectionalInset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool pushedDown; // @synthesize pushedDown=_pushedDown;
@property(nonatomic) struct NSDirectionalEdgeInsets hitTestDirectionalInset; // @synthesize hitTestDirectionalInset=_hitTestDirectionalInset;
@property(nonatomic) struct UIEdgeInsets hitTestExpansion; // @synthesize hitTestExpansion=_hitTestExpansion;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double pushDownSpringBounciness; // @synthesize pushDownSpringBounciness=_pushDownSpringBounciness;
@property(nonatomic) double pushDownSpringSpeed; // @synthesize pushDownSpringSpeed=_pushDownSpringSpeed;
@property(nonatomic) double pushedDownAlpha; // @synthesize pushedDownAlpha=_pushedDownAlpha;
@property(nonatomic) double pushedDownScale; // @synthesize pushedDownScale=_pushedDownScale;
- (unsigned long long)accessibilityTraits;
- (_Bool)clipsToBounds;
- (void)setClipsToBounds:(_Bool)arg1;
@property(nonatomic) double cornerRadius;
- (void)_blockingGestureDidRecognize:(id)arg1;
- (void)_recomputeBlockingGestures;
- (void)_clearBlockingGestures;
- (void)touchDetector:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)touchDetector:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) struct CGRect hitTestRegion;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
