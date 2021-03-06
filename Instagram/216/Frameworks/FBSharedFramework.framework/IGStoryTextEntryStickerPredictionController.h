//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGAnimatedStickerContentView, NSString, UILongPressGestureRecognizer, UIView;
@protocol FBCancelable, IGGiphyFetching, IGStoryTextEntryStickerPredictionControllerDelegate;

@interface IGStoryTextEntryStickerPredictionController : NSObject <UIGestureRecognizerDelegate>
{
    id <IGGiphyFetching> _giphyDataSource;
    id <FBCancelable> _activeSearchRequestToken;
    IGAnimatedStickerContentView *_gifSticker;
    NSString *_searchInput;
    id <IGStoryTextEntryStickerPredictionControllerDelegate> _delegate;
    UIView *_view;
    UIView *_stickerView;
    UIView *_alertView;
    UIView *_stickerContainer;
    unsigned long long _panDirection;
    double _panOffset;
    UILongPressGestureRecognizer *_outsideTouchGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *outsideTouchGesture; // @synthesize outsideTouchGesture=_outsideTouchGesture;
@property(nonatomic) double panOffset; // @synthesize panOffset=_panOffset;
@property(nonatomic) unsigned long long panDirection; // @synthesize panDirection=_panDirection;
@property(retain, nonatomic) UIView *stickerContainer; // @synthesize stickerContainer=_stickerContainer;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *stickerView; // @synthesize stickerView=_stickerView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <IGStoryTextEntryStickerPredictionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didPan:(id)arg1;
- (void)_didTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_setupViewsForSticker:(id)arg1 searchText:(id)arg2;
- (double)_yPositionHidden;
- (double)_yPositionVisible;
- (void)_didDismissAlert;
- (void)_dismissAlertWithVelocity:(double)arg1 toPosition:(struct CGPoint)arg2;
- (void)_dismissAlert;
- (void)_dismissAlertAfterDelay;
- (void)_cancelAutoDismiss;
- (void)_updateForSearchText:(id)arg1 response:(id)arg2;
- (void)presentPredictionsForSearchInput:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

