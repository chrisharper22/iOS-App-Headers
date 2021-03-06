//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@protocol FXMasterAccountCacheHelper <NSObject>
- (void)logEvent:(NSString *)arg1 callerName:(NSString *)arg2 serviceNames:(NSArray *)arg3 debugData:(NSDictionary *)arg4;
- (_Bool)shouldAllowCallerName:(NSString *)arg1;
- (NSDate *)readTimestampFromDisk;
- (NSArray *)readLinkedAccountsFromDisk;
- (void)evictAllLinkedAccountsFromDisk;
- (void)writeLinkedAccountsToDisk:(NSArray *)arg1 withTimestamp:(NSDate *)arg2;
- (void)fetchLinkedAccountsFromServerWithSuccessBlock:(void (^)(NSArray *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (NSString *)identifier;
@end

