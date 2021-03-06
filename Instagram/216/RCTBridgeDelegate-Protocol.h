//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, RCTBridge;

@protocol RCTBridgeDelegate <NSObject>
- (NSURL *)sourceURLForBridge:(RCTBridge *)arg1;

@optional
- (NSDictionary *)extraLazyModuleClassesForBridge:(RCTBridge *)arg1;
- (void)loadSourceForBridge:(RCTBridge *)arg1 withBlock:(void (^)(NSError *, RCTSource *))arg2;
- (void)loadSourceForBridge:(RCTBridge *)arg1 onProgress:(void (^)(RCTLoadingProgress *))arg2 onComplete:(void (^)(NSError *, RCTSource *))arg3;
- (_Bool)bridge:(RCTBridge *)arg1 didNotFindModule:(NSString *)arg2;
- (_Bool)shouldBridgeUseCustomJSC:(RCTBridge *)arg1;
- (NSArray *)extraModulesForBridge:(RCTBridge *)arg1;
@end

