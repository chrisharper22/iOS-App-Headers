//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLiveCommentControllerDelegate-Protocol.h"
#import "IGLiveCommentMutingServiceDelegate-Protocol.h"
#import "IGLiveImageFetcherDelegate-Protocol.h"
#import "IGLiveLikeCountIntervalPullerDelegate-Protocol.h"
#import "IGLiveLikePostingServiceDelegate-Protocol.h"
#import "IGLiveViewerCountIntervalPullerDelegate-Protocol.h"

@class IGLiveCommentController, IGLiveCommentMutingService, IGLiveImageFetcher, IGLiveLikeCountIntervalPuller, IGLiveLikePostingService, IGLiveViewerCountIntervalPuller, NSMutableDictionary, NSNumber, NSString, NSURL, UIImage;
@protocol IGLiveFeedbackControllerDelegate, IGLiveLoggingContext;

@interface IGLiveFeedbackController : NSObject <IGLiveCommentControllerDelegate, IGLiveLikePostingServiceDelegate, IGLiveLikeCountIntervalPullerDelegate, IGLiveViewerCountIntervalPullerDelegate, IGLiveImageFetcherDelegate, IGLiveCommentMutingServiceDelegate>
{
    NSString *_module;
    IGLiveCommentController *_commentController;
    IGLiveViewerCountIntervalPuller *_viewCountPuller;
    IGLiveLikeCountIntervalPuller *_likeCountPuller;
    IGLiveLikePostingService *_likePostingService;
    IGLiveImageFetcher *_imageFetcher;
    IGLiveCommentMutingService *_commentMutingService;
    NSNumber *_lastTotalLikeCountNotFromSelf;
    NSNumber *_lastTotalBurstLikeCountNotFromSelf;
    NSMutableDictionary *_lastBurstLikeInfosNotFromSelf;
    long long _selfLikeCount;
    long long _selfBurstLikeCount;
    UIImage *_selfProfileImage;
    NSURL *_selfProfileImageURL;
    long long _currentViewerCount;
    id <IGLiveLoggingContext> _loggingContext;
    id <IGLiveFeedbackControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long currentViewerCount; // @synthesize currentViewerCount=_currentViewerCount;
@property(nonatomic) __weak id <IGLiveFeedbackControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)commentMutingServiceDidFailToUnmuteComments:(id)arg1;
- (void)commentMutingServiceDidFailToMuteComments:(id)arg1;
- (void)imageFetcher:(id)arg1 didFailToLoadImageForUrl:(id)arg2 userInfo:(id)arg3;
- (void)imageFetcher:(id)arg1 didLoadImage:(id)arg2 forUrl:(id)arg3 userInfo:(id)arg4 supportTier:(long long)arg5;
- (void)likePostingServiceDidFailToPostLike:(id)arg1 likeCountInBatch:(long long)arg2 burstLikeCountInBatch:(long long)arg3;
- (void)likeCountIntervalPuller:(id)arg1 didLoadTotalBurstLikeCount:(long long)arg2 burstLikeInfos:(id)arg3;
- (void)likeCountIntervalPuller:(id)arg1 didLoadTotalLikeCount:(long long)arg2 avatarLikerInfos:(id)arg3 regularLikerInfos:(id)arg4;
- (void)viewerCountIntervalPuller:(id)arg1 didHaveBroadcastUpdate:(id)arg2 requestTimestamp:(id)arg3;
- (_Bool)commentController:(id)arg1 updateRequestPromptIfNeeded:(id)arg2 withIncomingRequestPrompt:(id)arg3;
- (void)commentController:(id)arg1 didReceiveCommentMutedStatus:(_Bool)arg2;
- (void)commentController:(id)arg1 didFailToUnpinComment:(id)arg2;
- (void)commentController:(id)arg1 didFailToPinComment:(id)arg2;
- (void)commentController:(id)arg1 didFetchPinnedComment:(id)arg2;
- (void)commentController:(id)arg1 didReplaceCommentWithPk:(id)arg2 withComment:(id)arg3;
- (void)commentController:(id)arg1 didRemoveComment:(id)arg2;
- (void)commentController:(id)arg1 displayComments:(id)arg2 shouldLogImpression:(_Bool)arg3;
- (void)insertUpsellPrompt:(id)arg1;
- (void)insertRequestToJoinPrompt:(id)arg1;
- (void)markRequestsSeen;
- (void)unmuteComments;
- (void)muteComments;
- (void)unpinComment:(id)arg1;
- (void)pinComment:(id)arg1;
- (void)postCommentText:(id)arg1 fromUser:(id)arg2 secondsIntoVideo:(unsigned long long)arg3 supportTier:(long long)arg4 badgeCount:(long long)arg5 shouldProfilePictureGlow:(_Bool)arg6 forceCreate:(_Bool)arg7 failureHandler:(CDUnknownBlockType)arg8;
- (void)postLikeBurstAtVideoTime:(double)arg1 supportTier:(long long)arg2;
- (void)postLikeAtVideoTime:(double)arg1 supportTier:(long long)arg2;
- (void)stop;
- (void)start;
- (id)initWithBroadcastId:(id)arg1 mentionedCommentId:(id)arg2 viewerCountPullInterval:(double)arg3 userSession:(id)arg4 currentUser:(id)arg5 loggingContext:(id)arg6 flaggedCommentLedger:(id)arg7 mode:(long long)arg8 infoProvider:(id)arg9 module:(id)arg10 isMultiplePaymentsEnabled:(_Bool)arg11 isBroadcaster:(_Bool)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

