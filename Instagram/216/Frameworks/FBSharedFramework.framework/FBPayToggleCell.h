//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBPayToggleCellViewModel, NSLayoutConstraint, UILabel, UISwitch;
@protocol FBPayToggleCellDelegate;

@interface FBPayToggleCell : UITableViewCell
{
    long long _identifier;
    FBPayToggleCellViewModel *_viewModel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UISwitch *_switch;
    NSLayoutConstraint *_titleCenterYConstraint;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_switchCenterYConstraint;
    NSLayoutConstraint *_switchTopConstraint;
    id <FBPayToggleCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayToggleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_constraintsForSwitch;
- (id)_constraintsForSubtitleLabel;
- (id)_constraintsForTitleLabel;
- (void)_updateConstraints;
- (void)_setupConstraints;
- (void)_setupToggleSwitchWithIsOn:(_Bool)arg1 isEnabled:(_Bool)arg2;
- (void)_setupSubtitleLabelWithText:(id)arg1;
- (void)_setupTitleLabelWithText:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)accessibilityActivate;
- (void)_onSwitchToggle:(id)arg1;
- (void)setIsEnabled:(_Bool)arg1;
- (void)setCellIdentifier:(long long)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setCellTitle:(id)arg1 subtitle:(id)arg2 isOn:(_Bool)arg3 isEnabled:(_Bool)arg4;
- (void)setViewModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

