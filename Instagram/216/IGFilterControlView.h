//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGExpandableButtonDelegate-Protocol.h"
#import "IGFilterTintControlDelegate-Protocol.h"

@class IGExpandableButton, IGFilterTintControl, IGSloppyTouchSlider, IGTickSlider, IGTiltShiftModeControl, NSString, UIButton, UILabel;
@protocol IGFilterControlViewDelegate;

@interface IGFilterControlView : UIView <IGExpandableButtonDelegate, IGFilterTintControlDelegate>
{
    _Bool _showButtons;
    id <IGFilterControlViewDelegate> _delegate;
    double _priorValue;
    unsigned long long _controlType;
    double _priorOrientationAngle;
    double _priorCropZoom;
    unsigned long long _perspectiveRotateMode;
    IGFilterTintControl *_tintControl;
    unsigned long long _tintColorType;
    unsigned long long _tintShadowsColor;
    unsigned long long _tintHighlightsColor;
    double _tintShadowsIntensity;
    double _tintHighlightsIntensity;
    IGSloppyTouchSlider *_controlSlider;
    IGTiltShiftModeControl *_tiltShiftModeControl;
    IGTickSlider *_tickSlider;
    UILabel *_valueLabel;
    UIButton *_doneButton;
    UIButton *_cancelButton;
    UIView *_controlPanel;
    UIView *_buttonPanel;
    IGExpandableButton *_perspectiveRollButton;
    IGExpandableButton *_perspectivePitchButton;
    IGExpandableButton *_straightenButton;
    struct CGPoint _priorCropCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGExpandableButton *straightenButton; // @synthesize straightenButton=_straightenButton;
@property(retain, nonatomic) IGExpandableButton *perspectivePitchButton; // @synthesize perspectivePitchButton=_perspectivePitchButton;
@property(retain, nonatomic) IGExpandableButton *perspectiveRollButton; // @synthesize perspectiveRollButton=_perspectiveRollButton;
@property(nonatomic) _Bool showButtons; // @synthesize showButtons=_showButtons;
@property(retain, nonatomic) UIView *buttonPanel; // @synthesize buttonPanel=_buttonPanel;
@property(retain, nonatomic) UIView *controlPanel; // @synthesize controlPanel=_controlPanel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) IGTickSlider *tickSlider; // @synthesize tickSlider=_tickSlider;
@property(retain, nonatomic) IGTiltShiftModeControl *tiltShiftModeControl; // @synthesize tiltShiftModeControl=_tiltShiftModeControl;
@property(retain, nonatomic) IGSloppyTouchSlider *controlSlider; // @synthesize controlSlider=_controlSlider;
@property(nonatomic) double tintHighlightsIntensity; // @synthesize tintHighlightsIntensity=_tintHighlightsIntensity;
@property(nonatomic) double tintShadowsIntensity; // @synthesize tintShadowsIntensity=_tintShadowsIntensity;
@property(nonatomic) unsigned long long tintHighlightsColor; // @synthesize tintHighlightsColor=_tintHighlightsColor;
@property(nonatomic) unsigned long long tintShadowsColor; // @synthesize tintShadowsColor=_tintShadowsColor;
@property(nonatomic) unsigned long long tintColorType; // @synthesize tintColorType=_tintColorType;
@property(retain, nonatomic) IGFilterTintControl *tintControl; // @synthesize tintControl=_tintControl;
@property(nonatomic) unsigned long long perspectiveRotateMode; // @synthesize perspectiveRotateMode=_perspectiveRotateMode;
@property(nonatomic) double priorCropZoom; // @synthesize priorCropZoom=_priorCropZoom;
@property(nonatomic) struct CGPoint priorCropCenter; // @synthesize priorCropCenter=_priorCropCenter;
@property(nonatomic) double priorOrientationAngle; // @synthesize priorOrientationAngle=_priorOrientationAngle;
@property(readonly, nonatomic) unsigned long long controlType; // @synthesize controlType=_controlType;
@property(nonatomic) double priorValue; // @synthesize priorValue=_priorValue;
@property(nonatomic) __weak id <IGFilterControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tintControl:(id)arg1 tintIntensityDidChange:(double)arg2 tintType:(unsigned long long)arg3;
- (void)tintControl:(id)arg1 tintColorDidChange:(unsigned long long)arg2 tintType:(unsigned long long)arg3;
- (void)slidableButton:(id)arg1 valueDidUpdated:(double)arg2;
- (void)_onStraightenButtonClick;
- (void)_onPerspectivePitchButtonClick;
- (void)_onPerspectiveRollButtonClick;
- (void)_updateLayoutStateForPerspectiveButton:(id)arg1;
@property(nonatomic) double straightenAngle;
@property(nonatomic) double perspectivePitchAngle;
@property(nonatomic) double perspectiveRollAngle;
- (id)_perspectiveButtonForRotateMode:(unsigned long long)arg1;
- (void)_onCancel;
- (void)_onDone;
- (void)_onTickSliderChange:(id)arg1;
- (void)_onSliderChange:(id)arg1;
- (void)_onTouchUp;
- (void)_onTouchDown;
- (void)_onTiltShiftChange:(id)arg1;
- (void)setValuesForTintShadowsColor:(unsigned long long)arg1 tintHighlightsColor:(unsigned long long)arg2 tintShadowsIntensity:(double)arg3 tintHighlightsIntensity:(double)arg4;
- (void)setUserInteractionEnabled:(_Bool)arg1;
@property(nonatomic) double value;
- (void)setValue:(double)arg1 animated:(_Bool)arg2;
- (double)_buttonTopPadding;
@property(nonatomic) _Bool positionOffscreen;
- (void)_updateValueLabel;
- (struct CGRect)_labelRect;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 controlType:(unsigned long long)arg2 showButtons:(_Bool)arg3 accessibilityLabel:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

