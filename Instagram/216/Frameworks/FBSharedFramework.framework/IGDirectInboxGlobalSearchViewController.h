//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGSearchBarDelegate-Protocol.h>

@class IGBasicListViewController, IGSearchBar, IGSearchBarConfig, NSString;
@protocol IGDirectInboxGlobalSearchViewControllerDelegate;

@interface IGDirectInboxGlobalSearchViewController : IGViewController <IGSearchBarDelegate>
{
    NSString *_searchQuery;
    IGSearchBar *_searchBar;
    IGSearchBarConfig *_searchBarConfig;
    id <IGDirectInboxGlobalSearchViewControllerDelegate> _delegate;
    IGBasicListViewController *_resultsViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGBasicListViewController *resultsViewController; // @synthesize resultsViewController=_resultsViewController;
@property(nonatomic) __weak id <IGDirectInboxGlobalSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)searchBarResignFirstResponder;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)_setupResultViewController;
- (void)_setupSearchBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSearchQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

