//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGWebRTCAudioStallSentry;

@protocol IGWebRTCAudioStallSentryDelegate <NSObject>
- (void)audioStallSentry:(IGWebRTCAudioStallSentry *)arg1 detectedAudioStallWithAudioBytes:(unsigned long long)arg2 afterInterval:(double)arg3;
@end

