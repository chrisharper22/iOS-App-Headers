//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDirectThreadNotificationPresenter : NSObject
{
}

- (void)_presentAttributedTextWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 image:(id)arg4 threadId:(id)arg5 threadKey:(id)arg6 isCloseFriendThread:(id)arg7 userSession:(id)arg8 tapDestination:(long long)arg9 dismissHandler:(CDUnknownBlockType)arg10;
- (void)showDirectSecureNotificationWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 threadKey:(id)arg4 senderProfilePictureURL:(id)arg5 userSession:(id)arg6 dismissHandler:(CDUnknownBlockType)arg7;
- (void)showErrorNotificationWithText:(id)arg1 threadId:(id)arg2 recipient:(id)arg3 userSession:(id)arg4;
- (void)showErrorNotificationWithText:(id)arg1 thread:(id)arg2 userSession:(id)arg3;
- (void)showNotificationWithActor:(id)arg1 text:(id)arg2 ranges:(id)arg3 threadId:(id)arg4 userSession:(id)arg5;
- (void)showDirectNotificationWithMessage:(id)arg1 threadId:(id)arg2 thread:(id)arg3 userSession:(id)arg4;

@end

