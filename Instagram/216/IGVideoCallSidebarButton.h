//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

#import "IGCameraToolsMenuSliderDelegate-Protocol.h"

@class IGLabel, NSString, UIView;
@protocol IGVideoCallSidebarButtonDelegate;

@interface IGVideoCallSidebarButton : IGBouncyButton <IGCameraToolsMenuSliderDelegate>
{
    UIView *_iconView;
    IGLabel *_label;
    id <IGVideoCallSidebarButtonDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoCallSidebarButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_expandSlider:(id)arg1 expand:(_Bool)arg2;
- (void)sliderDidTapIcon:(id)arg1;
- (void)sliderDidEndChangingValue:(id)arg1;
- (void)sliderDidBeginChangingValue:(id)arg1;
- (void)slider:(id)arg1 didChangeValue:(double)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) double sliderValue;
@property(nonatomic) double labelAlpha;
- (void)setSelected:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *title;
- (void)dismissSliderIfPossible;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithImage:(id)arg1 title:(id)arg2 withSlider:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

