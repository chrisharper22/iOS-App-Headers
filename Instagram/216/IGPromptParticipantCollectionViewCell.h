//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGPromptParticipantListViewModel, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol IGPromptParticipantCollectionViewCellDelegate;

@interface IGPromptParticipantCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    IGPromptParticipantListViewModel *_viewModel;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_collectionView;
    id <IGPromptParticipantCollectionViewCellDelegate> _delegate;
}

+ (double)contentHeightFromViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromptParticipantCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)_hasDisclaimerFooter;
- (void)_configureLayout:(long long)arg1;
- (void)layoutSubviews;
- (void)updateTrayViewModel:(id)arg1 atIndex:(long long)arg2;
- (void)configureWithViewModel:(id)arg1;
- (void)_setupCell;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

