//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSError, NSString;

@protocol FBSDKErrorCreating
- (NSError *)unknownErrorWithMessage:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (NSError *)requiredArgumentErrorWithDomain:(NSString *)arg1 name:(NSString *)arg2 message:(NSString *)arg3 underlyingError:(NSError *)arg4;
- (NSError *)requiredArgumentErrorWithName:(NSString *)arg1 message:(NSString *)arg2 underlyingError:(NSError *)arg3;
- (NSError *)invalidArgumentErrorWithDomain:(NSString *)arg1 name:(NSString *)arg2 value:(id)arg3 message:(NSString *)arg4 underlyingError:(NSError *)arg5;
- (NSError *)invalidArgumentErrorWithName:(NSString *)arg1 value:(id)arg2 message:(NSString *)arg3 underlyingError:(NSError *)arg4;
- (NSError *)errorWithDomain:(NSString *)arg1 code:(long long)arg2 userInfo:(NSDictionary *)arg3 message:(NSString *)arg4 underlyingError:(NSError *)arg5;
- (NSError *)errorWithCode:(long long)arg1 userInfo:(NSDictionary *)arg2 message:(NSString *)arg3 underlyingError:(NSError *)arg4;
@end

