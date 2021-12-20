//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGPartialModalSheetListener-Protocol.h"
#import "IGPartialModalSheetTapListener-Protocol.h"

@class IGLiveBroadcast, IGLiveViewerPostLiveLoggingContext, IGPartialModalSheetBackgroundResizingController, IGPartialModalSheetViewController, IGUserSession, NSString, UIView, UIViewController;
@protocol IGLiveViewerPostLiveManagerDelegate;

@interface IGLiveViewerPostLiveManager : NSObject <IGPartialModalSheetListener, IGPartialModalSheetTapListener>
{
    IGUserSession *_userSession;
    IGLiveBroadcast *_broadcast;
    long long _entryPoint;
    IGLiveViewerPostLiveLoggingContext *_loggingContext;
    IGPartialModalSheetViewController *_partialSheetViewController;
    IGPartialModalSheetBackgroundResizingController *_backgroundResizingController;
    _Bool _isShowingEndScreen;
    _Bool _backgroundViewTapped;
    _Bool _enableBackgroundResizing;
    unsigned long long _mode;
    id <IGLiveViewerPostLiveManagerDelegate> _delegate;
    UIViewController *_presenter;
    UIView *_mediaView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) __weak UIViewController *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <IGLiveViewerPostLiveManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableBackgroundResizing; // @synthesize enableBackgroundResizing=_enableBackgroundResizing;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)_handleCloseButton;
- (void)partialModalSheet:(id)arg1 didTapDimmingBackgroundView:(id)arg2 atPoint:(struct CGPoint)arg3 timeSinceOpening:(double)arg4;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)_presentPartialSheetWithViewController:(id)arg1;
- (id)_setupPartialSheetWithViewController:(id)arg1;
- (void)presentCompassionPostLiveSheet;
- (void)presentShoppingPostLiveSheetWithShoppingSessionTracker:(id)arg1;
- (void)presentDefaultPostLiveSheetShowingSupportSummary:(_Bool)arg1 viewerBadgeCount:(long long)arg2;
- (void)setupPostLive;
- (id)initWithUserSession:(id)arg1 broadcast:(id)arg2 entryPoint:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
