//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGDrawViewController;

@protocol IGDrawControllerDelegate <NSObject>
- (void)drawControllerDidAddStroke:(IGDrawViewController *)arg1 withLength:(double)arg2;
- (void)drawControllerDidBeginDrawing:(IGDrawViewController *)arg1;
@end
