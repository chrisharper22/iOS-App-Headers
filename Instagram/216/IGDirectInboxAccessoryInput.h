//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGDirectInboxConfig, IGDirectInboxFolderPagingState, IGDirectInboxViewModelGeneratorViewContext, IGDirectPartnershipsInboxMetadata, IGDirectRealtimeIrisSyncErrorState, IGNonFeedHScrollActivationCardsCellViewModel, IGQPMegaphone, IGUser, NSArray, NSDictionary, NSSet, NSString;
@protocol NSObject;

@interface IGDirectInboxAccessoryInput : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isCacheWarmedUp;
    _Bool _isCurrentlySnapshottingInbox;
    _Bool _canShowActivationCards;
    _Bool _shouldShowPlayButtonWithText;
    _Bool _isEditing;
    IGUser *_currentUser;
    IGDirectInboxViewModelGeneratorViewContext *_viewContext;
    IGDirectInboxFolderPagingState *_inboxPagingState;
    IGQPMegaphone *_inboxQPMegaphone;
    IGDirectInboxConfig *_inboxConfig;
    NSDictionary *_typingStatusByThreadId;
    NSArray *_uploadingStoriesData;
    NSDictionary *_threadsAppStatusesByUserId;
    NSDictionary *_videoCallStatusByVideoCallKey;
    NSArray *_defaultRecipientsUsersOnly;
    NSArray *_activeNowDefaultRecipientsIncludingThreads;
    NSArray *_defaultRecipientsIncludingThreads;
    NSDictionary *_presenceStateByUserId;
    id <NSObject> _visualMessagePreloadContextIdentifier;
    NSString *_visualMessageCurrentSessionReplayableThreadId;
    long long _numberOfReplayableVisualMessages;
    NSString *_threadIdOfLastViewedUnseenVisualMessage;
    IGNonFeedHScrollActivationCardsCellViewModel *_inboxActivationCardsCellViewModel;
    long long _pendingRequestsCount;
    long long _unreadRequestsCount;
    long long _securePendingThreadCount;
    NSSet *_selectedThreadKeysInEditing;
    NSDictionary *_reelToLatestSeenMediaDateMap;
    NSSet *_reelPKsInTopTray;
    IGDirectRealtimeIrisSyncErrorState *_irisErrorState;
    IGDirectPartnershipsInboxMetadata *_partnershipsInboxMetadata;
    NSArray *_hangouts;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *hangouts; // @synthesize hangouts=_hangouts;
