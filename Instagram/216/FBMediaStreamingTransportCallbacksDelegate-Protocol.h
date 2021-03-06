//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol FBMediaStreamingTransportCallbacksDelegate
- (void)transportDidUpdateStreamingInfo:(const void *)arg1;
- (void)transportDidDropPackets:(shared_ptr_95a834d4)arg1 dropReason:(const void *)arg2;
- (void)transportDidSendPackets;
- (void)transportWriteDidTimeout;
- (void)transportWillReconnectDueToError:(const void *)arg1;
- (void)transportDidFailWithError:(const void *)arg1;
- (void)transportCompletedSpeedTestWithStatus:(const void *)arg1;
- (void)transportDidFinish;
- (void)transportDidConnectWithSpeedTestStatus:(const void *)arg1;
- (CDStruct_1b6d18a9)lastAudioSampleBufferPts;
- (CDStruct_1b6d18a9)lastVideoSampleBufferPts;
- (CDStruct_1b6d18a9)baseTimestamp;
@end

