//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFeedItemHeaderController, NSString;

@protocol IGFeedItemHeaderControllerDelegate <NSObject>
- (void)feedItemHeaderControllerRequestToShowOrHideAYMFCell:(_Bool)arg1;
- (void)feedItemHeaderControllerDidTapAccount:(IGFeedItemHeaderController *)arg1 source:(NSString *)arg2;
- (void)feedItemHeaderControllerDidTapLocationTransparencyTag:(IGFeedItemHeaderController *)arg1;
- (void)feedItemHeaderControllerDidTapSCMETag:(IGFeedItemHeaderController *)arg1;
- (void)feedItemHeaderControllerTapDismissButton:(IGFeedItemHeaderController *)arg1;
- (void)feedItemHeaderControllerTapMoreButton:(IGFeedItemHeaderController *)arg1;
- (void)feedItemHeaderController:(IGFeedItemHeaderController *)arg1 presentAlert:(NSString *)arg2;
@end

