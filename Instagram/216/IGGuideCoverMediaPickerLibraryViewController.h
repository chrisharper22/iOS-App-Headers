//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCollectionViewLayoutDataSource-Protocol.h"
#import "IGGalleryDataSourceDelegate-Protocol.h"
#import "IGPhotoLibraryLimitedAccessHeaderViewDelegate-Protocol.h"
#import "IGTabControlSegment-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGGalleryDataSource, IGLibraryAccessPromptView, IGPhotoLibraryLimitedAccessHeaderView, NSString, UICollectionView;
@protocol IGGuideCoverMediaPickerLibraryViewControllerDelegate, IGUserFeatureSets;

@interface IGGuideCoverMediaPickerLibraryViewController : IGViewController <IGCollectionViewLayoutDataSource, IGGalleryDataSourceDelegate, IGPhotoLibraryLimitedAccessHeaderViewDelegate, IGTabControlSegment, UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <IGUserFeatureSets> _userFeatureSets;
    IGGalleryDataSource *_dataSource;
    struct IGGridLayoutConfiguration _layoutConfiguration;
    UICollectionView *_collectionView;
    IGLibraryAccessPromptView *_accessDeniedView;
    IGPhotoLibraryLimitedAccessHeaderView *_limitedAccessHeaderView;
    id <IGGuideCoverMediaPickerLibraryViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGuideCoverMediaPickerLibraryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setupWithoutLibraryPermission;
- (void)_setupWithLibraryPermission;
- (struct UIEdgeInsets)layoutDataSourceCollectionView:(id)arg1 layout:(id)arg2 insetForSection:(long long)arg3;
- (struct CGSize)layoutDataSourceCollectionView:(id)arg1 layout:(id)arg2 sizeForHeaderViewAtIndexPath:(id)arg3;
- (struct CGSize)layoutDataSourceCollectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)galleryDataSourceDidChangeSectionedCollections:(id)arg1;
- (void)galleryDataSource:(id)arg1 didChange:(id)arg2;
- (void)photoLibraryLimitedAccessHeaderViewDidTapManageButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)title;
- (id)initWithUserFeatureSets:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

