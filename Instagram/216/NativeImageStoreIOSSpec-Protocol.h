//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTBridgeModule-Protocol.h"
#import "RCTTurboModule-Protocol.h"

@class NSString;

@protocol NativeImageStoreIOSSpec <RCTBridgeModule, RCTTurboModule>
- (void)addImageFromBase64:(NSString *)arg1 successCallback:(void (^)(NSArray *))arg2 errorCallback:(void (^)(NSArray *))arg3;
- (void)removeImageForTag:(NSString *)arg1;
- (void)hasImageForTag:(NSString *)arg1 callback:(void (^)(NSArray *))arg2;
- (void)getBase64ForTag:(NSString *)arg1 successCallback:(void (^)(NSArray *))arg2 errorCallback:(void (^)(NSArray *))arg3;
@end

