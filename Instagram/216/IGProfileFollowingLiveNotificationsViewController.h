//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

@class IGUser, IGUserSession;

@interface IGProfileFollowingLiveNotificationsViewController : IGGroupedTableViewController
{
    IGUser *_user;
    IGUserSession *_userSession;
    long long _selectedLiveSubscriptionStatus;
}

- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (_Bool)prefersStatusBarHidden;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)titleForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUser:(id)arg1 userSession:(id)arg2;

@end

