//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol IGCheckpointAutoLoginListener <NSObject>
- (void)autoLoginWithUserDict:(NSDictionary *)arg1 authHeader:(NSString *)arg2 routingHeaders:(NSDictionary *)arg3 destinationURL:(NSURL *)arg4 sessionBeganBlock:(void (^)(IGUserSession *))arg5;
@end
