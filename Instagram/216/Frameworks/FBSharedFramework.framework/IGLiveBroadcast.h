//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGReportable-Protocol.h>
#import <FBSharedFramework/IGStoryImageProvider-Protocol.h>
#import <FBSharedFramework/IGStoryItemType-Protocol.h>
#import <FBSharedFramework/IGUnitItemInformationProviding-Protocol.h>
#import <FBSharedFramework/IGValue-Protocol.h>
#import <FBSharedFramework/IGVideoURLProvider-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGAffiliateInfo, IGGating, IGLiveBroadcastCharityInfo, IGLiveBroadcastCharityUpdate, IGLiveBroadcastExperimentConfig, IGLiveBroadcastResourceUpdate, IGLiveBroadcastShoppingInfo, IGLiveBroadcastUserPayUpdate, IGLiveViewerUserPayConfig, IGMediaOverlayModel, IGUser, NSArray, NSData, NSDate, NSNumber, NSString, NSURL;
@protocol FNFDashVideoDrmHandler;

@interface IGLiveBroadcast : FBValueObject <IGReportable, IGStoryItemType, IGStoryImageProvider, IGVideoURLProvider, IGUnitItemInformationProviding, IGValue, IGListDiffable, NSCopying, NSCoding>
{
    _Bool _isMuted;
    _Bool _hasCopyrightViolation;
    _Bool _isGamingContent;
    _Bool _isViewerCommentAllowed;
    _Bool _isPolicyViolation;
    _Bool _requestToJoinEnabled;
    _Bool _isUserPayMaxAmountReached;
    _Bool _archiveCanShareToIGTV;
    NSString *_pk;
    NSString *_mediaId;
    NSURL *_url;
    NSURL *_adaptiveBitrateUrl;
    NSData *_inlinedPlaylist;
    NSData *_dashManifest;
    long long _numberOfQualities;
    NSString *_encodingTag;
    NSURL *_coverFrameUrl;
    long long _status;
    IGUser *_owner;
    NSArray *_guests;
    long long _initialViewerCount;
    NSNumber *_currentViewerCount;
    long long _totalViewerCount;
    NSArray *_viewerCountAvatars;
    NSDate *_startTime;
    long long _startPlaybackAtOffset;
    long long _rankedPosition;
    long long _seenRankedPosition;
    NSString *_organicTrackingToken;
    unsigned long long _audienceType;
    NSArray *_cobroadcasterIds;
    NSString *_questionId;
    IGGating *_sensitivityGating;
    IGMediaOverlayModel *_mediaOverlayInfo;
    NSString *_title;
    NSArray *_sponsorTags;
    IGLiveBroadcastCharityInfo *_charityInfo;
    IGLiveBroadcastCharityUpdate *_charityUpdate;
    IGLiveBroadcastShoppingInfo *_shoppingInfo;
    IGLiveViewerUserPayConfig *_userPayViewerConfig;
    IGLiveBroadcastUserPayUpdate *_userPayUpdate;
    NSString *_fbSimulcastBroadcastId;
    NSString *_postId;
    NSDate *_responseTimeStamp;
    NSString *_policyViolationReason;
    IGLiveBroadcastResourceUpdate *_ssiResourceUpdate;
    IGLiveBroadcastExperimentConfig *_experimentConfig;
    NSURL *_progressivePlaybackURL;
    double _progressivePlaybackDuration;
    NSString *_liveArchivePk;
    unsigned long long _viewStateItemType;
    IGAffiliateInfo *_affiliateInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGAffiliateInfo *affiliateInfo; // @synthesize affiliateInfo=_affiliateInfo;
@property(readonly, nonatomic) unsigned long long viewStateItemType; // @synthesize viewStateItemType=_viewStateItemType;
@property(readonly, nonatomic) _Bool archiveCanShareToIGTV; // @synthesize archiveCanShareToIGTV=_archiveCanShareToIGTV;
@property(readonly, copy, nonatomic) NSString *liveArchivePk; // @synthesize liveArchivePk=_liveArchivePk;
@property(readonly, nonatomic) double progressivePlaybackDuration; // @synthesize progressivePlaybackDuration=_progressivePlaybackDuration;
@property(readonly, copy, nonatomic) NSURL *progressivePlaybackURL; // @synthesize progressivePlaybackURL=_progressivePlaybackURL;
@property(readonly, copy, nonatomic) IGLiveBroadcastExperimentConfig *experimentConfig; // @synthesize experimentConfig=_experimentConfig;
@property(readonly, copy, nonatomic) IGLiveBroadcastResourceUpdate *ssiResourceUpdate; // @synthesize ssiResourceUpdate=_ssiResourceUpdate;
@property(readonly, nonatomic) _Bool isUserPayMaxAmountReached; // @synthesize isUserPayMaxAmountReached=_isUserPayMaxAmountReached;
@property(readonly, nonatomic) _Bool requestToJoinEnabled; // @synthesize requestToJoinEnabled=_requestToJoinEnabled;
@property(readonly, copy, nonatomic) NSString *policyViolationReason; // @synthesize policyViolationReason=_policyViolationReason;
@property(readonly, nonatomic) _Bool isPolicyViolation; // @synthesize isPolicyViolation=_isPolicyViolation;
@property(readonly, copy, nonatomic) NSDate *responseTimeStamp; // @synthesize responseTimeStamp=_responseTimeStamp;
@property(readonly, copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
@property(readonly, copy, nonatomic) NSString *fbSimulcastBroadcastId; // @synthesize fbSimulcastBroadcastId=_fbSimulcastBroadcastId;
@property(readonly, copy, nonatomic) IGLiveBroadcastUserPayUpdate *userPayUpdate; // @synthesize userPayUpdate=_userPayUpdate;
@property(readonly, copy, nonatomic) IGLiveViewerUserPayConfig *userPayViewerConfig; // @synthesize userPayViewerConfig=_userPayViewerConfig;
@property(readonly, copy, nonatomic) IGLiveBroadcastShoppingInfo *shoppingInfo; // @synthesize shoppingInfo=_shoppingInfo;
@property(readonly, copy, nonatomic) IGLiveBroadcastCharityUpdate *charityUpdate; // @synthesize charityUpdate=_charityUpdate;
@property(readonly, copy, nonatomic) IGLiveBroadcastCharityInfo *charityInfo; // @synthesize charityInfo=_charityInfo;
@property(readonly, copy, nonatomic) NSArray *sponsorTags; // @synthesize sponsorTags=_sponsorTags;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) IGMediaOverlayModel *mediaOverlayInfo; // @synthesize mediaOverlayInfo=_mediaOverlayInfo;
@property(readonly, copy, nonatomic) IGGating *sensitivityGating; // @synthesize sensitivityGating=_sensitivityGating;
@property(readonly, nonatomic) _Bool isViewerCommentAllowed; // @synthesize isViewerCommentAllowed=_isViewerCommentAllowed;
@property(readonly, nonatomic) _Bool isGamingContent; // @synthesize isGamingContent=_isGamingContent;
@property(readonly, copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
@property(readonly, nonatomic) _Bool hasCopyrightViolation; // @synthesize hasCopyrightViolation=_hasCopyrightViolation;
@property(readonly, copy, nonatomic) NSArray *cobroadcasterIds; // @synthesize cobroadcasterIds=_cobroadcasterIds;
@property(readonly, nonatomic) unsigned long long audienceType; // @synthesize audienceType=_audienceType;
@property(readonly, copy, nonatomic) NSString *organicTrackingToken; // @synthesize organicTrackingToken=_organicTrackingToken;
@property(readonly, nonatomic) long long seenRankedPosition; // @synthesize seenRankedPosition=_seenRankedPosition;
@property(readonly, nonatomic) long long rankedPosition; // @synthesize rankedPosition=_rankedPosition;
@property(readonly, nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(readonly, nonatomic) long long startPlaybackAtOffset; // @synthesize startPlaybackAtOffset=_startPlaybackAtOffset;
@property(readonly, copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSArray *viewerCountAvatars; // @synthesize viewerCountAvatars=_viewerCountAvatars;
@property(readonly, nonatomic) long long totalViewerCount; // @synthesize totalViewerCount=_totalViewerCount;
@property(readonly, copy, nonatomic) NSNumber *currentViewerCount; // @synthesize currentViewerCount=_currentViewerCount;
@property(readonly, nonatomic) long long initialViewerCount; // @synthesize initialViewerCount=_initialViewerCount;
@property(readonly, copy, nonatomic) NSArray *guests; // @synthesize guests=_guests;
@property(readonly, copy, nonatomic) IGUser *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSURL *coverFrameUrl; // @synthesize coverFrameUrl=_coverFrameUrl;
@property(readonly, copy, nonatomic) NSString *encodingTag; // @synthesize encodingTag=_encodingTag;
@property(readonly, nonatomic) long long numberOfQualities; // @synthesize numberOfQualities=_numberOfQualities;
@property(readonly, copy, nonatomic) NSData *dashManifest; // @synthesize dashManifest=_dashManifest;
@property(readonly, copy, nonatomic) NSData *inlinedPlaylist; // @synthesize inlinedPlaylist=_inlinedPlaylist;
@property(readonly, copy, nonatomic) NSURL *adaptiveBitrateUrl; // @synthesize adaptiveBitrateUrl=_adaptiveBitrateUrl;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (id)valueIdentifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 mediaId:(id)arg2 url:(id)arg3 adaptiveBitrateUrl:(id)arg4 inlinedPlaylist:(id)arg5 dashManifest:(id)arg6 numberOfQualities:(long long)arg7 encodingTag:(id)arg8 coverFrameUrl:(id)arg9 status:(long long)arg10 owner:(id)arg11 guests:(id)arg12 initialViewerCount:(long long)arg13 currentViewerCount:(id)arg14 totalViewerCount:(long long)arg15 viewerCountAvatars:(id)arg16 startTime:(id)arg17 startPlaybackAtOffset:(long long)arg18 isMuted:(_Bool)arg19 rankedPosition:(long long)arg20 seenRankedPosition:(long long)arg21 organicTrackingToken:(id)arg22 audienceType:(unsigned long long)arg23 cobroadcasterIds:(id)arg24 hasCopyrightViolation:(_Bool)arg25 questionId:(id)arg26 isGamingContent:(_Bool)arg27 isViewerCommentAllowed:(_Bool)arg28 sensitivityGating:(id)arg29 mediaOverlayInfo:(id)arg30 title:(id)arg31 sponsorTags:(id)arg32 charityInfo:(id)arg33 charityUpdate:(id)arg34 shoppingInfo:(id)arg35 userPayViewerConfig:(id)arg36 userPayUpdate:(id)arg37 fbSimulcastBroadcastId:(id)arg38 postId:(id)arg39 responseTimeStamp:(id)arg40 isPolicyViolation:(_Bool)arg41 policyViolationReason:(id)arg42 requestToJoinEnabled:(_Bool)arg43 isUserPayMaxAmountReached:(_Bool)arg44 ssiResourceUpdate:(id)arg45 experimentConfig:(id)arg46 progressivePlaybackURL:(id)arg47 progressivePlaybackDuration:(double)arg48 liveArchivePk:(id)arg49 archiveCanShareToIGTV:(_Bool)arg50 viewStateItemType:(unsigned long long)arg51 affiliateInfo:(id)arg52;
- (id)initWithCoder:(id)arg1;
- (id)storyViewModelWithCurrentUser:(id)arg1;
- (id)reelViewModelWithCurrentUser:(id)arg1;
- (id)truncatedMediaID;
- (unsigned long long)reportableObjectType;
- (id)reportableID;
- (unsigned long long)serverViewStateItemType;
- (unsigned long long)unitItemType;
- (id)unitItemId;
@property(readonly, nonatomic) id <FNFDashVideoDrmHandler> drmHandler;
- (_Bool)isFacebookContent;
@property(readonly, nonatomic) NSData *dashManifestData;
- (id)isAudioDetected;
- (id)representationIdStringForVideoURL:(id)arg1;
- (id)videoURLForCurrentNetworkConditions;
- (id)videoURLForVideoVersion:(long long)arg1;
- (id)allVideoURLs;
- (id)imageTypedURLForWidth:(double)arg1;
- (id)imageURLForWidth:(double)arg1;
- (id)preloadedImage;
- (id)ringBadgeSpec;
- (id)customRingSpec;
- (_Bool)containsPrideMedia;
- (id)crossPostDenyReason;
- (_Bool)isFBOnly;
- (_Bool)isIGInternal;
- (_Bool)canSendCustomEmoji;
- (_Bool)supportsStoryReactions;
- (_Bool)hasPendingUpload;
- (id)pendingUploadId;
- (id)media;
- (double)totalDurationWithLauncherSetProvider:(id)arg1;
- (long long)mediaAudience;
- (_Bool)isBrandedContent;
- (_Bool)isSponsored;
- (_Bool)shouldLoop;
- (id)votersModels;
- (long long)viewerCount;
- (id)viewers;
- (_Bool)hasShoppingStoryLink;
- (id)arEffectStoryLink;
- (id)felixLinkMediaId;
- (id)storyLinkUrl;
- (id)tapModelArray;
- (id)productTypeString;
- (id)mediaID;
- (long long)mediaType;
- (id)video;
- (id)photo;
- (id)storyAssetManagerOverlay;
- (id)user;
- (id)expiringAtDate;
- (id)takenAtDate;
- (long long)updatedViewerCountInteger;
- (id)updatedViewerCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

