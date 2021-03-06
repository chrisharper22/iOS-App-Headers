//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class IGTextView, NSNumber, NSString;
@protocol IGFundraiserDonationOtherAmountEntryViewDelegate;

@interface IGFundraiserDonationOtherAmountEntryView : UIView <UITextViewDelegate>
{
    IGTextView *_amountTextView;
    UIView *_hairlineView;
    NSNumber *_donationAmount;
    long long _digitCount;
    id <IGFundraiserDonationOtherAmountEntryViewDelegate> _delegate;
    NSString *_currencyISOCode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currencyISOCode; // @synthesize currencyISOCode=_currencyISOCode;
@property(nonatomic) __weak id <IGFundraiserDonationOtherAmountEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearDonationAmount;
- (void)setSingleEntryFieldViewWithPrefillAmount:(long long)arg1;
@property(retain, nonatomic) NSNumber *enteredAmount;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)updateHairlineColorWithIsErrorState:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

