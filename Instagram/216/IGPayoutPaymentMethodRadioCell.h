//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IGImageView, IGRadioButton, IGSettingsDescriptionBodyView, UILabel;
@protocol IGPayoutPaymentMethodRadioCellDelegate;

@interface IGPayoutPaymentMethodRadioCell : UITableViewCell
{
    UILabel *_titleLabel;
    IGSettingsDescriptionBodyView *_descriptionLabel;
    IGRadioButton *_radioButton;
    long long _identifier;
    id <IGPayoutPaymentMethodRadioCellDelegate> _delegate;
    IGImageView *_iconImageView;
    _Bool _shouldShowDescriptions;
}

- (void).cxx_destruct;
- (void)setRadioButtonSelected:(_Bool)arg1;
- (void)_radioButtonDidTap:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)arg1 description:(id)arg2 delegate:(id)arg3 identifier:(long long)arg4 iconImageURL:(id)arg5 shouldShowDescriptions:(_Bool)arg6;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

