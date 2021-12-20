//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAdPlatformCurrentUserInfoModel, IGAdPlatformToolbox, NSMutableArray, NSString;

@interface IGAdPlatformFunnelLogger : NSObject
{
    struct {
        unsigned long long surface;
        unsigned long long entryPoint;
    } _surfaceInfo;
    NSString *_containerModule;
    NSString *_sessionId;
    NSString *_traySessionId;
    long long _entryIndex;
    IGAdPlatformCurrentUserInfoModel *_currentUserInfo;
    NSMutableArray *_cacheFunnelActionInfo;
    IGAdPlatformToolbox *_adPlatformToolbox;
    _Bool _hasActiveFunnel;
    _Bool _isQPLMigrationEnabled;
}

- (void).cxx_destruct;
- (void)_addCacheFunnelPayloadActions;
- (void)_addCommonValueToFunnelPayload:(id)arg1;
- (void)endFunnel;
- (void)addFunnelPayload:(id)arg1;
- (void)addActionName:(id)arg1 tag:(id)arg2 actionPayload:(id)arg3;
- (void)addActionName:(id)arg1 tag:(id)arg2;
- (void)startFunnelWithFunnelSessionId:(id)arg1 traySessionId:(id)arg2 entryIndex:(long long)arg3;
- (id)initWithAdPlatformToolbox:(id)arg1 surfaceEntryPoint:(unsigned long long)arg2;

@end

