//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface IGBusinessAttributeSyncInfoCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
- (struct CGSize)_subtitleLabelSize:(struct CGSize)arg1;
- (struct CGSize)_subtitleSize;
- (struct CGSize)_titleLabelSize:(struct CGSize)arg1;
- (struct CGSize)_titleLabelSize;
- (void)_setup;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

