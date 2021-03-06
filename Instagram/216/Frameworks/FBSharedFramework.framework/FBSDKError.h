//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKError : NSObject
{
}

+ (_Bool)isNetworkError:(id)arg1;
+ (id)unknownErrorWithMessage:(id)arg1;
+ (id)requiredArgumentErrorWithDomain:(id)arg1 name:(id)arg2 message:(id)arg3;
+ (id)invalidArgumentErrorWithDomain:(id)arg1 name:(id)arg2 value:(id)arg3 message:(id)arg4 underlyingError:(id)arg5;
+ (id)invalidArgumentErrorWithDomain:(id)arg1 name:(id)arg2 value:(id)arg3 message:(id)arg4;
+ (id)invalidArgumentErrorWithName:(id)arg1 value:(id)arg2 message:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 message:(id)arg4 underlyingError:(id)arg5;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 message:(id)arg3;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (void)configureWithErrorReporter:(id)arg1;
+ (void)setErrorReporter:(id)arg1;
+ (id)errorReporter;

@end

