//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGCoreTextView, UILabel;
@protocol IGCoreTextLinkHandler;

@interface IGShoppingShippingAndReturnsSectionCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_contentTextLabel;
    IGCoreTextView *_styledStringTextView;
}

+ (double)preferredHeightForWidth:(double)arg1 title:(id)arg2 text:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler;
- (void)configureWithTitle:(id)arg1 styledString:(id)arg2;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

