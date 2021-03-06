//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGFundraiserDonationStatefulTapButton, NSArray, NSMutableArray, NSNumber, NSString, UIStackView;
@protocol IGFundraiserDonationAmountsViewDelegate;

@interface IGFundraiserDonationAmountsView : UIView
{
    UIStackView *_stackView;
    NSMutableArray *_amountButtons;
    IGFundraiserDonationStatefulTapButton *_otherButton;
    id <IGFundraiserDonationAmountsViewDelegate> _delegate;
    NSArray *_donationAmounts;
    NSString *_currencyISOCode;
    NSNumber *_defaultDonationAmount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *defaultDonationAmount; // @synthesize defaultDonationAmount=_defaultDonationAmount;
@property(retain, nonatomic) NSString *currencyISOCode; // @synthesize currencyISOCode=_currencyISOCode;
@property(retain, nonatomic) NSArray *donationAmounts; // @synthesize donationAmounts=_donationAmounts;
@property(nonatomic) __weak id <IGFundraiserDonationAmountsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enableButtonInteractionsWithSelectedAmount:(id)arg1 wasCustomAmount:(_Bool)arg2;
- (void)disableButtonInteractionsWithKeepEnabledUI:(_Bool)arg1;
- (void)_unselectAmountButtonsExceptForButton:(id)arg1;
- (void)_didTapOtherButton:(id)arg1;
- (void)_didTapAmountButton:(id)arg1;
- (void)_updateButtonLabels;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

