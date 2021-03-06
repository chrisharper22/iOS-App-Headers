//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCoWatchCarouselControllerDelegate-Protocol.h"
#import "IGCoWatchCoordinatorProtocol-Protocol.h"
#import "IGCoWatchEventControllerDelegate-Protocol.h"
#import "IGCoWatchPlayNextControllerDelegate-Protocol.h"
#import "IGCoWatchReelsControllerDelegate-Protocol.h"
#import "IGCoWatchViewControllerDelegate-Protocol.h"

@class FBVideoLiveClock, IGCoWatchMediaInfo, IGCoWatchRootViewController, IGUser, IGUserSession, NSString;
@protocol IGCoWatchCoordinatorDelegate, IGCoWatchEventProcessingIntf, IGCoWatchLoggingListener;

@interface IGCoWatchCoordinator : NSObject <IGCoWatchEventControllerDelegate, IGCoWatchCarouselControllerDelegate, IGCoWatchReelsControllerDelegate, IGCoWatchPlayNextControllerDelegate, IGCoWatchViewControllerDelegate, IGCoWatchCoordinatorProtocol>
{
    id <IGCoWatchCoordinatorDelegate> _delegate;
    id <IGCoWatchEventProcessingIntf> _eventController;
    FBVideoLiveClock *_syncedClock;
    id <IGCoWatchLoggingListener> _logger;
    NSString *_module;
    IGUser *_user;
    IGUserSession *_userSession;
    IGCoWatchMediaInfo *_previewContent;
    NSString *_tabSource;
    IGCoWatchRootViewController *_rootViewController;
}

+ (id)createWithUserSession:(id)arg1 module:(id)arg2 logger:(id)arg3 videoCallId:(id)arg4 isInNetworkCall:(_Bool)arg5 videoCallSession:(id)arg6;
- (void).cxx_destruct;
- (void)logCoWatchInCallTooltipImpressionWithMedia:(id)arg1 postItemPk:(id)arg2 externalSource:(unsigned long long)arg3 surface:(id)arg4;
- (void)logCoWatchShareSheetImpressionWithMedia:(id)arg1 postItemPk:(id)arg2 externalSource:(unsigned long long)arg3 surface:(id)arg4;
- (void)logCoWatchInCallButtonImpressionWithMedia:(id)arg1 postItemPk:(id)arg2 externalSource:(unsigned long long)arg3 surface:(id)arg4;
- (void)coWatchReelsViewController:(id)arg1 didStartPlayingMedia:(id)arg2 tabSource:(id)arg3;
- (void)playNextHScrollImpression;
- (void)playNextChainingImpressionForMediaId:(id)arg1;
- (void)playNextHScrollBeginScrolling;
- (void)playNextHScrollEndReached;
- (void)playNextControllerDidSelectMedia:(id)arg1 tabSource:(id)arg2 itemIndex:(unsigned long long)arg3;
- (void)coWatchCarouselViewController:(id)arg1 carouselDidChangeIndex:(id)arg2 tabSource:(id)arg3;
- (void)contentSelectionCoordinatorDidRequestNavigation:(id)arg1 shouldMinimize:(_Bool)arg2;
- (void)contentSelectionCoordinatorDidSelectMedia:(id)arg1 tabSource:(id)arg2;
- (void)coWatchViewControllerDidForegroundApp:(id)arg1;
- (void)coWatchViewController:(id)arg1 didTapPlayAtPlaybackPosition:(double)arg2;
- (void)coWatchViewController:(id)arg1 didTapPauseAtPlaybackPosition:(double)arg2;
- (void)coWatchViewController:(id)arg1 didScrubToPlaybackPosition:(double)arg2 isPaused:(_Bool)arg3;
- (void)coWatchViewController:(id)arg1 didBeginScrubbingAtPlaybackPosition:(double)arg2;
- (void)coWatchViewController:(id)arg1 didLoadImage:(id)arg2;
- (void)coWatchViewControllerDidTapRemoveButton:(id)arg1;
- (void)coWatchViewControllerDidTapOwnerButton:(id)arg1;
- (void)_updatePlaybackWithMediaInfo:(id)arg1 state:(id)arg2 previousState:(id)arg3 coWatchUser:(id)arg4 surfaceId:(id)arg5 isDisplayingMedia:(_Bool)arg6 tabSource:(id)arg7 adminMessaage:(id)arg8;
- (void)eventController:(id)arg1 didReceiveUpdate:(id)arg2 previousState:(id)arg3 surfaceId:(id)arg4;
- (void)_startCowatchContentPreviewWithItem:(id)arg1;
- (id)_currentPlayingMedia;
- (id)_currentPlayingMediaId;
- (void)_refreshMediaSync;
- (void)_pauseMedia:(id)arg1 playbackPosition:(double)arg2;
- (void)_playMedia:(id)arg1 playbackPosition:(double)arg2 tabSource:(id)arg3;
- (void)_playCowatchIgMediaOnJoin:(id)arg1 postItemPK:(id)arg2 tabSource:(id)arg3;
- (void)_playCowatchFacebookVideoOnJoin:(id)arg1;
- (id)_feedCarouselItemWithIGMedia:(id)arg1 postItemPK:(id)arg2;
- (id)_feedPostItemWithIGMedia:(id)arg1 postItemPK:(id)arg2;
- (void)_feedPostItemWithMediaId:(id)arg1 postItemPK:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_previewItemWithMediaId:(id)arg1 postItemPK:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePlayerOriginY:(double)arg1 chicletOriginY:(double)arg2;
- (id)rootViewController;
- (_Bool)isPlaying;
- (void)cowatchMediaInActiveCall:(id)arg1 postItemPK:(id)arg2 source:(unsigned long long)arg3 surface:(id)arg4 mediaFetchSource:(unsigned long long)arg5;
- (void)previewCoWatchContent:(id)arg1;
- (void)playCowatchMediaOnJoin:(id)arg1;
- (void)stopPlaying;
- (void)stopCoWatchSession;
- (void)startCoWatchSessionWithCall:(id)arg1 videoCallId:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 module:(id)arg2 logger:(id)arg3 videoCallId:(id)arg4 syncedClock:(id)arg5 eventController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

