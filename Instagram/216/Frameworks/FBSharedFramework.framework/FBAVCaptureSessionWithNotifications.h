//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureSession.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface FBAVCaptureSessionWithNotifications : AVCaptureSession
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_logname;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *logname; // @synthesize logname=_logname;
- (void)removeInput:(id)arg1;
- (void)addInput:(id)arg1;
- (id)initWithLogname:(id)arg1;

@end

