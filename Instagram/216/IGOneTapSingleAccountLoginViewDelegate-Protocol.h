//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGOneTapSingleAccountLoginView, NSURL;

@protocol IGOneTapSingleAccountLoginViewDelegate <NSObject>
- (void)singleOneTapLoginViewDidTapSignUpButton:(IGOneTapSingleAccountLoginView *)arg1;
- (void)singleOneTapLoginViewDidTapSwitchAccountsButton:(IGOneTapSingleAccountLoginView *)arg1;
- (void)singleOneTapLoginView:(IGOneTapSingleAccountLoginView *)arg1 didClickURL:(NSURL *)arg2;
- (void)singleOneTapLoginViewDidTapDismissButton:(IGOneTapSingleAccountLoginView *)arg1;
- (void)singleOneTapLoginViewDidTapSecondaryButton:(IGOneTapSingleAccountLoginView *)arg1;
- (void)singleOneTapLoginViewDidTapLoginButton:(IGOneTapSingleAccountLoginView *)arg1;
@end
