//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTBridgeModule-Protocol.h"
#import "RCTTurboModule-Protocol.h"

@class NSString;

@protocol NativeDevSplitBundleLoaderSpec <RCTBridgeModule, RCTTurboModule>
- (void)loadBundle:(NSString *)arg1 resolve:(void (^)(id))arg2 reject:(void (^)(NSString *, NSString *, NSError *))arg3;
@end

