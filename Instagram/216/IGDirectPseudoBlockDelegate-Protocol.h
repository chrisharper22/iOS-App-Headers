//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLoggerThreadInfo, IGUser;

@protocol IGDirectPseudoBlockDelegate <NSObject>
- (void)pseudoBlockAlertMainActionWasPressed:(IGUser *)arg1 threadInfo:(IGLoggerThreadInfo *)arg2;
- (void)pseudoBlockAlertBlockActionWasPressed:(IGUser *)arg1 threadInfo:(IGLoggerThreadInfo *)arg2;
@end
