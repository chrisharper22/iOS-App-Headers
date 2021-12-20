//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, IGAvatarShimmeringImageView;

@interface IGAvatarProfilePickerCell : UICollectionViewCell
{
    IGAvatarShimmeringImageView *_avatarImageView;
    CAShapeLayer *_shapeLayer;
    _Bool _isSelected;
}

- (void).cxx_destruct;
- (void)configureCellWithPoseModel:(id)arg1 backgroundModel:(id)arg2 selectionStatus:(_Bool)arg3;
- (void)_setup;
- (void)layoutSubviews;
- (void)_removeSelector;
- (void)_drawSelectorOvalWithState:(_Bool)arg1;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
