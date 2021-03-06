//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPayPINView, NSAttributedString, NSString;

@protocol FBPayPINViewDataSource <NSObject>
- (NSString *)fbpayPINViewDescriptionButtonTitle:(FBPayPINView *)arg1;
- (NSString *)fbpayPINViewTextFieldTitle:(FBPayPINView *)arg1;
- (_Bool)isPINViewInTestMode:(FBPayPINView *)arg1;
- (_Bool)shouldShowDescriptionButtonInView:(FBPayPINView *)arg1;
- (unsigned long long)fbpayPINView:(FBPayPINView *)arg1 numberOfDigitsForUserStep:(long long)arg2;
- (NSAttributedString *)fbpayPINViewDescriptionText:(FBPayPINView *)arg1;
- (NSString *)fbpayPINView:(FBPayPINView *)arg1 textForTitleAtUserStep:(long long)arg2;
- (long long)fbpayPINViewCurrentUserStep:(FBPayPINView *)arg1;
- (NSString *)fbpayPINViewRightNavigationButtonTitle:(FBPayPINView *)arg1;
- (NSString *)fbpayPINViewPageTitle:(FBPayPINView *)arg1;
@end

