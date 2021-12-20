//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGUser, IGUserSession, IGViewController, UIViewController;

@protocol IGRestrictConfirmationIntf <NSObject>
+ (IGViewController *)initRestrictConfirmationSheetWithUserSession:(IGUserSession *)arg1 targetUser:(IGUser *)arg2 didTapOnRestrictUserBlock:(void (^)(IGUser *, UIViewController *))arg3 didCancelRestrictBlock:(void (^)(UIViewController *))arg4;
+ (void)showRestrictConfirmationSheetWithUserSession:(IGUserSession *)arg1 targetUser:(IGUser *)arg2 presentingViewController:(UIViewController *)arg3 didTapOnRestrictUserBlock:(void (^)(IGUser *, UIViewController *))arg4 didCancelRestrictBlock:(void (^)(UIViewController *))arg5;
@end

