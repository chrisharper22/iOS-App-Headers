//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FBPayPayPalNetworking <NSObject>
- (void)finalizeAccountLinkingWithBaToken:(NSString *)arg1 loggingId:(NSString *)arg2 paymentType:(unsigned int)arg3 sessionId:(NSString *)arg4 success:(void (^)(void))arg5 failure:(void (^)(NSError *))arg6;
- (void)authenticationLinkMutationWithLoggingId:(NSString *)arg1 paymentType:(unsigned int)arg2 success:(void (^)(NSString *))arg3 failure:(void (^)(NSError *))arg4;
@end

