//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCountdownController;

@protocol IGCountdownControllerDelegate <NSObject>
- (void)countdownControllerDidInvalidateTimer:(IGCountdownController *)arg1;
- (void)countdownController:(IGCountdownController *)arg1 didCountTo:(long long)arg2;
@end

