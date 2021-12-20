//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGSegmentedTabControl, NSArray, NSString, UICollectionView;

@interface IGYourActivityViewController : IGViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    IGSegmentedTabControl *_segmentedTabControl;
    NSArray *_tabs;
    long long _selectedIndex;
    NSArray *_childViewControllers;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (_Bool)prefersNavigationBarDividerHidden;
- (id)_childViewControllerForIndexPath:(id)arg1;
- (void)_segmentedTabControlDidChangeValue:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dismissViewController;
- (void)setSelectedTab:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 tabs:(id)arg2 childViewControllers:(id)arg3 entryPoint:(unsigned long long)arg4;
- (id)initWithUserSession:(id)arg1 entryPoint:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

