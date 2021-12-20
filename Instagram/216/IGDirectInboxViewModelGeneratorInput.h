//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGDirectInboxConfig, IGDirectInboxFolderPagingState, IGDirectInboxTabViewModel, IGDirectInboxViewModelGeneratorViewContext, IGDirectPartnershipsInboxMetadata, IGDirectRealtimeIrisSyncErrorState, IGNonFeedHScrollActivationCardsCellViewModel, IGQPMegaphone, IGUser, NSArray, NSDictionary, NSOrderedSet, NSSet;
@protocol NSObject;

@interface IGDirectInboxViewModelGeneratorInput : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isCacheWarmedUp;
    _Bool _isCurrentlySnapshottingInbox;
    _Bool _canShowActivationCards;
    _Bool _shouldShowPlayButtonWithText;
    _Bool _isEditing;
    _Bool _hasPendingThreadsToLoad;
    NSArray *_threadsData;
    IGUser *_currentUser;
    IGDirectInboxViewModelGeneratorViewContext *_viewContext;
    IGDirectInboxFolderPagingState *_inboxPagingState;
    IGQPMegaphone *_inboxQPMegaphone;
    IGDirectInboxConfig *_inboxConfig;
    NSArray *_defaultRecipientsUsersOnly;
    NSArray *_activeNowDefaultRecipientsIncludingThreads;
    NSArray *_defaultRecipientsIncludingThreads;
    NSDictionary *_presenceStateByUserId;
    long long _selectedThreadsFilterType;
    IGDirectInboxTabViewModel *_selectedTab;
    NSOrderedSet *_tabs;
    id <NSObject> _visualMessagePreloadContextIdentifier;
    IGNonFeedHScrollActivationCardsCellViewModel *_inboxActivationCardsCellViewModel;
    long long _totalPendingRequestsCount;
    long long _unreadRequestsCount;
    NSSet *_selectedThreadKeysInEditing;
    NSDictionary *_reelToLatestSeenMediaDateMap;
    NSSet *_reelPKsInTopTray;
    IGDirectRealtimeIrisSyncErrorState *_irisErrorState;
    long long _businessHighVolumeRateLimitState;
    IGDirectPartnershipsInboxMetadata *_partnershipsInboxMetadata;
    NSArray *_hangouts;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasPendingThreadsToLoad; // @synthesize hasPendingThreadsToLoad=_hasPendingThreadsToLoad;
