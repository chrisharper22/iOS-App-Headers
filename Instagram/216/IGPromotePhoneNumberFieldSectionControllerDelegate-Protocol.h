//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGPromotePhoneNumberFieldSectionController, IGPromotePhoneNumberFieldViewModel, NSString;

@protocol IGPromotePhoneNumberFieldSectionControllerDelegate <NSObject>
- (void)promotePhoneNumberFieldSectionController:(IGPromotePhoneNumberFieldSectionController *)arg1 didEndEditingWithViewModel:(IGPromotePhoneNumberFieldViewModel *)arg2 phoneNumber:(NSString *)arg3 countryNumber:(NSString *)arg4 countryCode:(NSString *)arg5;
- (void)promotePhoneNumberFieldSectionController:(IGPromotePhoneNumberFieldSectionController *)arg1 didTapCountryCodeWithViewModel:(IGPromotePhoneNumberFieldViewModel *)arg2;
@end
