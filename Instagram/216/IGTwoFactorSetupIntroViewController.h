//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGTwoFactorSetupIntroViewDelegate-Protocol.h"

@class IGTwoFactorSetupIntroView, IGTwoFactorSetupLogger, IGTwoFactorStatusInfo, IGUserSession, NSString;

@interface IGTwoFactorSetupIntroViewController : IGViewController <IGTwoFactorSetupIntroViewDelegate>
{
    IGUserSession *_userSession;
    IGTwoFactorStatusInfo *_statusInfo;
    IGTwoFactorSetupIntroView *_setupIntroView;
    IGTwoFactorSetupLogger *_setupLogger;
    _Bool _presentModally;
}

- (void).cxx_destruct;
- (void)_onDismissTapped;
- (void)twoFactorSetupIntroView:(id)arg1 didTapOnLinkWithURL:(id)arg2;
- (void)twoFactorSetupIntroViewDidTapOnStartButton:(id)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 statusInfo:(id)arg2 setupLogger:(id)arg3 presentModally:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
