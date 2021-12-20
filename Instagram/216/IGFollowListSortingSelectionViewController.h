//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPlainTableViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IGFollowListSortingLogger, IGFollowListSortingModel, NSArray, NSString;
@protocol IGFollowListSortingSelectionViewControllerDelegate;

@interface IGFollowListSortingSelectionViewController : IGPlainTableViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_sortingOptions;
    IGFollowListSortingModel *_selectedOption;
    IGFollowListSortingLogger *_logger;
    id <IGFollowListSortingSelectionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFollowListSortingSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)preferredContentSize;
- (_Bool)prefersStatusBarHidden;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSortingOptions:(id)arg1 selectedOption:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

