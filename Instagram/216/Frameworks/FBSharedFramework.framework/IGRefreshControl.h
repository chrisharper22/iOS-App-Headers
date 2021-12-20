//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CADisplayLink, IGRefreshSpinner, UIColor, UIScrollView, UISelectionFeedbackGenerator;
@protocol IGRefreshControlContentInsetDataSource, IGRefreshControlDelegate;

@interface IGRefreshControl : UIControl
{
    _Bool _isManagedByScrollView;
    UIScrollView *_scrollView;
    IGRefreshSpinner *_spinner;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    CADisplayLink *_displayLink;
    long long _refreshState;
    double _originalTopContentInset;
    double _originalTopAdjustedContentInset;
    double _disappearProgress;
    double _disappearInitialOffset;
    double _beginTime;
    id <IGRefreshControlDelegate> _delegate;
    id <IGRefreshControlContentInsetDataSource> _contentInsetDataSource;
    double _refreshControlTopInset;
    double _spinnerTopOffset;
    double _triggerHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double triggerHeight; // @synthesize triggerHeight=_triggerHeight;
@property(nonatomic) double spinnerTopOffset; // @synthesize spinnerTopOffset=_spinnerTopOffset;
@property(nonatomic) double refreshControlTopInset; // @synthesize refreshControlTopInset=_refreshControlTopInset;
@property(nonatomic) __weak id <IGRefreshControlContentInsetDataSource> contentInsetDataSource; // @synthesize contentInsetDataSource=_contentInsetDataSource;
@property(readonly, nonatomic) long long refreshState; // @synthesize refreshState=_refreshState;
@property(nonatomic) __weak id <IGRefreshControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_animateClosed;
- (void)_setTopContentInset:(double)arg1;
- (void)_reset;
- (void)_cancelDisplayLink;
- (void)_beginRefreshingStateUserInteractive:(_Bool)arg1;
- (_Bool)_userInitiatedScrolling;
- (void)_updateWithAppearingProgress:(double)arg1;
- (void)_updateDisappearAnimation;
- (void)_adjustContentInsetForLoading;
- (double)_scrollVelocity;
- (double)_realContentOffsetY;
- (double)_animationProgress;
- (double)_viewHeight;
- (double)_backgroundViewHeight;
- (void)_layoutInSuperView;
@property(retain, nonatomic) UIColor *color;
- (void)finishLoading;
- (void)startLoadingAnimated:(_Bool)arg1;
- (void)scrollViewDidEndDragging;
- (void)_updateInitialOriginalTopContentInset;
- (void)scrollViewDidScroll;
- (double)_idleTopAdjustedContentInset;
- (double)_idleTopContentInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_initWithScrollView:(id)arg1 triggerHeight:(double)arg2 isManagedByScrollView:(_Bool)arg3;
- (id)initWithScrollView:(id)arg1 triggerHeight:(double)arg2;
- (id)initWithoutAddingAsASubviewOfScrollView:(id)arg1;
- (id)initWithScrollView:(id)arg1;

@end

