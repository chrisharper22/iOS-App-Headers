//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGUser, IGUserSession, NSArray, NSString, UIView, UIViewController;

@protocol IGMentionControlsAlertsIntf <NSObject>
+ (void)showAlertInBioCreationForUsers:(NSArray *)arg1 isCauseBlockedUser:(_Bool)arg2 userSession:(IGUserSession *)arg3 presentingViewController:(UIViewController *)arg4 analyticsModule:(NSString *)arg5;
+ (void)showAlertInCommentCreationForUsers:(NSArray *)arg1 isCauseBlockedUser:(_Bool)arg2 userSession:(IGUserSession *)arg3 presentingViewController:(UIViewController *)arg4 analyticsModule:(NSString *)arg5 editCommentBlock:(void (^)(void))arg6 cancelBlock:(void (^)(void))arg7;
+ (void)showAlertInSearchForUser:(IGUser *)arg1 userSession:(IGUserSession *)arg2 entryPoint:(unsigned long long)arg3 presentingViewController:(UIViewController *)arg4 presentingView:(UIView *)arg5 analyticsModule:(NSString *)arg6;
@end

