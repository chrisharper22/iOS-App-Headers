//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGShoppingPDPExpandableCell.h"

#import "IGCoreTextLinkHandler-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGShoppingCheckoutShippingAndReturnsModel, NSString, UICollectionView, UIFont;
@protocol IGShoppingPDPShippingReturnsExpandableCellDelegate;

@interface IGShoppingPDPShippingReturnsExpandableCell : IGShoppingPDPExpandableCell <IGCoreTextLinkHandler, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    IGShoppingCheckoutShippingAndReturnsModel *_viewModel;
    NSString *_title;
    UIFont *_titleFont;
    UICollectionView *_collectionView;
    id <IGShoppingPDPShippingReturnsExpandableCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPShippingReturnsExpandableCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1 title:(id)arg2 titleFont:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

