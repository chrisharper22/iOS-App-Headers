//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSError, NSString;
@protocol FBFramePerformanceResultDisplayer><FBFramePerformanceTrackerResetter;

@protocol FBCaptureSessionWaterfallLogging <NSObject>
@property(readonly, nonatomic) unsigned long long productName;
@property(readonly, copy, nonatomic) NSString *productSessionID;
@property(readonly, nonatomic) id <FBFramePerformanceResultDisplayer><FBFramePerformanceTrackerResetter> framePerformanceTracker;
- (void)logDidSetFilters:(NSArray *)arg1 error:(NSError *)arg2;
- (void)logDidStopCaptureSessionWithError:(NSError *)arg1;
- (void)logWillStopCaptureSession;
- (void)logDidStartCaptureSessionWithID:(NSString *)arg1 error:(NSError *)arg2;
- (void)logWillStartCaptureSessionWithID:(NSString *)arg1;
- (void)reset;
@end

