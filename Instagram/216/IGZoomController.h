//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSPointerArray, NSString, UICollectionViewCell, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIView;
@protocol IGZoomControllerZoomingDelegate;

@interface IGZoomController : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _isVideo;
    UIView *_view;
    NSPointerArray *_supplementaryViews;
    UICollectionViewCell *_cell;
    id <IGZoomControllerZoomingDelegate> _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIView *_zoomView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *zoomView; // @synthesize zoomView=_zoomView;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) __weak UICollectionViewCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) NSPointerArray *supplementaryViews; // @synthesize supplementaryViews=_supplementaryViews;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (_Bool)_isZoomingRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_onZoomAction:(id)arg1;
- (void)clearZoomingRecognizers;
- (void)setupZoomingRecognizers;
- (id)initWithMediaView:(id)arg1 supplementaryViews:(id)arg2 recognizerView:(id)arg3 cell:(id)arg4 isVideo:(_Bool)arg5 delegate:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

