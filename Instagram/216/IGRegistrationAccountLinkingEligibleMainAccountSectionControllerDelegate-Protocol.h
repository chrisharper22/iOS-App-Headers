//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLoginAccount, IGRegistrationAccountLinkingEligibleMainAccountSectionController, NSString;

@protocol IGRegistrationAccountLinkingEligibleMainAccountSectionControllerDelegate <NSObject>
- (NSString *)currentSelectedMainAccountPK;
- (void)registrationAccountLinkingEligibleMainAccountSectionController:(IGRegistrationAccountLinkingEligibleMainAccountSectionController *)arg1 didSelectMainAccount:(IGLoginAccount *)arg2;
@end
