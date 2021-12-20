//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGuideAddProductSavedViewControllerDelegate-Protocol.h"
#import "IGGuideAddProductSearchViewControllerDelegate-Protocol.h"
#import "IGGuideAddProductShopSearchResultSectionControllerDelegate-Protocol.h"
#import "IGPageViewControllerDataSource-Protocol.h"
#import "IGPageViewControllerDelegate-Protocol.h"
#import "IGTabControlDelegate-Protocol.h"

@class IGGuideAddItemSearchViewController, IGGuideAddProductSavedViewController, IGGuideBottomTabsView, IGPageViewController, IGUserSession, NSArray, NSString;
@protocol IGGuideAddProductTabViewControllerDelegate;

@interface IGGuideAddProductTabViewController : IGViewController <IGGuideAddProductSavedViewControllerDelegate, IGGuideAddProductShopSearchResultSectionControllerDelegate, IGTabControlDelegate, IGPageViewControllerDelegate, IGPageViewControllerDataSource, IGGuideAddProductSearchViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGPageViewController *_pageViewController;
    NSArray *_contentViewControllers;
    IGGuideAddItemSearchViewController *_searchViewController;
    IGGuideAddProductSavedViewController *_savedViewController;
    IGGuideBottomTabsView *_tabsView;
    id <IGGuideAddProductTabViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGuideAddProductTabViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateTitle;
- (void)addProductSearchViewController:(id)arg1 didSelectProductItem:(id)arg2;
- (void)guideAddProductShopResultSectionControllerDidSelectShop:(id)arg1;
- (void)addProductSavedViewController:(id)arg1 didSelectProductItem:(id)arg2;
- (void)tabControl:(id)arg1 tappedSegmentIndex:(unsigned long long)arg2;
- (void)pageViewController:(id)arg1 didChangeCurrentViewController:(id)arg2 toController:(id)arg3 atIndex:(long long)arg4;
- (long long)numberOfPagesForPageViewController:(id)arg1;
- (id)pageViewController:(id)arg1 controllerForIndex:(long long)arg2;
- (void)_cancelButtonTapped;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
