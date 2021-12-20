//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ACSCachedToken, ACSServerConfig, NSArray, NSString;

@protocol ACSStorageManager <NSObject>
- (void)removeServerConfigWithId:(NSString *)arg1;
- (void)storeServerConfig:(ACSServerConfig *)arg1;
- (NSArray *)getServerConfigs;
- (ACSServerConfig *)getServerConfigWithId:(NSString *)arg1;
- (void)deleteCachedToken:(ACSCachedToken *)arg1;
- (void)storeCachedToken:(ACSCachedToken *)arg1;
- (ACSCachedToken *)getCachedTokenWithServerConfigId:(NSString *)arg1;
@end

