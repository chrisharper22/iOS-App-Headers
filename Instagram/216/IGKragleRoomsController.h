//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGNativeRoomsService, NSString;
@protocol IGUserLauncherSetProviding;

@interface IGKragleRoomsController : NSObject
{
    id <IGUserLauncherSetProviding> _launcherSet;
    struct __RSRoomsApi *_roomsApi;
    NSString *_localCallId;
    NSString *_ttrcTraceId;
    IGNativeRoomsService *_roomsService;
    NSString *_roomUrl;
}

- (void).cxx_destruct;
- (const struct __MCFArray *)createFeaturesWithDispatchHandler:(CDUnknownFunctionPointerType)arg1 dispatchContext:(void *)arg2;
- (void)endRoomWithURL:(id)arg1;
- (void)updateLockStatusForRoom:(id)arg1 locked:(_Bool)arg2 canAnonymousUsersJoin:(_Bool)arg3;
- (void)joinURL:(id)arg1;
- (void)openURL:(id)arg1 autoJoin:(_Bool)arg2 ttrcTraceId:(id)arg3;
- (void)dealloc;
- (id)initWithLocalCallId:(id)arg1 roomsService:(id)arg2 launcherSet:(id)arg3;

@end

