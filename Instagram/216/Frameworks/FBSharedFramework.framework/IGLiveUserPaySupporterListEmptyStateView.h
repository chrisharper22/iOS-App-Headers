//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface IGLiveUserPaySupporterListEmptyStateView : UICollectionViewCell
{
    UILabel *_label;
    UIImageView *_imageView;
    double _verticalMargin;
    long long _supporterListType;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateVerticalMargin:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 supporterListType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

