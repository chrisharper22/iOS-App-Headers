//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGCheckmarkViewProvider, IGListItemView, UIView;

@interface IGRegistrationTermsOfUseCell : UICollectionViewCell
{
    IGListItemView *_checkmarkView;
    IGCheckmarkViewProvider *_viewProvider;
    UIView *_bottomBorder;
    _Bool _showBottomBorder;
}

- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setDescriptionLinkHandler:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

