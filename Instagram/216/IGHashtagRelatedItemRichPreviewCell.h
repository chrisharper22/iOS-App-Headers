//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGImageView, UILabel;

@interface IGHashtagRelatedItemRichPreviewCell : UICollectionViewCell
{
    IGImageView *_imageView;
    UILabel *_hashtagLabel;
    UILabel *_postCountLabel;
}

+ (double)preferredHeight;
+ (double)preferredWidth;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *postCountLabel; // @synthesize postCountLabel=_postCountLabel;
@property(readonly, nonatomic) UILabel *hashtagLabel; // @synthesize hashtagLabel=_hashtagLabel;
@property(readonly, nonatomic) IGImageView *imageView; // @synthesize imageView=_imageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

