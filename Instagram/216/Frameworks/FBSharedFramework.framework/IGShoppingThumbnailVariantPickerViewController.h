//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGListAdapterDataSource-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegate-Protocol.h>

@class IGListAdapter, IGShoppingThumbnailVariantPickerConfiguration, IGShoppingVariantDimensionViewModel, NSString, UICollectionView, UILabel;
@protocol IGShoppingThumbnailVariantPickerViewControllerDelegate;

@interface IGShoppingThumbnailVariantPickerViewController : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate>
{
    IGShoppingVariantDimensionViewModel *_variantDimensionViewModel;
    IGShoppingThumbnailVariantPickerConfiguration *_configuration;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    UILabel *_descriptionLabel;
    id <IGShoppingThumbnailVariantPickerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingThumbnailVariantPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_scrollToSelectedCellAnimated:(_Bool)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithVariantDimensionViewModel:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
