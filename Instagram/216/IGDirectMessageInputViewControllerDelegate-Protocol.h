//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol IGDirectActionButtonsView;

@protocol IGDirectMessageInputViewControllerDelegate <NSObject>
- (void)messageInputViewController:(UIViewController *)arg1 didShowSendToGroupButton:(id <IGDirectActionButtonsView>)arg2;
- (void)messageInputViewController:(UIViewController *)arg1 didTapSendToGroupButton:(id <IGDirectActionButtonsView>)arg2 withText:(NSString *)arg3;
- (void)messageInputViewControllerDidTapScheduleForLaterButton:(UIViewController *)arg1;
- (void)messageInputViewControllerDidTapSendButton:(UIViewController *)arg1 withText:(NSString *)arg2;
@end

