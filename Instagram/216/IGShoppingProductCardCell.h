//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGProductItem, IGShoppingProductThumbnailImageView, NSString, UILabel;
@protocol IGShoppingProductCardCellDelegate;

@interface IGShoppingProductCardCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    UILabel *_nameLabel;
    UILabel *_currentPriceLabel;
    IGShoppingProductThumbnailImageView *_thumbnail;
    IGProductItem *_productItem;
    id <IGShoppingProductCardCellDelegate> _delegate;
}

+ (double)expandedHeightForWidth:(double)arg1 productItem:(id)arg2;
+ (double)collapsedHeightForWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingProductCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForReuse;
- (void)_didTapProductCard;
- (void)configureWithProductItem:(id)arg1 width:(long long)arg2 isExpanded:(_Bool)arg3 analyticsModule:(id)arg4 userSession:(id)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

