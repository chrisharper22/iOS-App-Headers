//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSMSConfirmationController;

@protocol IGSMSConfirmationControllerDelegate <NSObject>
- (void)smsConfirmationControllerWantsToChangePhoneNumber:(IGSMSConfirmationController *)arg1;
- (void)smsConfirmationControllerWantsToResendConfirmationCode:(IGSMSConfirmationController *)arg1;
- (void)smsConfirmationControllerWantsToCallUserWithConfirmationCode:(IGSMSConfirmationController *)arg1;
@end
