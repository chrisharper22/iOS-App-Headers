//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGConfirmEmailHelper : NSObject
{
}

+ (id)_stringForConfirmEmailSource:(long long)arg1;
+ (void)verifyConfirmationCode:(id)arg1 forEmail:(id)arg2 userSession:(id)arg3 withVerificationSuccessBlock:(CDUnknownBlockType)arg4 verificationFailureBlock:(CDUnknownBlockType)arg5;
+ (void)confirmEmail:(id)arg1 fromSource:(long long)arg2 userSession:(id)arg3 withSuccessBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5 codeVerificationBlock:(CDUnknownBlockType)arg6;

@end
