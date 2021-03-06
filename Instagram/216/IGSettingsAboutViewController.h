//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGSettingsSearch-Protocol.h"

@class IGSettingsAboutModel, NSString;

@interface IGSettingsAboutViewController : IGGroupedTableViewController <IGSettingsSearch>
{
    IGSettingsAboutModel *_aboutModel;
}

- (void).cxx_destruct;
- (id)_appVersionString;
- (void)_startAdRating;
- (void)_configureAboutCell:(id)arg1 forRow:(long long)arg2;
- (void)performActionForAboutRowType:(long long)arg1;
- (void)performActionForSearchText:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct UIEdgeInsets)preferredMinimizableInsets;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)_prepareAppearance;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

