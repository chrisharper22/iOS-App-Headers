//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGPromoteAlertDialogView, NSString, NSURL;

@protocol IGPromoteAlertDialogViewDelegate <NSObject>
- (void)promoteAlertDialogView:(IGPromoteAlertDialogView *)arg1 didDismissAlertWithMediaId:(NSString *)arg2;
- (void)promoteAlertDialogView:(IGPromoteAlertDialogView *)arg1 didTapURL:(NSURL *)arg2 WithMediaId:(NSString *)arg3;
@end
