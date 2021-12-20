//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, IGTapButton, UIImageView, UILabel;

@interface IGSundialNUXRemixView : UIView
{
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    CALayer *_confirmButtonTopBorder;
    CALayer *_learnMoreButtonTopBorder;
    CALayer *_manageSettingButtonTopBorder;
    IGTapButton *_confirmButton;
    IGTapButton *_learnMoreButton;
    IGTapButton *_manageSettingButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTapButton *manageSettingButton; // @synthesize manageSettingButton=_manageSettingButton;
@property(readonly, nonatomic) IGTapButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(readonly, nonatomic) IGTapButton *confirmButton; // @synthesize confirmButton=_confirmButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

