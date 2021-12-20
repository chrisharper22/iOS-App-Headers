//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGUserSession;
@protocol IGSideTrayItemSectionControllerDelegate, IGSideTrayLoggingController;

@protocol IGSideTrayItemSectionController <NSObject>
@property(readonly, nonatomic) __weak id <IGSideTrayItemSectionControllerDelegate> delegate;
- (_Bool)isBadged;
- (long long)badgeCount;
- (id)initWithUserSession:(IGUserSession *)arg1 delegate:(id <IGSideTrayItemSectionControllerDelegate>)arg2 loggingController:(id <IGSideTrayLoggingController>)arg3;
@end
