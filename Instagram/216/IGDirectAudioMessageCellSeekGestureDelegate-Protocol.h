//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectAudioMessageCell;

@protocol IGDirectAudioMessageCellSeekGestureDelegate <NSObject>
- (void)audioMessageCell:(IGDirectAudioMessageCell *)arg1 didFinishSeekGestureWithProgress:(double)arg2;
- (void)audioMessageCell:(IGDirectAudioMessageCell *)arg1 didUpdateSeekGestureWithProgress:(double)arg2;
- (void)audioMessageCell:(IGDirectAudioMessageCell *)arg1 didBeginSeekGestureWithProgress:(double)arg2;
@end

