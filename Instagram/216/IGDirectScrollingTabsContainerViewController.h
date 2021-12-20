//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectMediaPickerTabBarControllerDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGDirectBottomActionButton, IGDirectLightweightTabBarAppearanceConfig, IGDirectLightweightTabBarViewController, NSArray, NSString, UICollectionView;
@protocol IGDirectScrollingTabsContainerViewControllerAnnouncer;

@interface IGDirectScrollingTabsContainerViewController : IGViewController <IGDirectMediaPickerTabBarControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, IGGestureHandler>
{
    NSArray *_tabViewModels;
    NSArray *_navigationControllers;
    UICollectionView *_collectionView;
    IGDirectLightweightTabBarViewController *_tabBarController;
    IGDirectLightweightTabBarAppearanceConfig *_appearanceConfig;
    IGDirectBottomActionButton *_bottomActionButton;
    _Bool _shouldHideBottomActionButton;
    unsigned long long _initialTabIndex;
    id <IGDirectScrollingTabsContainerViewControllerAnnouncer> _announcer;
    _Bool _scrollEnabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
- (_Bool)becomeFirstResponder;
- (_Bool)canRespondToGesture:(id)arg1;
- (double)_bottomInsetForChildViewControllerWithTabBarHidden:(_Bool)arg1 sendButtonHidden:(_Bool)arg2;
- (void)_focusOnViewControllerAtIndex:(long long)arg1;
- (void)_didTapSendButton:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)mediaPickerTabBarController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)replaceTab:(id)arg1 atIndex:(long long)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)_currentlySelectedViewController;
- (id)_currentlySelectedTabController;
- (id)_currentNavigationController;
- (double)bottomInset;
- (void)setTabBarHidden:(_Bool)arg1 sendButtonHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_layoutBottomActionButton;
- (void)_layoutTabBarController;
- (void)_layoutCollectionView;
- (void)viewDidLayoutSubviews;
- (void)_setup;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)initWithTabViewModels:(id)arg1 appearanceConfig:(id)arg2 initialTabViewModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
