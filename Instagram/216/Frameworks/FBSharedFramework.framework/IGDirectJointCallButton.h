//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class IGPulsatingShimmeringView, IGTapButton;

@interface IGDirectJointCallButton : UIButton
{
    long long _callType;
    IGTapButton *_callButton;
    struct CGSize _buttonSize;
    IGPulsatingShimmeringView *_pulsatingView;
}

- (void).cxx_destruct;
- (void)_configurePulsatingView;
- (void)startPulsingIfNeeded:(_Bool)arg1;
- (struct CGSize)buttonSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)initWithCallType:(long long)arg1;

@end

