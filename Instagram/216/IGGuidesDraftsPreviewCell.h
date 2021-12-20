//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGImageView, IGStackLayout, UIImageView, UILabel, UIView;

@interface IGGuidesDraftsPreviewCell : UICollectionViewCell
{
    UILabel *_draftsCountLabel;
    UILabel *_onlyYouCanSeeThisLabel;
    UIImageView *_chevronImageView;
    IGStackLayout *_textLayout;
    UIView *_bottomSeparator;
    IGImageView *_thumbnailImageView;
    long long _draftCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long draftCount; // @synthesize draftCount=_draftCount;
@property(readonly, nonatomic) IGImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void)setHighlighted:(_Bool)arg1;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
