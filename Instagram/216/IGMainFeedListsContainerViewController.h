//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCollapsibleNavigationBarControllerDelegate-Protocol.h"
#import "IGDynamicPageViewControllerDataSource-Protocol.h"
#import "IGDynamicPageViewControllerDelegate-Protocol.h"
#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGFilteredFeedViewControllerDelegate-Protocol.h"
#import "IGMainFeedAppHeaderControllerDelegate-Protocol.h"
#import "IGMainFeedViewControllerType-Protocol.h"
#import "IGSegmentedTabControlDelegate-Protocol.h"
#import "IGUserListManagerListener-Protocol.h"
#import "IGViewLoadListener-Protocol.h"
#import "IGWheelPickerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGCollapsibleNavigationBarController, IGDynamicPageViewController, IGMainFeedAppHeaderController, IGMainFeedListPickerContainerView, IGMainFeedNetworkSourceController, IGNavigationBar, IGSegmentedTabControl, IGStoryTraySectionController, IGUserSession, IGWheelPicker, NSArray, NSDictionary, NSMutableDictionary, NSString, UINavigationItem, UIView;
@protocol IGFeedFilterType, IGFilteredFeedViewControllerType;

@interface IGMainFeedListsContainerViewController : IGViewController <IGDynamicPageViewControllerDataSource, IGDynamicPageViewControllerDelegate, IGUserListManagerListener, IGMainFeedAppHeaderControllerDelegate, IGWheelPickerDelegate, IGCollapsibleNavigationBarControllerDelegate, IGFilteredFeedViewControllerDelegate, IGViewLoadListener, IGSegmentedTabControlDelegate, UIGestureRecognizerDelegate, IGFeedNetworkSourceDelegate, IGMainFeedViewControllerType>
{
    IGUserSession *_userSession;
    IGMainFeedNetworkSourceController *_networkSourceController;
    IGMainFeedAppHeaderController *_headerController;
    NSArray *_listItems;
    NSDictionary *_listItemsToUserLists;
    long long _maximumListCount;
    long long _pickerStyle;
    long long _pickerDisplayMode;
    IGMainFeedListPickerContainerView *_pickerContainer;
    UIView *_pickerContainerBackgroundView;
    IGDynamicPageViewController *_pageViewController;
    IGWheelPicker *_wheelPicker;
    IGSegmentedTabControl *_segmentedTabControl;
    IGViewController<IGFilteredFeedViewControllerType> *_currentPageViewController;
    UINavigationItem *_localNavigationItem;
    IGNavigationBar *_localNavigationBar;
    IGCollapsibleNavigationBarController *_collapsibleHeaderController;
    NSMutableDictionary *_feedSnapshots;
    NSString *_analyticsModule;
    unsigned long long _type;
    _Bool allowPostAnother;
    _Bool _isSecondary;
    IGStoryTraySectionController *storyTraySectionController;
    id <IGFeedFilterType> filter;
    unsigned long long activityBadgeCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long activityBadgeCount; // @synthesize activityBadgeCount;
@property(retain, nonatomic) id <IGFeedFilterType> filter; // @synthesize filter;
@property(readonly, nonatomic) IGStoryTraySectionController *storyTraySectionController; // @synthesize storyTraySectionController;
@property(readonly, nonatomic) _Bool isSecondary; // @synthesize isSecondary=_isSecondary;
@property(nonatomic) _Bool allowPostAnother; // @synthesize allowPostAnother;
- (void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didStartLoadingWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didUpdatePost:(id)arg2 withChange:(long long)arg3;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)segmentedTabControl:(id)arg1 didLongPressItemAtIndex:(long long)arg2;
- (void)viewControllerViewDidLoad:(id)arg1;
- (void)filteredFeedViewControllerWasSelected:(id)arg1;
- (_Bool)shouldSetInitialTopOffsetForFilteredFeedViewController:(id)arg1;
- (double)initialTopOffsetForFilteredFeedViewController:(id)arg1;
- (void)collapsibleNavigationBarController:(id)arg1 didUpdateNavigationBarPercentCollapsed:(double)arg2 headerViewPercentCollapsed:(double)arg3;
- (void)wheelPicker:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3;
- (void)mainFeedAppHeaderControllerDidRequestEndEditing:(id)arg1 withNavigationTarget:(long long)arg2;
- (void)mainFeedAppHeaderControllerRefreshTapped:(id)arg1;
- (void)mainFeedAppHeaderControllerLogoTapped:(id)arg1;
- (void)userListManagerDidLoadSuggestions:(id)arg1;
- (void)userListManager:(id)arg1 didFailToUpdateWithError:(id)arg2;
- (void)userListManager:(id)arg1 didUpdateList:(id)arg2 withMutation:(id)arg3;
- (void)userListManager:(id)arg1 didStartMutation:(id)arg2;
- (void)userListManager:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)userListManagerDidChangeLists:(id)arg1;
- (void)dynamicPageViewControllerWillBeginDragging:(id)arg1;
- (void)dynamicPageViewController:(id)arg1 didEndDisplayingPageWithIdentifier:(id)arg2;
- (void)dynamicPageViewController:(id)arg1 willDisplayPageWithIdentifier:(id)arg2;
- (void)dynamicPageViewController:(id)arg1 didUpdateSelectionProgress:(double)arg2 betweenPageWithIdentifier:(id)arg3 andPageWithIdentifier:(id)arg4;
- (void)dynamicPageViewController:(id)arg1 didSelectPageWithIdentifier:(id)arg2 reason:(long long)arg3;
- (void)dynamicPageViewController:(id)arg1 willChangeRepresentationStylePageWithIdentifier:(id)arg2 newRepresentationStyle:(long long)arg3 previousRepresentationStyle:(long long)arg4;
- (id)dynamicPageViewController:(id)arg1 placeholderViewForPageWithIdentifier:(id)arg2;
- (_Bool)dynamicPageViewController:(id)arg1 canDisplayPlaceholderViewForPageWithIdentifier:(id)arg2;
- (id)dynamicPageViewController:(id)arg1 viewControllerForPageWithIdentifier:(id)arg2;
- (void)handleTapOnHomeTab;
- (struct CGRect)createButtonFrame;
- (struct CGRect)searchButtonFrame;
- (struct CGRect)activityButtonFrame;
- (struct CGRect)navigationHeaderSecondaryRightNavigationButtonFrame;
- (struct CGRect)navigationHeaderRightNavigationButtonFrame;
- (struct CGRect)navigationHeaderFrame;
- (void)reloadStoryTray;
- (id)directBarButtonDestinationView;
- (id)directBarButton;
- (void)scrollTrayToFrontAnimated:(_Bool)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersNavigationBarDividerHidden;
- (void)_resetScroll;
- (void)_setCurrentPageViewController:(id)arg1;
- (id)_viewControllerForUserList:(id)arg1;
- (id)_suggestedFeedViewController;
- (id)_mainFeedViewController;
- (void)_setupTabControl;
- (void)_setupWheelPicker;
- (void)_setupDynamicPageViewController;
- (void)_tabControlValueChanged:(id)arg1;
- (void)_editList:(id)arg1;
- (void)_editLists;
- (void)_reloadData;
- (id)_listItemForUserList:(id)arg1;
- (id)_buildCollapsibleHeader;
- (void)_setPickerDisplayMode:(long long)arg1;
- (void)_clearCachedFeeds;
- (void)didReceiveMemoryWarning;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 networkSourceController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
