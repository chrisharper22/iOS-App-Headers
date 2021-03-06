//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGCommentManagementCommentControlsViewControllerDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGNavigationControllerDelegate-Protocol.h"

@class IGMedia, IGUserSession, NSArray, NSString;
@protocol IGCommentManagementTopLevelMenuViewControllerDelegate;

@interface IGCommentManagementTopLevelMenuViewController : IGGroupedTableViewController <IGNavigationControllerDelegate, IGCommentManagementCommentControlsViewControllerDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    IGMedia *_media;
    NSArray *_rows;
    unsigned long long _step;
    id <IGCommentManagementTopLevelMenuViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCommentManagementTopLevelMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updatePartialSheetHeight:(id)arg1;
- (id)_partialModalSheetViewController;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)commentControlsViewControllerDidSelectHideComments:(id)arg1;
- (void)commentControlsViewControllerDidSelectTurnOffCommenting:(id)arg1 isOn:(_Bool)arg2;
- (struct CGSize)preferredContentSize;
- (_Bool)prefersStatusBarHidden;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 showLimitedComments:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

