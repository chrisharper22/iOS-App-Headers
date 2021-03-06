//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGLiveAddonUIConforming-Protocol.h"
#import "IGStoryContentView-Protocol.h"
#import "IGStoryDimmableView-Protocol.h"
#import "IGStoryProfileImageContaining-Protocol.h"

@class IGDeviceSession, IGFNFVideoPlayer, IGLiveViewerView, IGStoryVideoView, IGStoryViewerTransitionOverlay, NSDictionary, NSString, UIView;
@protocol IGAnalyticsEventLoggingProtocol, IGLiveAddonCoordinating, IGStoryPlayerMediaViewType;

@interface IGLiveFullscreenCell : UICollectionViewCell <IGLiveAddonUIConforming, IGStoryProfileImageContaining, IGStoryDimmableView, IGStoryContentView>
{
    long long _commentsDisplayMode;
    IGStoryVideoView *_mediaView;
    _Bool _disabled;
    _Bool _addonLifeCycleEventEnabled;
    _Bool _showLandscapeView;
    _Bool _shouldConfigureForVerticalScrollWithPeeks;
    _Bool _enableLiveRoomEdgeInsets;
    id <IGLiveAddonCoordinating> _coordinator;
    NSString *_identifier;
    UIView *_sharingInterstitialOverlayView;
    UIView *_liveRoomPreLiveOverlayView;
    UIView *_liveRoomView;
    IGStoryViewerTransitionOverlay *_dimmableView;
    IGLiveViewerView *_viewerOverlayView;
    UIView *_mediaContainerView;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGDeviceSession *_deviceSession;
    struct CGRect _keyboardFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGDeviceSession *deviceSession; // @synthesize deviceSession=_deviceSession;
@property(retain, nonatomic) id <IGAnalyticsEventLoggingProtocol> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) UIView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
@property(nonatomic) long long commentsDisplayMode; // @synthesize commentsDisplayMode=_commentsDisplayMode;
@property(readonly, nonatomic) IGLiveViewerView *viewerOverlayView; // @synthesize viewerOverlayView=_viewerOverlayView;
@property(readonly, nonatomic) IGStoryViewerTransitionOverlay *dimmableView; // @synthesize dimmableView=_dimmableView;
@property(nonatomic) _Bool enableLiveRoomEdgeInsets; // @synthesize enableLiveRoomEdgeInsets=_enableLiveRoomEdgeInsets;
@property(nonatomic) _Bool shouldConfigureForVerticalScrollWithPeeks; // @synthesize shouldConfigureForVerticalScrollWithPeeks=_shouldConfigureForVerticalScrollWithPeeks;
@property(nonatomic) _Bool showLandscapeView; // @synthesize showLandscapeView=_showLandscapeView;
@property(retain, nonatomic) UIView *liveRoomView; // @synthesize liveRoomView=_liveRoomView;
@property(retain, nonatomic) UIView *liveRoomPreLiveOverlayView; // @synthesize liveRoomPreLiveOverlayView=_liveRoomPreLiveOverlayView;
@property(retain, nonatomic) UIView *sharingInterstitialOverlayView; // @synthesize sharingInterstitialOverlayView=_sharingInterstitialOverlayView;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(nonatomic) _Bool addonLifeCycleEventEnabled; // @synthesize addonLifeCycleEventEnabled=_addonLifeCycleEventEnabled;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IGLiveAddonCoordinating> coordinator; // @synthesize coordinator=_coordinator;
- (id)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)receiveEvent:(unsigned long long)arg1 from:(id)arg2 payload:(id)arg3;
- (void)unconfigurateCoordinator;
- (void)configurateCoordinator:(id)arg1;
- (id)contentViewForSnapshot;
- (void)setDimmingPercent:(double)arg1;
- (id)profileImageView;
- (struct CGRect)_mediaViewFrame;
@property(readonly, nonatomic) struct CGRect mediaWindowFrameReference;
- (struct CGRect)_overlayViewFrame;
- (struct CGRect)_dimmableViewFrame;
- (void)setMediaView:(id)arg1;
@property(readonly, nonatomic) NSDictionary *videoDebugDetails;
@property(readonly, nonatomic) IGFNFVideoPlayer *videoPlayer;
@property(readonly, nonatomic) id <IGStoryPlayerMediaViewType> mediaObject;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

