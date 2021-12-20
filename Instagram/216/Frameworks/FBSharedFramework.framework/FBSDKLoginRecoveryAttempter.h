//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKErrorRecoveryAttempting-Protocol.h>

@class NSString;
@protocol FBSDKLoginProviding;

@interface FBSDKLoginRecoveryAttempter : NSObject <FBSDKErrorRecoveryAttempting>
{
    id <FBSDKLoginProviding> _loginManager;
    Class _accessTokenProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Class accessTokenProvider; // @synthesize accessTokenProvider=_accessTokenProvider;
@property(retain, nonatomic) id <FBSDKLoginProviding> loginManager; // @synthesize loginManager=_loginManager;
- (void)attemptRecoveryFromError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithLoginManager:(id)arg1 accessTokenProvider:(Class)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
