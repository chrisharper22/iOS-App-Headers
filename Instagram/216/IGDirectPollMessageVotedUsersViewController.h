//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IGDirectNicknameManager, IGUserStore, NSArray, NSString, UITableView;

@interface IGDirectPollMessageVotedUsersViewController : IGViewController <UITableViewDataSource, UITableViewDelegate>
{
    IGUserStore *_userStore;
    IGDirectNicknameManager *_nicknameManager;
    NSString *_optionText;
    UITableView *_tableView;
    NSArray *_userPks;
    NSArray *_voterProfileImageUrls;
    double _rowHeight;
    struct CGSize _avatarSize;
}

- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 optionText:(id)arg2 voterUserPks:(id)arg3 voterProfileImageUrls:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

