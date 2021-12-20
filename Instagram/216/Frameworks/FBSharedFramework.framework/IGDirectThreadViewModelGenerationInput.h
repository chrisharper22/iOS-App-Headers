//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDirectFooterTextPromotionSpec, IGDirectThreadClientState, IGDirectThreadMessageListDisplayState, IGDirectThreadTheme, IGDirectThreadViewFeatureCapabilities, IGDirectThreadViewMessagesClientState, IGDirectThreadViewModelGenerationInputUpdateReason, IGDirectUIMessageSet, IGDirectUIThread, NSArray, NSDictionary, NSOrderedSet, NSSet;
@protocol NSObject;

@interface IGDirectThreadViewModelGenerationInput : FBValueObject <NSCopying, NSCoding>
{
    _Bool _realtimeSyncStatusIsUpToDate;
    IGDirectUIThread *_thread;
    IGDirectUIMessageSet *_threadMessageSet;
    IGDirectThreadViewFeatureCapabilities *_threadCapabilities;
    NSDictionary *_publishedLastSeenMessageIdsForUserIds;
    NSArray *_typingStatuses;
    NSDictionary *_threadsAppStatusesByUserId;
    NSDictionary *_presenceStateByUserId;
    NSOrderedSet *_replayableVisualMessages;
    NSDictionary *_clientContextCacheyKeyMap;
    id <NSObject> _visualMessagePreloadContextIdentifier;
    IGDirectFooterTextPromotionSpec *_footerTextPromotionSpec;
    IGDirectThreadClientState *_directCacheThreadClientState;
    NSSet *_viewedVisualMessages;
    IGDirectThreadViewModelGenerationInputUpdateReason *_updateReason;
    IGDirectThreadViewMessagesClientState *_clientState;
    IGDirectThreadMessageListDisplayState *_messageListDisplayState;
    long long _interopGatingStatus;
    IGDirectThreadTheme *_threadTheme;
    NSSet *_availableNuxes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *availableNuxes; // @synthesize availableNuxes=_availableNuxes;
@property(readonly, copy, nonatomic) IGDirectThreadTheme *threadTheme; // @synthesize threadTheme=_threadTheme;
@property(readonly, nonatomic) long long interopGatingStatus; // @synthesize interopGatingStatus=_interopGatingStatus;
@property(readonly, nonatomic) _Bool realtimeSyncStatusIsUpToDate; // @synthesize realtimeSyncStatusIsUpToDate=_realtimeSyncStatusIsUpToDate;
@property(readonly, copy, nonatomic) IGDirectThreadMessageListDisplayState *messageListDisplayState; // @synthesize messageListDisplayState=_messageListDisplayState;
@property(readonly, copy, nonatomic) IGDirectThreadViewMessagesClientState *clientState; // @synthesize clientState=_clientState;
@property(readonly, copy, nonatomic) IGDirectThreadViewModelGenerationInputUpdateReason *updateReason; // @synthesize updateReason=_updateReason;
@property(readonly, copy, nonatomic) NSSet *viewedVisualMessages; // @synthesize viewedVisualMessages=_viewedVisualMessages;
@property(readonly, copy, nonatomic) IGDirectThreadClientState *directCacheThreadClientState; // @synthesize directCacheThreadClientState=_directCacheThreadClientState;
@property(readonly, copy, nonatomic) IGDirectFooterTextPromotionSpec *footerTextPromotionSpec; // @synthesize footerTextPromotionSpec=_footerTextPromotionSpec;
@property(readonly, nonatomic) id <NSObject> visualMessagePreloadContextIdentifier; // @synthesize visualMessagePreloadContextIdentifier=_visualMessagePreloadContextIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *clientContextCacheyKeyMap; // @synthesize clientContextCacheyKeyMap=_clientContextCacheyKeyMap;
@property(readonly, copy, nonatomic) NSOrderedSet *replayableVisualMessages; // @synthesize replayableVisualMessages=_replayableVisualMessages;
@property(readonly, copy, nonatomic) NSDictionary *presenceStateByUserId; // @synthesize presenceStateByUserId=_presenceStateByUserId;
@property(readonly, copy, nonatomic) NSDictionary *threadsAppStatusesByUserId; // @synthesize threadsAppStatusesByUserId=_threadsAppStatusesByUserId;
@property(readonly, copy, nonatomic) NSArray *typingStatuses; // @synthesize typingStatuses=_typingStatuses;
@property(readonly, copy, nonatomic) NSDictionary *publishedLastSeenMessageIdsForUserIds; // @synthesize publishedLastSeenMessageIdsForUserIds=_publishedLastSeenMessageIdsForUserIds;
@property(readonly, copy, nonatomic) IGDirectThreadViewFeatureCapabilities *threadCapabilities; // @synthesize threadCapabilities=_threadCapabilities;
@property(readonly, copy, nonatomic) IGDirectUIMessageSet *threadMessageSet; // @synthesize threadMessageSet=_threadMessageSet;
@property(readonly, copy, nonatomic) IGDirectUIThread *thread; // @synthesize thread=_thread;
- (id)initWithThread:(id)arg1 threadMessageSet:(id)arg2 threadCapabilities:(id)arg3 publishedLastSeenMessageIdsForUserIds:(id)arg4 typingStatuses:(id)arg5 threadsAppStatusesByUserId:(id)arg6 presenceStateByUserId:(id)arg7 replayableVisualMessages:(id)arg8 clientContextCacheyKeyMap:(id)arg9 visualMessagePreloadContextIdentifier:(id)arg10 footerTextPromotionSpec:(id)arg11 directCacheThreadClientState:(id)arg12 viewedVisualMessages:(id)arg13 updateReason:(id)arg14 clientState:(id)arg15 messageListDisplayState:(id)arg16 realtimeSyncStatusIsUpToDate:(_Bool)arg17 interopGatingStatus:(long long)arg18 threadTheme:(id)arg19 availableNuxes:(id)arg20;

@end

