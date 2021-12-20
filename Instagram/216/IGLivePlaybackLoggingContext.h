//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLiveLoggingContext-Protocol.h"
#import "IGStoryFullscreenSectionLoggingContextType-Protocol.h"

@class IGAnalyticsStructuredLogger, IGLiveBroadcast, IGStoryImpressionLoggingManager, IGUserSession, NSArray, NSDictionary, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGStoryFullscreenSectionLoggingContextStoryDataSource, IGStoryFullscreenSectionLoggingContextViewerDataSource, IGSubscriptionToken;

@interface IGLivePlaybackLoggingContext : NSObject <IGLiveLoggingContext, IGStoryFullscreenSectionLoggingContextType>
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGAnalyticsStructuredLogger *_structuredLogger;
    IGUserSession *_userSession;
    NSDictionary *_extras;
    double _broadcastStartTimestamp;
    double _lastVideoPlaybackUpdateTimestamp;
    long long _videoPlaybackUpdateCount;
    _Bool _videoPlaybackOngoingLogged;
    double _storyStartTime;
    double _startingPlaybackTime;
    double _startingPlaybackFrameTime;
    double _pauseStartTime;
    double _totalPauseDuration;
    long long _profileTapCount;
    NSString *_requestMethod;
    NSArray *_existingGuestsAtRequest;
    id <IGSubscriptionToken> _broadcastSubscriptionToken;
    NSString *_broadcastPk;
    NSString *_module;
    IGLiveBroadcast *_currentBroadcast;
    id <IGStoryFullscreenSectionLoggingContextStoryDataSource> _storyDataSource;
    id <IGStoryFullscreenSectionLoggingContextViewerDataSource> _viewerDataSource;
    IGStoryImpressionLoggingManager *_storyImpressionLoggingManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGStoryImpressionLoggingManager *storyImpressionLoggingManager; // @synthesize storyImpressionLoggingManager=_storyImpressionLoggingManager;
