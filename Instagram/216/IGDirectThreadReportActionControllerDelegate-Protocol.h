//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectThreadReportActionController, IGUser, NSString;

@protocol IGDirectThreadReportActionControllerDelegate <NSObject>
- (void)threadReportControllerDidTapBlockForUser:(IGUser *)arg1 threadId:(NSString *)arg2;
- (void)threadReportControllerDidRestrictAndShouldExitThreadContext:(IGDirectThreadReportActionController *)arg1;
- (void)threadReportControllerDidReportAndShouldExitThreadContext:(IGDirectThreadReportActionController *)arg1;
@end
