//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPayPINView;

@protocol FBPayPINViewDelegate <NSObject>
- (void)fbpayPINViewDidTapTermsButton:(FBPayPINView *)arg1;
- (void)fbpayPINViewDidTapDescriptionButton:(FBPayPINView *)arg1;
- (void)fbpayPINViewDidTapLeftNavigationButton:(FBPayPINView *)arg1;
- (void)fbpayPINViewDidTapRightNavigationButton:(FBPayPINView *)arg1;
- (void)fbpayPINViewDidTapBackSpace:(FBPayPINView *)arg1;
- (void)fbpayPINView:(FBPayPINView *)arg1 didTapOnDigit:(unsigned long long)arg2;
@end
