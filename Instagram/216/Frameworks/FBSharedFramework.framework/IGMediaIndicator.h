//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class FBTimer, IGALTapGestureRecognizer, NSArray, NSString, UIColor, UIImageView, UILabel, UIView;
@protocol IGMediaIndicatorDelegate;

@interface IGMediaIndicator : UIControl
{
    UIView *_contentView;
    UIImageView *_backgroundImage;
    UIImageView *_highlightedBackgroundImage;
    IGALTapGestureRecognizer *_tapRecognizer;
    unsigned long long _prevIndicatorState;
    NSArray *_iconViews;
    UILabel *_label;
    UIView *_tempLabelSnapshot;
    UIImageView *_chevronView;
    FBTimer *_highlightDwellTimer;
    _Bool _showChevron;
    _Bool _enableAutomatedLogging;
    _Bool _shouldHighlightAfterExpanding;
    unsigned long long _indicatorState;
    id <IGMediaIndicatorDelegate> _delegate;
    unsigned long long _indicatorPosition;
    double _maxWidth;
    UIColor *_highlightedBackgroundColor;
    unsigned long long _iconType;
    struct UIEdgeInsets _tapPadding;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(nonatomic) _Bool shouldHighlightAfterExpanding; // @synthesize shouldHighlightAfterExpanding=_shouldHighlightAfterExpanding;
@property(nonatomic) _Bool enableAutomatedLogging; // @synthesize enableAutomatedLogging=_enableAutomatedLogging;
@property(nonatomic) _Bool showChevron; // @synthesize showChevron=_showChevron;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) struct UIEdgeInsets tapPadding; // @synthesize tapPadding=_tapPadding;
@property(nonatomic) unsigned long long indicatorPosition; // @synthesize indicatorPosition=_indicatorPosition;
@property(nonatomic) __weak id <IGMediaIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long indicatorState; // @synthesize indicatorState=_indicatorState;
- (void)_mediaIndicatorTapped:(id)arg1;
- (void)_showTextLabel:(id)arg1;
- (double)_getIconWidth;
- (_Bool)_isWatchAndMoreIndicator;
- (void)_clearIconViews;
- (void)_updateIconViews:(id)arg1;
- (void)_configureHighlightedBackgroundImage;
- (void)_configureIndicator;
@property(copy, nonatomic) NSString *text;
- (void)_removeAllAnimations;
- (void)_setTransitionStateNoHiding:(id)arg1;
- (void)_setTransitionState:(id)arg1;
- (void)_showBackgroundImageHighlight:(_Bool)arg1;
- (void)_updateIndicatorBackgroundWithState:(unsigned long long)arg1;
- (void)_updateLabelAndWidthWithState:(unsigned long long)arg1;
- (void)_animateIndicatorForState:(unsigned long long)arg1;
- (void)_cleanUpAnimationTempViews;
- (void)_clearHighlightDwellDetectionTimer;
- (void)_setupHighlightDwellTimer:(_Bool)arg1 queueHide:(_Bool)arg2 hideAfterCollapse:(_Bool)arg3;
- (_Bool)isExpanded;
- (void)_resetToHiddenIcon;
- (void)removeQueuedAnimations;
- (void)setState:(unsigned long long)arg1 text:(id)arg2 showChevron:(_Bool)arg3 withDuration:(double)arg4 withDelay:(double)arg5 animated:(_Bool)arg6 queueCollapse:(_Bool)arg7 afterDelay:(double)arg8 queueHide:(_Bool)arg9 hideAfterCollapse:(_Bool)arg10;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2 queueCollapse:(_Bool)arg3 queueHide:(_Bool)arg4 hideAfterCollapse:(_Bool)arg5;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2 queueCollapse:(_Bool)arg3 queueHide:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isShowing;
- (double)_widthWhenCollapsed;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

