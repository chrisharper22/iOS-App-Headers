//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol IGAuthHeaderManaging <NSObject>
- (void)updateLoggingClaimHeader:(NSString *)arg1;
- (NSString *)loggingClaimHeader;
- (void)updateAuthHeader:(NSString *)arg1;
- (NSString *)joinedAuthHeaderForOtherUsers:(NSArray *)arg1;
- (_Bool)hasAuthHeader;
- (NSString *)authHeader;
@end

