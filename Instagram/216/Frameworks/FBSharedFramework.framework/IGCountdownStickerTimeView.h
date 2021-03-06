//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBTimer, NSDate, NSMutableArray, UIColor, UILabel;
@protocol IGCountdownStickerTimeViewDelegate;

@interface IGCountdownStickerTimeView : UIView
{
    NSMutableArray *_timeViews;
    NSMutableArray *_timeColonLabels;
    NSMutableArray *_timeLabels;
    NSMutableArray *_timeArray;
    UILabel *_pickTimeLabel;
    UILabel *_endedTimeLabel;
    FBTimer *_secondsTimer;
    id <IGCountdownStickerTimeViewDelegate> _delegate;
    NSDate *_countdownDate;
    UIColor *_numberColor;
    UIColor *_legibleColor;
    UIColor *_digitCardColor;
    unsigned long long _timeLabelState;
    unsigned long long _timeComponent;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long timeComponent; // @synthesize timeComponent=_timeComponent;
@property(nonatomic) unsigned long long timeLabelState; // @synthesize timeLabelState=_timeLabelState;
@property(retain, nonatomic) UIColor *digitCardColor; // @synthesize digitCardColor=_digitCardColor;
@property(retain, nonatomic) UIColor *legibleColor; // @synthesize legibleColor=_legibleColor;
@property(retain, nonatomic) UIColor *numberColor; // @synthesize numberColor=_numberColor;
@property(retain, nonatomic) NSDate *countdownDate; // @synthesize countdownDate=_countdownDate;
@property(nonatomic) __weak id <IGCountdownStickerTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_accessibilityValueOfRemainingTime;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (id)_calendarBreakdownFromDate:(id)arg1 toDate:(id)arg2;
- (void)_stopCountdownSecondsTimer;
- (void)_onCountdownFire;
- (void)_startCountdownSecondsTimerRepeating:(_Bool)arg1;
- (void)_setUpCountdownEndedLabelWithDate:(id)arg1;
- (void)_updateCountdownTimerAnimated:(_Bool)arg1 fakeTick:(_Bool)arg2;
- (void)showFastTickingDownAnimation;
- (void)showFakeTick;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

