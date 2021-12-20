//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKURLOpening-Protocol.h>

@class FBSDKReferralManagerLogger, NSString, UIViewController;

@interface FBSDKReferralManager : NSObject <FBSDKURLOpening>
{
    _Bool _isPerformingReferral;
    NSString *_expectedChallenge;
    UIViewController *_viewController;
    CDUnknownBlockType _handler;
    FBSDKReferralManagerLogger *_logger;
}

+ (void)setBridgeAPIRequestOpener:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPerformingReferral; // @synthesize isPerformingReferral=_isPerformingReferral;
@property(retain, nonatomic) FBSDKReferralManagerLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSString *expectedChallenge; // @synthesize expectedChallenge=_expectedChallenge;
- (_Bool)isAuthenticationURL:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)canOpenURL:(id)arg1 forApplication:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)validateChallenge:(id)arg1;
- (void)handleOpenURLComplete:(_Bool)arg1 error:(id)arg2;
- (void)handleReferralError:(id)arg1;
- (void)handleReferralCancel;
- (void)invokeHandler:(id)arg1 error:(id)arg2;
- (id)stringForChallenge;
- (id)referralURL;
- (void)startReferralWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithViewController:(id)arg1;
- (id)bridgeAPIRequestOpener;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