@property(readonly, copy, nonatomic) IGDirectPartnershipsInboxMetadata *partnershipsInboxMetadata; // @synthesize partnershipsInboxMetadata=_partnershipsInboxMetadata;
@property(readonly, copy, nonatomic) IGDirectRealtimeIrisSyncErrorState *irisErrorState; // @synthesize irisErrorState=_irisErrorState;
@property(readonly, copy, nonatomic) NSSet *reelPKsInTopTray; // @synthesize reelPKsInTopTray=_reelPKsInTopTray;
@property(readonly, copy, nonatomic) NSDictionary *reelToLatestSeenMediaDateMap; // @synthesize reelToLatestSeenMediaDateMap=_reelToLatestSeenMediaDateMap;
@property(readonly, copy, nonatomic) NSSet *selectedThreadKeysInEditing; // @synthesize selectedThreadKeysInEditing=_selectedThreadKeysInEditing;
@property(readonly, nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(readonly, nonatomic) _Bool shouldShowPlayButtonWithText; // @synthesize shouldShowPlayButtonWithText=_shouldShowPlayButtonWithText;
@property(readonly, nonatomic) long long securePendingThreadCount; // @synthesize securePendingThreadCount=_securePendingThreadCount;
@property(readonly, nonatomic) long long unreadRequestsCount; // @synthesize unreadRequestsCount=_unreadRequestsCount;
@property(readonly, nonatomic) long long pendingRequestsCount; // @synthesize pendingRequestsCount=_pendingRequestsCount;
@property(readonly, copy, nonatomic) IGNonFeedHScrollActivationCardsCellViewModel *inboxActivationCardsCellViewModel; // @synthesize inboxActivationCardsCellViewModel=_inboxActivationCardsCellViewModel;
@property(readonly, nonatomic) _Bool canShowActivationCards; // @synthesize canShowActivationCards=_canShowActivationCards;
@property(readonly, copy, nonatomic) NSString *threadIdOfLastViewedUnseenVisualMessage; // @synthesize threadIdOfLastViewedUnseenVisualMessage=_threadIdOfLastViewedUnseenVisualMessage;
@property(readonly, nonatomic) long long numberOfReplayableVisualMessages; // @synthesize numberOfReplayableVisualMessages=_numberOfReplayableVisualMessages;
@property(readonly, copy, nonatomic) NSString *visualMessageCurrentSessionReplayableThreadId; // @synthesize visualMessageCurrentSessionReplayableThreadId=_visualMessageCurrentSessionReplayableThreadId;
@property(readonly, nonatomic) id <NSObject> visualMessagePreloadContextIdentifier; // @synthesize visualMessagePreloadContextIdentifier=_visualMessagePreloadContextIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *presenceStateByUserId; // @synthesize presenceStateByUserId=_presenceStateByUserId;
@property(readonly, copy, nonatomic) NSArray *defaultRecipientsIncludingThreads; // @synthesize defaultRecipientsIncludingThreads=_defaultRecipientsIncludingThreads;
@property(readonly, copy, nonatomic) NSArray *activeNowDefaultRecipientsIncludingThreads; // @synthesize activeNowDefaultRecipientsIncludingThreads=_activeNowDefaultRecipientsIncludingThreads;
@property(readonly, copy, nonatomic) NSArray *defaultRecipientsUsersOnly; // @synthesize defaultRecipientsUsersOnly=_defaultRecipientsUsersOnly;
@property(readonly, copy, nonatomic) NSDictionary *videoCallStatusByVideoCallKey; // @synthesize videoCallStatusByVideoCallKey=_videoCallStatusByVideoCallKey;
@property(readonly, copy, nonatomic) NSDictionary *threadsAppStatusesByUserId; // @synthesize threadsAppStatusesByUserId=_threadsAppStatusesByUserId;
@property(readonly, copy, nonatomic) NSArray *uploadingStoriesData; // @synthesize uploadingStoriesData=_uploadingStoriesData;
@property(readonly, copy, nonatomic) NSDictionary *typingStatusByThreadId; // @synthesize typingStatusByThreadId=_typingStatusByThreadId;
@property(readonly, copy, nonatomic) IGDirectInboxConfig *inboxConfig; // @synthesize inboxConfig=_inboxConfig;
@property(readonly, copy, nonatomic) IGQPMegaphone *inboxQPMegaphone; // @synthesize inboxQPMegaphone=_inboxQPMegaphone;
@property(readonly, copy, nonatomic) IGDirectInboxFolderPagingState *inboxPagingState; // @synthesize inboxPagingState=_inboxPagingState;
@property(readonly, copy, nonatomic) IGDirectInboxViewModelGeneratorViewContext *viewContext; // @synthesize viewContext=_viewContext;
@property(readonly, nonatomic) _Bool isCurrentlySnapshottingInbox; // @synthesize isCurrentlySnapshottingInbox=_isCurrentlySnapshottingInbox;
@property(readonly, nonatomic) _Bool isCacheWarmedUp; // @synthesize isCacheWarmedUp=_isCacheWarmedUp;
@property(readonly, copy, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
- (id)initWithCurrentUser:(id)arg1 isCacheWarmedUp:(_Bool)arg2 isCurrentlySnapshottingInbox:(_Bool)arg3 viewContext:(id)arg4 inboxPagingState:(id)arg5 inboxQPMegaphone:(id)arg6 inboxConfig:(id)arg7 typingStatusByThreadId:(id)arg8 uploadingStoriesData:(id)arg9 threadsAppStatusesByUserId:(id)arg10 videoCallStatusByVideoCallKey:(id)arg11 defaultRecipientsUsersOnly:(id)arg12 activeNowDefaultRecipientsIncludingThreads:(id)arg13 defaultRecipientsIncludingThreads:(id)arg14 presenceStateByUserId:(id)arg15 visualMessagePreloadContextIdentifier:(id)arg16 visualMessageCurrentSessionReplayableThreadId:(id)arg17 numberOfReplayableVisualMessages:(long long)arg18 threadIdOfLastViewedUnseenVisualMessage:(id)arg19 canShowActivationCards:(_Bool)arg20 inboxActivationCardsCellViewModel:(id)arg21 pendingRequestsCount:(long long)arg22 unreadRequestsCount:(long long)arg23 securePendingThreadCount:(long long)arg24 shouldShowPlayButtonWithText:(_Bool)arg25 isEditing:(_Bool)arg26 selectedThreadKeysInEditing:(id)arg27 reelToLatestSeenMediaDateMap:(id)arg28 reelPKsInTopTray:(id)arg29 irisErrorState:(id)arg30 partnershipsInboxMetadata:(id)arg31 hangouts:(id)arg32;

@end

