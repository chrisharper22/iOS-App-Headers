//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveBroadcastVideoGenerator;

@protocol IGLiveBroadcastVideoGeneratorDelegate <NSObject>
- (void)liveBroadcastVideoGeneratorDidStopGeneratingVideo:(IGLiveBroadcastVideoGenerator *)arg1;
- (void)liveBroadcastVideoGeneratorFailedGenerateVideo:(IGLiveBroadcastVideoGenerator *)arg1;
- (void)liveBroadcastVideoGenerator:(IGLiveBroadcastVideoGenerator *)arg1 didGenerateSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)liveBroadcastVideoGeneratorDidStartGeneratingVideo:(IGLiveBroadcastVideoGenerator *)arg1;
- (void)liveBroadcastVideoGeneratorWillStartGeneratingVideo:(IGLiveBroadcastVideoGenerator *)arg1;
@end

