//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGNavigationControllerDelegate-Protocol.h"

@class IGCommentToolsUpsellModel, IGUserSession, NSString;
@protocol IGCommentToolsUpsellViewControllerDelegate;

@interface IGCommentToolsUpsellViewController : IGGroupedTableViewController <IGGestureHandler, IGNavigationControllerDelegate>
{
    IGCommentToolsUpsellModel *_model;
    IGUserSession *_userSession;
    unsigned long long _selectedRow;
    NSString *_sessionId;
    id <IGCommentToolsUpsellViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCommentToolsUpsellViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logImpressionEvent;
- (void)_logActionEventWithRowType:(unsigned long long)arg1;
- (id)_partialModalSheetViewController;
- (double)_estimatedHeightWithProvider:(id)arg1 forRow:(long long)arg2 inSection:(long long)arg3;
- (void)_configureDescriptionViewProvider:(id)arg1 forRow:(long long)arg2 inSection:(long long)arg3;
- (void)_configureDetailedDisclosureViewProvider:(id)arg1 forRow:(long long)arg2 inSection:(long long)arg3;
- (void)_navigateToCommentControls;
- (struct CGSize)preferredContentSize;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)titleForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 model:(id)arg2 sessionId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

