//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UILabel, UITapGestureRecognizer;

@interface FBSDKTooltipView : UIView
{
    _Bool _pointingUp;
    _Bool _isFadingOut;
    double _displayDuration;
    unsigned long long _colorStyle;
    NSString *_message;
    NSString *_tagline;
    double _displayTime;
    double _minimumDisplayDuration;
    UILabel *_textLabel;
    UITapGestureRecognizer *_insideTapGestureRecognizer;
    double _leftWidth;
    double _rightWidth;
    double _arrowMidpoint;
    UIColor *_innerStrokeColor;
    double _arrowHeight;
    double _textPadding;
    double _maximumTextWidth;
    double _verticalTextOffset;
    double _verticalCrossOffset;
    NSArray *_gradientColors;
    UIColor *_crossCloseGlyphColor;
    struct CGPoint _positionInView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *crossCloseGlyphColor; // @synthesize crossCloseGlyphColor=_crossCloseGlyphColor;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(nonatomic) double verticalCrossOffset; // @synthesize verticalCrossOffset=_verticalCrossOffset;
@property(nonatomic) double verticalTextOffset; // @synthesize verticalTextOffset=_verticalTextOffset;
@property(nonatomic) double maximumTextWidth; // @synthesize maximumTextWidth=_maximumTextWidth;
@property(nonatomic) double textPadding; // @synthesize textPadding=_textPadding;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(retain, nonatomic) UIColor *innerStrokeColor; // @synthesize innerStrokeColor=_innerStrokeColor;
@property(nonatomic) _Bool isFadingOut; // @synthesize isFadingOut=_isFadingOut;
@property(nonatomic) _Bool pointingUp; // @synthesize pointingUp=_pointingUp;
@property(nonatomic) double arrowMidpoint; // @synthesize arrowMidpoint=_arrowMidpoint;
@property(nonatomic) double rightWidth; // @synthesize rightWidth=_rightWidth;
@property(nonatomic) double leftWidth; // @synthesize leftWidth=_leftWidth;
@property(retain, nonatomic) UITapGestureRecognizer *insideTapGestureRecognizer; // @synthesize insideTapGestureRecognizer=_insideTapGestureRecognizer;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) double minimumDisplayDuration; // @synthesize minimumDisplayDuration=_minimumDisplayDuration;
@property(nonatomic) double displayTime; // @synthesize displayTime=_displayTime;
@property(nonatomic) struct CGPoint positionInView; // @synthesize positionInView=_positionInView;
@property(copy, nonatomic) NSString *tagline; // @synthesize tagline=_tagline;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long colorStyle; // @synthesize colorStyle=_colorStyle;
@property(nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
- (void)cancelAllScheduledFadeOutMethods;
- (void)scheduleFadeoutRespectingMinimumDisplayDuration;
- (void)scheduleAutomaticFadeout;
- (void)setMessage:(id)arg1 tagline:(id)arg2;
- (struct CGRect)layoutSubviewsAndDetermineFrame;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)onTapInTooltip:(id)arg1;
- (void)animateFadeOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateFadeIn;
- (void)dismiss;
- (void)presentInView:(id)arg1 withArrowPosition:(struct CGPoint)arg2 direction:(unsigned long long)arg3;
- (void)presentFromView:(id)arg1;
- (void)dealloc;
- (id)initWithTagline:(id)arg1 message:(id)arg2 colorStyle:(unsigned long long)arg3;

@end

