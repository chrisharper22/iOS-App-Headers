//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

@class IGAccountStoreCoordinator, IGGroupedTableViewFooterView, IGUserSession, NSArray, NSMutableSet;

@interface IGLogoutAllAccountsViewController : IGGroupedTableViewController
{
    IGUserSession *_userSession;
    IGAccountStoreCoordinator *_accountStoreCoordinator;
    long long _logoutEntryPoint;
    NSArray *_loggedInAccounts;
    NSMutableSet *_disabledOneTapIndexPaths;
    IGGroupedTableViewFooterView *_accountsSectionFooterView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGGroupedTableViewFooterView *accountsSectionFooterView; // @synthesize accountsSectionFooterView=_accountsSectionFooterView;
@property(retain, nonatomic) NSMutableSet *disabledOneTapIndexPaths; // @synthesize disabledOneTapIndexPaths=_disabledOneTapIndexPaths;
@property(retain, nonatomic) NSArray *loggedInAccounts; // @synthesize loggedInAccounts=_loggedInAccounts;
- (void)_logoutAllAccounts;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 loggedInAccounts:(id)arg2 logoutEntryPoint:(long long)arg3;

@end
