//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectAvatarDotSpec, IGDirectMessageModalShareContent, IGRingViewSpec, IGUser, NSString, UIViewController;
@protocol IGDirectReplyToAuthorSendDelegate;

@protocol IGDirectReplyToAuthorViewControllerPresenting <NSObject>
@property(nonatomic) __weak id <IGDirectReplyToAuthorSendDelegate> sendDelegate;
- (void)presentReplyToAuthorViewControllerWithShareContent:(IGDirectMessageModalShareContent *)arg1 onTopOfSourceViewController:(UIViewController *)arg2 replyToUser:(IGUser *)arg3 storyRingViewSpec:(IGRingViewSpec *)arg4 avatarDotViewSpec:(IGDirectAvatarDotSpec *)arg5 source:(long long)arg6 animateThreadPresentationIfDesired:(_Bool)arg7 willDismissBlock:(void (^)(void))arg8 dismissBlock:(void (^)(void))arg9 enableTappableAvatarStoryRing:(_Bool)arg10 showStoryLikeBadge:(_Bool)arg11;
- (void)presentXACRedirectWithShareContent:(IGDirectMessageModalShareContent *)arg1 replyToUser:(IGUser *)arg2 onTopOfSourceViewController:(UIViewController *)arg3 storyRingViewSpec:(IGRingViewSpec *)arg4 source:(long long)arg5 analyticsModule:(NSString *)arg6;
- (void)presentReplyToAuthorViewControllerWithShareContent:(IGDirectMessageModalShareContent *)arg1 onTopOfSourceViewController:(UIViewController *)arg2 replyToUser:(IGUser *)arg3 storyRingViewSpec:(IGRingViewSpec *)arg4 source:(long long)arg5 animateThreadPresentationIfDesired:(_Bool)arg6 willDismissBlock:(void (^)(void))arg7 dismissBlock:(void (^)(void))arg8 enableTappableAvatarStoryRing:(_Bool)arg9 showStoryLikeBadge:(_Bool)arg10;
@end

