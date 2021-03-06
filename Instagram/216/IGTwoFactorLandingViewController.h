//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

@class IGTwoFactorSetupLogger, IGTwoFactorStatusInfo, IGUserSession, UIBarButtonItem;

@interface IGTwoFactorLandingViewController : IGViewController
{
    IGUserSession *_userSession;
    IGTwoFactorStatusInfo *_statusInfo;
    UIBarButtonItem *_refreshBarButtonItem;
    IGTwoFactorSetupLogger *_setupLogger;
    long long _entryPoint;
    _Bool _presentModally;
}

- (void).cxx_destruct;
- (void)_onDismissTapped;
- (id)_entryPoint;
- (void)_fetchAccountSecurityInfo;
- (void)_configView;
- (void)_updateDataWithDictionary:(id)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 entryPoint:(long long)arg2 presentModally:(_Bool)arg3;

@end

