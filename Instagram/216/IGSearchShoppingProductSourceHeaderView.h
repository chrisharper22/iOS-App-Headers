//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGSearchShoppingProductSourceHeaderView : UIView
{
    UILabel *_productSourceIndicatorLabel;
    UILabel *_productSourceTitleLabel;
    UILabel *_productSourceSubtitleLabel;
    UIImageView *_chevron;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)clearContents;
- (void)configureWithProductSource:(id)arg1 disabled:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

