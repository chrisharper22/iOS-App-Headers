//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTwoFactorConfirmationCodeView, NSURL;

@protocol IGTwoFactorConfirmationCodeViewDelegate <NSObject>
- (void)twoFactorConfirmationCodeView:(IGTwoFactorConfirmationCodeView *)arg1 didTapOnContentLinkWithURL:(NSURL *)arg2;
- (void)twoFactorConfirmationCodeView:(IGTwoFactorConfirmationCodeView *)arg1 didTapOnButtonFooterLinkWithURL:(NSURL *)arg2;
- (void)twoFactorConfirmationCodeViewDidTapOnSubmitButton:(IGTwoFactorConfirmationCodeView *)arg1;
@end
