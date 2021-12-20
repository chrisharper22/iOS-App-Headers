//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGBrandedContentAllowlistedPartnersNullStateDataSourceDelegate-Protocol.h"
#import "IGBrandedContentPartnersListViewControllerDelegate-Protocol.h"

@class IGUserSession, NSString, UIViewController;
@protocol IGSearchClickHandler;

@interface IGBrandedContentAllowlistedPartnersSearchContainerViewController : IGViewController <IGBrandedContentPartnersListViewControllerDelegate, IGBrandedContentAllowlistedPartnersNullStateDataSourceDelegate>
{
    UIViewController *_searchViewController;
    id <IGSearchClickHandler> _searchClickHandler;
    NSString *_analyticsModule;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)partnersListViewControllerDidClickOnBrandPartner:(id)arg1;
- (void)didTapSeeAllButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 searchViewController:(id)arg2 searchClickHandler:(id)arg3 title:(id)arg4 analyticsModule:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

