//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIImageView, UILabel;

@interface IGGalleryAlbumPickerCell : UICollectionViewCell
{
    UIImageView *_thumbnailImageView;
    UILabel *_albumTitleLabel;
    UILabel *_albumCountLabel;
}

+ (id)reuseIdentifier;
+ (double)preferredThumbnailDimension;
+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)configureCellWithThumbnail:(id)arg1 albumTitle:(id)arg2 albumCount:(long long)arg3;
- (void)prepareForReuse;
@property(retain, nonatomic) UIColor *countColor;
@property(retain, nonatomic) UIColor *titleColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