@property(readonly, copy, nonatomic) NSArray *hangouts; // @synthesize hangouts=_hangouts;
@property(readonly, copy, nonatomic) IGDirectPartnershipsInboxMetadata *partnershipsInboxMetadata; // @synthesize partnershipsInboxMetadata=_partnershipsInboxMetadata;
@property(readonly, nonatomic) long long businessHighVolumeRateLimitState; // @synthesize businessHighVolumeRateLimitState=_businessHighVolumeRateLimitState;
@property(readonly, copy, nonatomic) IGDirectRealtimeIrisSyncErrorState *irisErrorState; // @synthesize irisErrorState=_irisErrorState;
@property(readonly, copy, nonatomic) NSSet *reelPKsInTopTray; // @synthesize reelPKsInTopTray=_reelPKsInTopTray;
@property(readonly, copy, nonatomic) NSDictionary *reelToLatestSeenMediaDateMap; // @synthesize reelToLatestSeenMediaDateMap=_reelToLatestSeenMediaDateMap;
@property(readonly, copy, nonatomic) NSSet *selectedThreadKeysInEditing; // @synthesize selectedThreadKeysInEditing=_selectedThreadKeysInEditing;
@property(readonly, nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(readonly, nonatomic) _Bool shouldShowPlayButtonWithText; // @synthesize shouldShowPlayButtonWithText=_shouldShowPlayButtonWithText;
@property(readonly, nonatomic) long long unreadRequestsCount; // @synthesize unreadRequestsCount=_unreadRequestsCount;
@property(readonly, nonatomic) long long totalPendingRequestsCount; // @synthesize totalPendingRequestsCount=_totalPendingRequestsCount;
@property(readonly, copy, nonatomic) IGNonFeedHScrollActivationCardsCellViewModel *inboxActivationCardsCellViewModel; // @synthesize inboxActivationCardsCellViewModel=_inboxActivationCardsCellViewModel;
@property(readonly, nonatomic) _Bool canShowActivationCards; // @synthesize canShowActivationCards=_canShowActivationCards;
@property(readonly, nonatomic) id <NSObject> visualMessagePreloadContextIdentifier; // @synthesize visualMessagePreloadContextIdentifier=_visualMessagePreloadContextIdentifier;
@property(readonly, copy, nonatomic) NSOrderedSet *tabs; // @synthesize tabs=_tabs;
@property(readonly, copy, nonatomic) IGDirectInboxTabViewModel *selectedTab; // @synthesize selectedTab=_selectedTab;
@property(readonly, nonatomic) long long selectedThreadsFilterType; // @synthesize selectedThreadsFilterType=_selectedThreadsFilterType;
@property(readonly, copy, nonatomic) NSDictionary *presenceStateByUserId; // @synthesize presenceStateByUserId=_presenceStateByUserId;
@property(readonly, copy, nonatomic) NSArray *defaultRecipientsIncludingThreads; // @synthesize defaultRecipientsIncludingThreads=_defaultRecipientsIncludingThreads;
@property(readonly, copy, nonatomic) NSArray *activeNowDefaultRecipientsIncludingThreads; // @synthesize activeNowDefaultRecipientsIncludingThreads=_activeNowDefaultRecipientsIncludingThreads;
@property(readonly, copy, nonatomic) NSArray *defaultRecipientsUsersOnly; // @synthesize defaultRecipientsUsersOnly=_defaultRecipientsUsersOnly;
@property(readonly, copy, nonatomic) IGDirectInboxConfig *inboxConfig; // @synthesize inboxConfig=_inboxConfig;
@property(readonly, copy, nonatomic) IGQPMegaphone *inboxQPMegaphone; // @synthesize inboxQPMegaphone=_inboxQPMegaphone;
@property(readonly, copy, nonatomic) IGDirectInboxFolderPagingState *inboxPagingState; // @synthesize inboxPagingState=_inboxPagingState;
@property(readonly, copy, nonatomic) IGDirectInboxViewModelGeneratorViewContext *viewContext; // @synthesize viewContext=_viewContext;
@property(readonly, nonatomic) _Bool isCurrentlySnapshottingInbox; // @synthesize isCurrentlySnapshottingInbox=_isCurrentlySnapshottingInbox;
@property(readonly, nonatomic) _Bool isCacheWarmedUp; // @synthesize isCacheWarmedUp=_isCacheWarmedUp;
@property(readonly, copy, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, copy, nonatomic) NSArray *threadsData; // @synthesize threadsData=_threadsData;
- (id)initWithThreadsData:(id)arg1 currentUser:(id)arg2 isCacheWarmedUp:(_Bool)arg3 isCurrentlySnapshottingInbox:(_Bool)arg4 viewContext:(id)arg5 inboxPagingState:(id)arg6 inboxQPMegaphone:(id)arg7 inboxConfig:(id)arg8 defaultRecipientsUsersOnly:(id)arg9 activeNowDefaultRecipientsIncludingThreads:(id)arg10 defaultRecipientsIncludingThreads:(id)arg11 presenceStateByUserId:(id)arg12 selectedThreadsFilterType:(long long)arg13 selectedTab:(id)arg14 tabs:(id)arg15 visualMessagePreloadContextIdentifier:(id)arg16 canShowActivationCards:(_Bool)arg17 inboxActivationCardsCellViewModel:(id)arg18 totalPendingRequestsCount:(long long)arg19 unreadRequestsCount:(long long)arg20 shouldShowPlayButtonWithText:(_Bool)arg21 isEditing:(_Bool)arg22 selectedThreadKeysInEditing:(id)arg23 reelToLatestSeenMediaDateMap:(id)arg24 reelPKsInTopTray:(id)arg25 irisErrorState:(id)arg26 businessHighVolumeRateLimitState:(long long)arg27 partnershipsInboxMetadata:(id)arg28 hangouts:(id)arg29 hasPendingThreadsToLoad:(_Bool)arg30;

@end
