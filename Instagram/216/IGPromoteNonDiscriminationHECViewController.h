//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

#import "IGListAdapterDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGListAdapter, IGUserSession, NSString, UICollectionView;

@interface IGPromoteNonDiscriminationHECViewController : IGPromoteViewController <IGListAdapterDataSource, UICollectionViewDelegate>
{
    IGUserSession *_session;
    UICollectionView *_contentView;
    IGListAdapter *_adapter;
}

- (void).cxx_destruct;
- (void)_loadContentView;
- (void)_setUpContentView;
- (void)_setUpNavigationBar;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_onBackBarButtonTapped;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