@property(nonatomic) __weak id <IGStoryFullscreenSectionLoggingContextViewerDataSource> viewerDataSource; // @synthesize viewerDataSource=_viewerDataSource;
@property(nonatomic) __weak id <IGStoryFullscreenSectionLoggingContextStoryDataSource> storyDataSource; // @synthesize storyDataSource=_storyDataSource;
@property(retain, nonatomic) IGLiveBroadcast *currentBroadcast; // @synthesize currentBroadcast=_currentBroadcast;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
- (id)impressionsExtrasDictionary;
- (id)commonExtrasDictionary;
- (id)_createPlaybackEventWithName:(id)arg1;
- (void)notifyTapMentionUserPk:(id)arg1 commentPk:(id)arg2 viewMode:(id)arg3 method:(id)arg4;
- (void)notifyCommentDeletion:(id)arg1 viewMode:(id)arg2;
- (void)notifyImpressionEnd;
- (void)notifyImpressionStart;
- (void)notifyImpressionResume;
- (id)finalStateFieldsForStoryItem:(id)arg1;
- (id)videoPlayerStateForStoryItem:(id)arg1;
- (_Bool)hasMediaLoaded:(id)arg1;
- (_Bool)loadedOnImpressionForStoryItem:(id)arg1;
- (long long)totalProfileTapCountForStoryItem:(id)arg1;
- (id)storyTapActionsForStoryItem:(id)arg1;
- (id)urlTapCountForStoryItem:(id)arg1;
- (id)commonFieldsForStoryItem:(id)arg1;
- (double)mediaSecondsElapsed:(id)arg1;
- (double)totalPauseDurationFromTrayInViewerForStoryItem:(id)arg1;
- (double)totalPauseDurationForStoryItem:(id)arg1;
- (double)startTimeForStoryItem:(id)arg1;
- (double)totalPauseDurationForStory:(id)arg1;
- (double)startTimeForStory:(id)arg1;
- (void)notifyDeleteQuestionEventWithViewMode:(id)arg1 questionId:(long long)arg2 questionText:(id)arg3 questionSource:(id)arg4;
- (void)notifyQuestionTrayImpressionWithViewMode:(id)arg1 questionCount:(long long)arg2 storiesQuestionCount:(long long)arg3 liveQuestionCount:(long long)arg4 answeredQuestionCount:(long long)arg5 unansweredQuestionCount:(long long)arg6;
- (void)notifyQuestionUnlikedEventWithViewMode:(id)arg1 questionId:(long long)arg2 questionText:(id)arg3 questionSource:(id)arg4 questionIndex:(long long)arg5;
- (void)notifyQuestionLikedEventWithViewMode:(id)arg1 questionId:(long long)arg2 questionText:(id)arg3 questionSource:(id)arg4 questionIndex:(long long)arg5;
- (void)notifyQuestionSubmittedEventWithViewMode:(id)arg1 questionText:(id)arg2;
- (void)notifyAskQuestionTappedEventWithViewMode:(id)arg1;
- (void)notifyUpdatedViewerCount:(long long)arg1;
- (void)notifyBurstLikeCountToDisplay:(long long)arg1;
- (void)notifyLikeCountToDisplay:(long long)arg1;
- (void)notifyTapUserWithMethod:(id)arg1;
- (void)notifyTapUndoNotifyEventWithViewMode:(id)arg1;
- (void)notifyTapNotifyEventWithViewMode:(id)arg1;
- (void)notifyUnfollowGeneratedWithMethod:(id)arg1 commentPk:(id)arg2 targetUserId:(id)arg3 viewMode:(id)arg4;
- (void)notifyFollowGeneratedWithMethod:(id)arg1 commentPk:(id)arg2 followedUserId:(id)arg3 viewMode:(id)arg4;
- (void)notifyCommentsExpanded:(_Bool)arg1 method:(id)arg2;
- (void)_logWaveCommentImpressionForCommentModel:(id)arg1;
- (void)_logSystemCommentImpressionForCommentModel:(id)arg1;
- (void)_logUserCommentImpressionForCommentModel:(id)arg1;
- (void)notifyReactionPostAttempt:(long long)arg1 videoTime:(double)arg2 recipientId:(id)arg3 supportTier:(id)arg4;
- (void)notifyDisplayUserComment:(id)arg1 shouldLogImpression:(_Bool)arg2;
- (void)notifyDisplaySystemComment:(id)arg1 shouldLogImpression:(_Bool)arg2;
- (void)notifyViewerListOpenedEventWithViewMode:(id)arg1;
- (void)notifyOpenOptionsMenuEventWithViewMode:(id)arg1 method:(id)arg2 targetUserId:(id)arg3 commentPk:(id)arg4;
- (void)notifyTapShareLinkButtonEventWithViewMode:(id)arg1;
- (void)notifyModeratorResignEventWithStepName:(id)arg1 method:(id)arg2;
- (void)notifyModeratorInformUserEventWithStepName:(id)arg1 method:(id)arg2 viewMode:(id)arg3;
- (void)_logMuteUserWithUserPk:(id)arg1 commentPk:(id)arg2 method:(id)arg3;
- (void)notifyMuteUserWithPk:(id)arg1 method:(id)arg2;
- (void)notifyModeratorNotificationEventWithStepName:(id)arg1 method:(id)arg2;
- (void)notifyTapCopyLinkButtonEventWithViewMode:(id)arg1;
- (void)_logRequestToJoinEventWithStepName:(id)arg1;
- (void)_markRequestEnd;
- (void)_markRequestStartWithMethod:(id)arg1 existingGuests:(id)arg2;
- (void)notifyRequestCancelled;
- (void)notifyRequestSent;
- (void)notifyRequestSheetOpenedWithMethod:(id)arg1 existingGuests:(id)arg2;
- (void)notifyLiveSubscriptionActionWithFrameTime:(double)arg1;
- (void)notifyLiveFeedRingImpressionEventWithOwnerId:(id)arg1 mediaId:(id)arg2;
- (void)notifyLiveViewerEntryEventWithMethod:(id)arg1 ownerId:(id)arg2 mediaId:(id)arg3 isCurrentlyLive:(_Bool)arg4;
- (id)videoRepresentationChangedExtrasDictionaryWithFrameTime:(double)arg1;
- (void)notifyHeaderTap;
- (void)notifyProfileTap;
- (void)notifyVideoError:(id)arg1;
- (void)notifyVideoWarning;
- (void)notifyVideoLoadingSuccess:(_Bool)arg1;
- (void)notifyVideoLoadingAttempt;
- (id)videoPausedExtrasDictionaryWithFrameTime:(double)arg1;
- (id)videoFailedPlayingExtrasDictionaryWithCurrentError:(id)arg1;
- (void)notifyVideoPausedAtTime:(double)arg1;
- (void)_setVideoStillPlayingAtTime:(double)arg1 frameTime:(double)arg2 debugDetailsBlock:(CDUnknownBlockType)arg3 mqttConnected:(_Bool)arg4;
- (void)notifyVideoStillPlayingAtTime:(double)arg1 frameTime:(double)arg2 debugDetailsBlock:(CDUnknownBlockType)arg3 mqttConnected:(_Bool)arg4;
- (void)_setVideoResumePlaybackTime:(double)arg1 frameTime:(double)arg2;
- (void)notifyVideoResumedAtTime:(double)arg1 frameTime:(double)arg2 reason:(id)arg3;
- (id)videoStartedPlayingExtrasDictionaryWithReason:(id)arg1 videoWidth:(double)arg2 mqttConnected:(_Bool)arg3 adhocData:(id)arg4;
- (void)_setVideoStartPlaybackTime:(double)arg1 frameTime:(double)arg2;
- (void)notifyVideoStartedPlayingAtTime:(double)arg1 frameTime:(double)arg2 reason:(id)arg3;
- (id)videoShouldStartExtrasDictionaryWithReason:(id)arg1 mqttConnected:(_Bool)arg2 adhocData:(id)arg3;
- (void)notifyVideoShouldStart;
- (id)initWithAnalyticsLogger:(id)arg1 userSession:(id)arg2 broadcastPk:(id)arg3 module:(id)arg4 extras:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
