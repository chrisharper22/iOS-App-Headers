//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectMediaInteropUpgradeViewDelegate-Protocol.h"
#import "IGDirectScrollingTabChildViewControllerProtocol-Protocol.h"

@class IGDirectMediaInteropUpgradeConfig, IGDirectMediaInteropUpgradeView, IGDirectMediaInteropUpgradeViewModel, IGUserSession, NSDate, NSString;
@protocol IGDirectMediaInteropUpgradeLoggerProtocol, IGDirectMediaPickerTabReplacementDelegate;

@interface IGDirectMediaInteropUpgradeViewController : IGViewController <IGDirectMediaInteropUpgradeViewDelegate, IGDirectScrollingTabChildViewControllerProtocol>
{
    IGDirectMediaInteropUpgradeConfig *_upgradeConfig;
    IGDirectMediaInteropUpgradeViewModel *_upgradeViewModel;
    long long _upgradeTabIndex;
    id <IGDirectMediaPickerTabReplacementDelegate> _tabReplacementDelegate;
    IGUserSession *_userSession;
    double _bottomInset;
    _Bool _ignoreViewLayout;
    NSDate *_impressionStartTime;
    id <IGDirectMediaInteropUpgradeLoggerProtocol> _logger;
    IGDirectMediaInteropUpgradeView *_upgradeView;
}

- (void).cxx_destruct;
- (void)_onInteropUpgradeSuccess;
- (void)directMediaInteropUpgradeViewDidTapLearnMore:(id)arg1;
- (void)directMediaInteropUpgradeViewDidTapUpgradeButton:(id)arg1;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)containerDidTapSend;
- (void)containerDidUpdateBottomInset:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)_presentDirectUpgrade;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUpgradeConfig:(id)arg1 upgradeViewModel:(id)arg2 upgradeTabIndex:(long long)arg3 tabReplacementDelegate:(id)arg4 userSession:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
