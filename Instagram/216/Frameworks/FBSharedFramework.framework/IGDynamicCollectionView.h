//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>
#import <FBSharedFramework/UIScrollViewDelegate-Protocol.h>

@class CADisplayLink, IGPanGestureRecognizer, NSMapTable, NSMutableArray, NSString, UILongPressGestureRecognizer, UIScrollView, UITapGestureRecognizer;
@protocol IGDynamicCollectionViewDatasource, IGDynamicCollectionViewDelegate;

@interface IGDynamicCollectionView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _autoscrollDisabled;
    _Bool _rightToLeftDirection;
    id <IGDynamicCollectionViewDelegate> _delegate;
    id <IGDynamicCollectionViewDatasource> _dataSource;
    double _itemSpacing;
    UIScrollView *_contentView;
    UILongPressGestureRecognizer *_touchRecognizer;
    IGPanGestureRecognizer *_velocityRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    NSMapTable *_centerAnimators;
    NSMapTable *_transformAnimators;
    NSMutableArray *_views;
    UIView *_trackingView;
    long long _trackingViewIndex;
    long long _trackingViewPotentialLandingIndex;
    NSMutableArray *_viewCenters;
    double _maxWidth;
    CADisplayLink *_autoscrollDisplayLink;
    long long _autoscrollDirection;
    double _lastAutoscrollTime;
    double _autoscrollStartTime;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) double autoscrollStartTime; // @synthesize autoscrollStartTime=_autoscrollStartTime;
@property(nonatomic) double lastAutoscrollTime; // @synthesize lastAutoscrollTime=_lastAutoscrollTime;
@property(nonatomic) long long autoscrollDirection; // @synthesize autoscrollDirection=_autoscrollDirection;
@property(retain, nonatomic) CADisplayLink *autoscrollDisplayLink; // @synthesize autoscrollDisplayLink=_autoscrollDisplayLink;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) NSMutableArray *viewCenters; // @synthesize viewCenters=_viewCenters;
@property(nonatomic) long long trackingViewPotentialLandingIndex; // @synthesize trackingViewPotentialLandingIndex=_trackingViewPotentialLandingIndex;
@property(nonatomic) long long trackingViewIndex; // @synthesize trackingViewIndex=_trackingViewIndex;
@property(retain, nonatomic) UIView *trackingView; // @synthesize trackingView=_trackingView;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
@property(retain, nonatomic) NSMapTable *transformAnimators; // @synthesize transformAnimators=_transformAnimators;
@property(retain, nonatomic) NSMapTable *centerAnimators; // @synthesize centerAnimators=_centerAnimators;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) IGPanGestureRecognizer *velocityRecognizer; // @synthesize velocityRecognizer=_velocityRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *touchRecognizer; // @synthesize touchRecognizer=_touchRecognizer;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool rightToLeftDirection; // @synthesize rightToLeftDirection=_rightToLeftDirection;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic, getter=isAutoscrollDisabled) _Bool autoscrollDisabled; // @synthesize autoscrollDisabled=_autoscrollDisabled;
@property(nonatomic) __weak id <IGDynamicCollectionViewDatasource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGDynamicCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applyAttachmentsWithAnimation:(_Bool)arg1;
- (void)_applyAttachments;
- (void)_applyAttachmentsWithoutAnimation;
- (void)_stopAnimationsForView:(id)arg1;
- (void)_moveView:(id)arg1 toPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)_scaleToValue:(double)arg1 withVelocity:(double)arg2 forView:(id)arg3;
- (void)_scaleBounceView:(id)arg1;
- (id)_viewForPoint:(struct CGPoint)arg1;
- (void)_cancelTransformSprings;
- (void)_cancelCenterSprings;
- (void)_touch:(id)arg1;
- (void)_pan:(id)arg1;
- (void)_tap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateForTouchRecognizerChange;
- (void)_cancelAutoscroll;
- (void)_startAutoscroll;
- (void)_autoscrollRight;
- (void)_autoscrollLeft;
- (void)_autoscroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToLastItemAnimated:(_Bool)arg1;
- (void)reloadDataAnimated:(_Bool)arg1;
@property(nonatomic) _Bool alwaysBounceHorizontal;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)_setUpSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andMaxWidth:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

