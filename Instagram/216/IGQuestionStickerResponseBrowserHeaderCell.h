//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UILabel;

@interface IGQuestionStickerResponseBrowserHeaderCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIImageView *_explicitIconImageView;
    _Bool _isExplicit;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
