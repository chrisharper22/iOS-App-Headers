//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PHAsset, UIImage, UIImageView;

@interface IGFundraiserMediaPickerLibraryCell : UICollectionViewCell
{
    UIImageView *_imageView;
    PHAsset *_asset;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PHAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak UIImage *thumbnail;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
