//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGShareServiceConfigureManagerDelegate-Protocol.h"

@class IGAnalyticsStructuredLogger, IGShareServiceConfigureManager, IGStoryFacebookEligibilityProvider, IGTableLayoutSpec, IGUserSession, NSArray, NSString;

@interface IGConfigureSharingViewController : IGGroupedTableViewController <IGShareServiceConfigureManagerDelegate>
{
    NSArray *_services;
    IGShareServiceConfigureManager *_configureManager;
    IGUserSession *_userSession;
    IGAnalyticsStructuredLogger *_logger;
    IGStoryFacebookEligibilityProvider *_fbEligibilityProvider;
    IGTableLayoutSpec *_tableInterface;
}

- (void).cxx_destruct;
- (id)tableInterface;
- (_Bool)_isLinkedBusinessUserForServiceType:(long long)arg1;
- (void)_logFacebookCrossPostingSettingsClick;
- (void)_stopSpinnerOnCellWithIndexPath:(id)arg1;
- (void)_startSpinnerOnCellWithIndexPath:(id)arg1;
- (_Bool)_hasFacebookPageLinkedWithServiceType:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_shareServiceAtRow:(long long)arg1;
- (void)shareServiceConfigureManager:(id)arg1 didFailLoginForService:(long long)arg2;
- (void)shareServiceConfigureManager:(id)arg1 didFinishLoginForService:(long long)arg2;
- (void)reloadData;
- (id)viewControllerForShareConfiguration;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
