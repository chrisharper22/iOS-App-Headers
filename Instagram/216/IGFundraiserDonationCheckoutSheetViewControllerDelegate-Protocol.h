//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFundraiserDonationCheckoutSheetViewController, NSString, UIViewController;

@protocol IGFundraiserDonationCheckoutSheetViewControllerDelegate <NSObject>
- (void)showDonorOutroStandaloneComponentUpsell:(UIViewController *)arg1 withProfileFundraiserID:(NSString *)arg2;
- (void)dismissFundraiserDonationCheckoutSheetViewController:(IGFundraiserDonationCheckoutSheetViewController *)arg1;
- (void)fundraiserDonationCheckoutSheetViewController:(IGFundraiserDonationCheckoutSheetViewController *)arg1 didCompleteDonationWithYouDonatedMessage:(NSString *)arg2 didValidateWithServer:(_Bool)arg3;
@end

