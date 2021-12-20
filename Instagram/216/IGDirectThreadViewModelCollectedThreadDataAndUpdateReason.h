//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectThreadClientState, IGDirectThreadMessageListDisplayState, IGDirectThreadTheme, IGDirectThreadViewModelGenerationAccessoryInput, IGDirectThreadViewModelGenerationInputUpdateReason, IGDirectThreadWithUpdateReason, NSDictionary;

@interface IGDirectThreadViewModelCollectedThreadDataAndUpdateReason : NSObject
{
    IGDirectThreadWithUpdateReason *_threadWithUpdateReason;
    IGDirectThreadViewModelGenerationAccessoryInput *_accessoryInput;
    NSDictionary *_threadsAppStatusesMap;
    IGDirectThreadMessageListDisplayState *_messageListDisplayState;
    IGDirectThreadViewModelGenerationInputUpdateReason *_generationInputUpdateReason;
    IGDirectThreadTheme *_threadTheme;
    NSDictionary *_publishedLastSeenMessageIdsForUserIds;
    IGDirectThreadClientState *_directCacheThreadClientState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectThreadClientState *directCacheThreadClientState; // @synthesize directCacheThreadClientState=_directCacheThreadClientState;
@property(readonly, nonatomic) NSDictionary *publishedLastSeenMessageIdsForUserIds; // @synthesize publishedLastSeenMessageIdsForUserIds=_publishedLastSeenMessageIdsForUserIds;
@property(readonly, nonatomic) IGDirectThreadTheme *threadTheme; // @synthesize threadTheme=_threadTheme;
@property(readonly, nonatomic) IGDirectThreadViewModelGenerationInputUpdateReason *generationInputUpdateReason; // @synthesize generationInputUpdateReason=_generationInputUpdateReason;
@property(readonly, nonatomic) IGDirectThreadMessageListDisplayState *messageListDisplayState; // @synthesize messageListDisplayState=_messageListDisplayState;
@property(readonly, nonatomic) NSDictionary *threadsAppStatusesMap; // @synthesize threadsAppStatusesMap=_threadsAppStatusesMap;
@property(readonly, nonatomic) IGDirectThreadViewModelGenerationAccessoryInput *accessoryInput; // @synthesize accessoryInput=_accessoryInput;
@property(readonly, nonatomic) IGDirectThreadWithUpdateReason *threadWithUpdateReason; // @synthesize threadWithUpdateReason=_threadWithUpdateReason;
- (id)initWithThreadWithUpdateReason:(id)arg1 accessoryInput:(id)arg2 threadsAppStatusesMap:(id)arg3 messageListDisplayState:(id)arg4 generationInputUpdateReason:(id)arg5 threadTheme:(id)arg6 publishedLastSeenMessageIdsForUserIds:(id)arg7 directCacheThreadClientState:(id)arg8;

@end
