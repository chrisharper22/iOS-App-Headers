//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLoginView, IGTextField;

@protocol IGLoginViewDelegate <NSObject>
- (void)loginViewAdjustContainerViewPosition:(IGLoginView *)arg1 usernameTextField:(IGTextField *)arg2;
- (void)loginViewDidTapShaderView:(IGLoginView *)arg1;
- (void)loginViewDidTapLoginAnotherWayButton:(IGLoginView *)arg1;
- (void)loginViewDidTapForgotPasswordButton:(IGLoginView *)arg1;
- (void)loginViewDidTapLoginButton:(IGLoginView *)arg1;
- (void)loginViewDidTapGearButton:(IGLoginView *)arg1;
- (void)loginViewDidTapBackButton:(IGLoginView *)arg1;
- (void)loginViewDidTapDismissButton:(IGLoginView *)arg1;
- (void)loginViewDidTapSignUpButton:(IGLoginView *)arg1;
- (void)loginViewDidTapFacebookButton:(IGLoginView *)arg1;
@end
