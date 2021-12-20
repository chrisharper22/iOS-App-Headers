//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGCoreTextView, UILabel;
@protocol IGCoreTextLinkHandler;

@interface IGShoppingPDPShippingReturnsExpandableSectionCell : UICollectionViewCell
{
    UILabel *_bulletLabel;
    UILabel *_contentTextLabel;
    IGCoreTextView *_styledStringTextView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler;
- (void)layoutSubviews;
- (void)configureWithStyledString:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
