//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGVideoTrimViewController;

@protocol IGVideoTrimConfirmationDelegate <NSObject>
- (void)videoTrimControllerDidRejectChanges:(IGVideoTrimViewController *)arg1;
- (void)videoTrimController:(IGVideoTrimViewController *)arg1 didConfirmTrimmedRange:(CDStruct_e83c9415)arg2;
@end

