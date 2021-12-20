//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureMultiCamSession.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface FBAVMultiCaptureSessionWithNotifications : AVCaptureMultiCamSession
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_logName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *logName; // @synthesize logName=_logName;
- (void)removeInput:(id)arg1;
- (void)addInput:(id)arg1;
- (id)initWithLogName:(id)arg1;

@end

