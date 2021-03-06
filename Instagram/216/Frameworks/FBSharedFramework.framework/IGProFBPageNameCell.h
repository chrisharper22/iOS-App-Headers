//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGProFBPageNameViewModel, IGTextField, UIImageView, UILabel, UIView;

@interface IGProFBPageNameCell : UICollectionViewCell
{
    UIView *_textContainerView;
    UIImageView *_checkMarkImageView;
    UIImageView *_errorImageView;
    IGProFBPageNameViewModel *_viewModel;
    IGTextField *_textField;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IGTextField *textField; // @synthesize textField=_textField;
- (void)_showSpinnerAtRight;
- (void)_showAcceptedIcon;
- (void)_showErrorIcon;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

