//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

@class IGBottomButtonsView, IGStoryFacepileView, IGUser, NSOrderedSet, UILabel, UIView;

@interface IGAccountLinkingFinishViewController : IGViewController
{
    UIView *_centerView;
    IGStoryFacepileView *_facePileView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGBottomButtonsView *_doneButton;
    IGUser *_mainAccount;
    NSOrderedSet *_childAccounts;
}

- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (void)_configureDoneButton;
- (void)_configureSubtitleLabel;
- (void)_configureTitleLabel;
- (void)_configureFacepileView;
- (void)_configureCenterView;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredTabBarBehavior;
- (_Bool)prefersNavigationBarHidden;
- (long long)statusBarStyle;
- (id)analyticsModule;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMainAccount:(id)arg1 childAccounts:(id)arg2;

@end
