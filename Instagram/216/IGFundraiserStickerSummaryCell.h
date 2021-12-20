//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGTapButton, NSString, UIButton, UILabel, UIStackView;
@protocol IGFundraiserStickerSummaryCellDelegate;

@interface IGFundraiserStickerSummaryCell : UICollectionViewCell
{
    UILabel *_amountRaisedLabel;
    UILabel *_raisedForBeneficiaryLabel;
    UIButton *_thanksButton;
    IGTapButton *_iconButton;
    UIStackView *_amountRaisedStackView;
    id <IGFundraiserStickerSummaryCellDelegate> _delegate;
    NSString *_beneficiaryUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *beneficiaryUsername; // @synthesize beneficiaryUsername=_beneficiaryUsername;
@property(nonatomic) __weak id <IGFundraiserStickerSummaryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureRaisedForBeneficiaryLabel;
- (void)_didTapInfoButton;
- (void)_didTapSayThanksButton;
- (void)_didTapRaisedForBeneficiaryLabel;
@property(retain, nonatomic) NSString *amountRaised;
@property(nonatomic) _Bool shouldShowThanksStickerEntry;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

