//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

@class IGBrandedContentBrandPartnerView, IGTabPageViewController, IGUserReference, IGUserSession, NSString;

@interface IGBrandedContentBrandPartnerAdsContainerViewController : IGViewController
{
    IGTabPageViewController *_tabPageViewController;
    IGBrandedContentBrandPartnerView *_brandPartnerHeaderView;
    IGUserSession *_userSession;
    NSString *_priorModule;
    IGUserReference *_brandPartnerReference;
    long long _adStatusTypeToFocusOn;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_setupTabPageViewController;
- (void)_setupBrandPartnerHeader;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 brandPartnerReference:(id)arg2 adStatusTypeToFocusOn:(long long)arg3 priorModule:(id)arg4;

@end

