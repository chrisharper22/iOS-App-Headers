//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol IGAPIClient;

@protocol IGSystemMessageListener <NSObject>
- (void)apiClient:(id <IGAPIClient>)arg1 nonIGSystemMessageWithUserInfo:(NSDictionary *)arg2;
- (void)apiClient:(id <IGAPIClient>)arg1 systemMessage:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end

