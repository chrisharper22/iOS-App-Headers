//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGDirectFooterTextPromotionSpec, IGDirectThreadViewMessagesClientState, NSArray, NSDictionary, NSOrderedSet, NSSet;
@protocol NSObject;

@interface IGDirectThreadViewModelGenerationAccessoryInput : FBValueObject <NSCopying, NSCoding>
{
    _Bool _realtimeSyncStatusIsUpToDate;
    _Bool _isLightInterfaceStyle;
    NSArray *_typingStatuses;
    NSDictionary *_presenceStateByUserId;
    NSOrderedSet *_replayableVisualMessages;
    NSDictionary *_sortingInfoOverrideMap;
    NSDictionary *_clientContextCacheKeyMap;
    id <NSObject> _visualMessagePreloadContextIdentifier;
    IGDirectFooterTextPromotionSpec *_footerTextPromotionSpec;
    NSSet *_viewedVisualMessages;
    unsigned long long _updateReason;
    IGDirectThreadViewMessagesClientState *_clientState;
    long long _interopGatingStatus;
    NSSet *_availableNUXes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isLightInterfaceStyle; // @synthesize isLightInterfaceStyle=_isLightInterfaceStyle;
@property(readonly, copy, nonatomic) NSSet *availableNUXes; // @synthesize availableNUXes=_availableNUXes;
@property(readonly, nonatomic) long long interopGatingStatus; // @synthesize interopGatingStatus=_interopGatingStatus;
@property(readonly, nonatomic) _Bool realtimeSyncStatusIsUpToDate; // @synthesize realtimeSyncStatusIsUpToDate=_realtimeSyncStatusIsUpToDate;
@property(readonly, copy, nonatomic) IGDirectThreadViewMessagesClientState *clientState; // @synthesize clientState=_clientState;
@property(readonly, nonatomic) unsigned long long updateReason; // @synthesize updateReason=_updateReason;
@property(readonly, copy, nonatomic) NSSet *viewedVisualMessages; // @synthesize viewedVisualMessages=_viewedVisualMessages;
@property(readonly, copy, nonatomic) IGDirectFooterTextPromotionSpec *footerTextPromotionSpec; // @synthesize footerTextPromotionSpec=_footerTextPromotionSpec;
@property(readonly, nonatomic) id <NSObject> visualMessagePreloadContextIdentifier; // @synthesize visualMessagePreloadContextIdentifier=_visualMessagePreloadContextIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *clientContextCacheKeyMap; // @synthesize clientContextCacheKeyMap=_clientContextCacheKeyMap;
@property(readonly, copy, nonatomic) NSDictionary *sortingInfoOverrideMap; // @synthesize sortingInfoOverrideMap=_sortingInfoOverrideMap;
@property(readonly, copy, nonatomic) NSOrderedSet *replayableVisualMessages; // @synthesize replayableVisualMessages=_replayableVisualMessages;
@property(readonly, copy, nonatomic) NSDictionary *presenceStateByUserId; // @synthesize presenceStateByUserId=_presenceStateByUserId;
@property(readonly, copy, nonatomic) NSArray *typingStatuses; // @synthesize typingStatuses=_typingStatuses;
- (id)initWithTypingStatuses:(id)arg1 presenceStateByUserId:(id)arg2 replayableVisualMessages:(id)arg3 sortingInfoOverrideMap:(id)arg4 clientContextCacheKeyMap:(id)arg5 visualMessagePreloadContextIdentifier:(id)arg6 footerTextPromotionSpec:(id)arg7 viewedVisualMessages:(id)arg8 updateReason:(unsigned long long)arg9 clientState:(id)arg10 realtimeSyncStatusIsUpToDate:(_Bool)arg11 interopGatingStatus:(long long)arg12 availableNUXes:(id)arg13 isLightInterfaceStyle:(_Bool)arg14;

@end

