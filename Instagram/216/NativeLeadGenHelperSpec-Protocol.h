//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTBridgeModule-Protocol.h"
#import "RCTTurboModule-Protocol.h"

@class NSString;

@protocol NativeLeadGenHelperSpec <RCTBridgeModule, RCTTurboModule>
- (void)onAppPrepareToClose;
- (void)onScroll:(double)arg1;
- (void)openDialer:(NSString *)arg1 mediaID:(NSString *)arg2 mediaPosition:(double)arg3 carouselIndex:(double)arg4 actionSource:(NSString *)arg5;
- (void)openAdUrl:(NSString *)arg1 mediaID:(NSString *)arg2 mediaPosition:(double)arg3 carouselIndex:(double)arg4 actionSource:(NSString *)arg5;
- (void)submitForm:(NSString *)arg1 mediaID:(NSString *)arg2;
@end

