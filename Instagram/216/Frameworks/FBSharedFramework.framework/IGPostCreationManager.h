//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGPostSessionInternalDelegate-Protocol.h>
#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGAuthHeaderStore, IGCameraLogger, IGFacebookHelper, IGPostDataStore, IGPostSessionFactory, IGUploadService, IGUser, NSMutableDictionary, NSString;
@protocol IGAPIClient, IGAnalyticsEventLoggingProtocol, IGBackgroundRenderIGLContextProvider, IGMultipleAccountHandling, IGPostCreationManagerAnnouncer, IGUploadsUnarchiveAnnouncer, IGUserFeatureSets;

@interface IGPostCreationManager : NSObject <IGPostSessionInternalDelegate, IGUserSessionEndingObject, IGListDiffable>
{
    id <IGAPIClient> _networker;
    IGUser *_user;
    id <IGMultipleAccountHandling> _multipleAccountHandler;
    id <IGBackgroundRenderIGLContextProvider> _iglContextProvider;
    IGFacebookHelper *_facebookHelper;
    id <IGAPIClient> _loggedOutNetworker;
    id <IGUserFeatureSets> _featureSets;
    IGAuthHeaderStore *_authHeaderStore;
    IGPostSessionFactory *_postSessionFactory;
    IGUploadService *_uploadService;
    IGPostDataStore *_store;
    id <IGUploadsUnarchiveAnnouncer> _uploadsUnarchiveAnnouncer;
    IGCameraLogger *_cameraLogger;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    NSMutableDictionary *_postIdToPendingSession;
    NSMutableDictionary *_postIdToSession;
    NSMutableDictionary *_postIdToArchivedUpload;
    id <IGPostCreationManagerAnnouncer> _announcer;
}

+ (id)intendedOldestPostCreationFileModificationDate;
+ (_Bool)archivedPostsExistForUserPK:(id)arg1;
+ (id)postCreationFilesDirectory;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)_removeTempFilesOfUntrackedPostsWithTrackedPostIds:(id)arg1;
- (id)_uploadVideoCompositionWithNoPossibilityOfPassthroughUpload:(id)arg1 uploadParams:(id)arg2 additionalHeaders:(id)arg3 contentTags:(id)arg4 previewImageSource:(id)arg5 postCoverPhotoSource:(id)arg6 mediaId:(id)arg7 postId:(id)arg8;
- (void)_asyncRemoveTemporaryFilesForPostId:(id)arg1;
- (void)userSessionWillEnd;
- (_Bool)_postSessionRequiresShareRetry:(id)arg1;
- (void)_retryUpload;
- (void)_onNetworkReachabilityChange:(id)arg1;
- (void)postSessionInternal:(id)arg1 didRenderVideoUrl:(id)arg2 mediaId:(id)arg3;
- (void)postSessionInternal:(id)arg1 didRenderImageSource:(id)arg2 mediaId:(id)arg3;
- (void)postSessionInternalDidSucceedShare:(id)arg1;
- (void)postSessionInternalDidSucceedUpload:(id)arg1;
- (void)postSessionInternal:(id)arg1 didAddShare:(id)arg2;
- (void)postSessionInternal:(id)arg1 didUpdateWithContext:(id)arg2;
- (void)postSessionInternal:(id)arg1 didCompleteUploadRequests:(id)arg2 mediaIdToHasEdits:(id)arg3 previewImageSource:(id)arg4;
- (void)cancelUploadForPostId:(id)arg1 userAction:(_Bool)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)postSessionForPostId:(id)arg1;
- (void)_resumeArchivedPosts;
- (void)resumeArchivedPosts;
- (id)postIds;
- (id)sharePostId:(id)arg1 shareType:(long long)arg2 shareParams:(id)arg3 retryBehavior:(id)arg4 pendingShareMetadata:(id)arg5 configureUserPk:(id)arg6;
- (void)setPreviewImageSource:(id)arg1 forPostId:(id)arg2;
- (void)commitUploadForPostId:(id)arg1;
- (id)uploadVideoStreamWithUploadParams:(id)arg1 contentTags:(id)arg2 postCoverPhotoSource:(id)arg3 mediaId:(id)arg4 postId:(id)arg5 videoSize:(struct CGSize)arg6;
- (void)uploadAudioWithAudioFileUrl:(id)arg1 uploadParams:(id)arg2 postId:(id)arg3;
- (void)uploadVideoCoverPhotoWithImageSource:(id)arg1 postId:(id)arg2;
- (id)uploadPassthroughCandidate:(id)arg1 uploadParams:(id)arg2 additionalHeaders:(id)arg3 contentTags:(id)arg4 previewImageSource:(id)arg5 postCoverPhotoSource:(id)arg6 mediaId:(id)arg7 postId:(id)arg8;
- (id)uploadVideoComposition:(id)arg1 uploadParams:(id)arg2 additionalHeaders:(id)arg3 contentTags:(id)arg4 previewImageSource:(id)arg5 postCoverPhotoSource:(id)arg6 mediaId:(id)arg7 postId:(id)arg8;
- (id)uploadCarouselWithAssets:(id)arg1 postId:(id)arg2;
- (void)uploadPhotoWithImageSource:(id)arg1 previewImageSource:(id)arg2 uploadParams:(id)arg3 postId:(id)arg4;
- (id)createPostWithWaterfall:(id)arg1 dataType:(long long)arg2 entryPointType:(long long)arg3 shareIntent:(id)arg4 analyticsModule:(id)arg5 loggingMetadata:(id)arg6;
- (id)createPostWithWaterfall:(id)arg1 dataType:(long long)arg2 entryPointType:(long long)arg3 analyticsModule:(id)arg4 loggingMetadata:(id)arg5;
- (id)initWithUser:(id)arg1 networker:(id)arg2 loggedOutNetworker:(id)arg3 multipleAccountHandler:(id)arg4 iglContextProvider:(id)arg5 objectCacheConsolidator:(id)arg6 feedDraftManager:(id)arg7 uploadsUnarchiveAnnouncer:(id)arg8 offProcessNetworkRequestDeps:(id)arg9 mediaQualityMeter:(id)arg10 mediaQualityUploader:(id)arg11 videoRenderQueue:(id)arg12 facebookHelper:(id)arg13 cacheLimits:(id)arg14 featureSets:(id)arg15 authHeaderStore:(id)arg16 postSessionFactory:(id)arg17 cameraLogger:(id)arg18 analyticsLogger:(id)arg19;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
