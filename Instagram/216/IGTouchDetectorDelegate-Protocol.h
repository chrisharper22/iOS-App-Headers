//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTouchDetector, NSSet, UIEvent;

@protocol IGTouchDetectorDelegate <NSObject>
- (void)touchDetector:(IGTouchDetector *)arg1 touchesCancelled:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)touchDetector:(IGTouchDetector *)arg1 touchesEnded:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)touchDetector:(IGTouchDetector *)arg1 touchesMoved:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)touchDetector:(IGTouchDetector *)arg1 touchesBegan:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
@end

