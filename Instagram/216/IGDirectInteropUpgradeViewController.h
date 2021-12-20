//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class IGDirectInteropGatingManager, IGDirectInteropUpgradeSourceIdentifier, IGDirectInteropUpgradeViewModel, IGUserSession, NSString, UIView;

@interface IGDirectInteropUpgradeViewController : UIViewController <IGAnalyticsModule, UITextViewDelegate>
{
    UIView *_upgradeView;
    IGDirectInteropUpgradeViewModel *_viewModel;
    IGDirectInteropGatingManager *_gatingManager;
    NSString *_interstitialType;
    IGDirectInteropUpgradeSourceIdentifier *_upgradeSource;
    IGUserSession *_userSession;
    _Bool _isBusinessAccount;
}

- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)analyticsModule;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 userSession:(id)arg2 interopGatingManager:(id)arg3 interstitialType:(id)arg4 upgradeSourceIdentifier:(id)arg5 isBusinessAccount:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

