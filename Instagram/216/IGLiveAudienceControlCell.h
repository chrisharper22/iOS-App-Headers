//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGCheckmarkViewProvider, IGListItemView;

@interface IGLiveAudienceControlCell : UICollectionViewCell
{
    IGListItemView *_checkmarkView;
    IGCheckmarkViewProvider *_viewProvider;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (double)preferredHeightForCellWithWidth:(double)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

