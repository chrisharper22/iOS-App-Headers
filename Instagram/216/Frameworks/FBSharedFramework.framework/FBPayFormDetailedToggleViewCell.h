//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FBPayFormDetailedToggleCellViewModel, UILabel, UISwitch;

@interface FBPayFormDetailedToggleViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UISwitch *_switch;
    FBPayFormDetailedToggleCellViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak FBPayFormDetailedToggleCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_constraintsForSwitch;
- (id)_constraintsForDescriptionLabel;
- (id)_constraintsForTitleLabel;
- (void)_setupConstraints;
- (void)_setupSwitch;
- (void)_setupDescriptionLabel;
- (void)_setupTitleLabel;
- (void)_setupViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

