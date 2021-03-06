//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCameraButtonModeView, IGQuickCamInnerCircleRadialView;

@interface IGQuickCamInnerCircleView : UIView
{
    _Bool _isRecording;
    _Bool _isTouching;
    IGCameraButtonModeView *_modeButtonView;
    IGQuickCamInnerCircleRadialView *_radialView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGQuickCamInnerCircleRadialView *radialView; // @synthesize radialView=_radialView;
- (void)updateForTouchDownState:(_Bool)arg1;
- (void)updateForRecordingState:(_Bool)arg1;
- (void)configureWithMode:(id)arg1 withAnimation:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

