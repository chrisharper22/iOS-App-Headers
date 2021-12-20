//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, UILabel;

@interface IGShoppingProductInfoView : UIView
{
    IGCoreTextView *_productNameLabel;
    UILabel *_subtitleLabel;
}

+ (double)preferredHeightForWidth:(double)arg1 productName:(id)arg2 productNameFont:(id)arg3 productNameNumberOfLines:(long long)arg4 subtitleFont:(id)arg5;
- (void).cxx_destruct;
- (void)reset;
- (void)configureWithProductName:(id)arg1 productNameNumberOfLines:(long long)arg2 productNameFont:(id)arg3 subtitleAttributedText:(id)arg4 subtitleFont:(id)arg5 showCheckoutSignaling:(_Bool)arg6 width:(double)arg7;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
