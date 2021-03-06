//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGProfileSheetTableViewController.h"

#import "IGGestureHandler-Protocol.h"
#import "IGSideTrayDataSourceDelegate-Protocol.h"

@class IGUserSession, NSString;

@interface IGProfileMenuSheetViewController : IGProfileSheetTableViewController <IGSideTrayDataSourceDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    _Bool _settingsRowSelected;
}

- (void).cxx_destruct;
- (void)sideTrayDataSource:(id)arg1 objectsDidUpdate:(id)arg2;
- (void)sideTrayDataSource:(id)arg1 reloadSectionController:(id)arg2;
- (void)sideTrayDataSource:(id)arg1 sectionController:(id)arg2 didUpdateBadgeCount:(long long)arg3;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 navigationController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

