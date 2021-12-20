//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGBackgroundGradient, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGMemoriesStickerListViewControllerDelegate;

@interface IGMemoriesStickerListViewController : IGViewController <UICollectionViewDataSource, UICollectionViewDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    NSArray *_models;
    UICollectionView *_collectionView;
    IGBackgroundGradient *_backgroundGradient;
    id <IGMemoriesStickerListViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMemoriesStickerListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureMemoriesForStickerCell:(id)arg1 withOnThisDayModel:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithOnThisDayModels:(id)arg1 backgroundGradient:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

