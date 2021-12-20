//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBCCCTScanEventTracking, FBCCPerformanceLogger, FBCaptureSessionWaterfallLogging;

@interface FBCaptureCoordinatorBaseLoggerBundle : NSObject
{
    unsigned long long _productName;
    id <FBCCPerformanceLogger> _performanceLogger;
    id <FBCaptureSessionWaterfallLogging> _waterfallLogger;
    id <FBCCCTScanEventTracking> _ctScanEventTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBCCCTScanEventTracking> ctScanEventTracker; // @synthesize ctScanEventTracker=_ctScanEventTracker;
@property(readonly, nonatomic) id <FBCaptureSessionWaterfallLogging> waterfallLogger; // @synthesize waterfallLogger=_waterfallLogger;
@property(readonly, nonatomic) id <FBCCPerformanceLogger> performanceLogger; // @synthesize performanceLogger=_performanceLogger;
@property(readonly, nonatomic) unsigned long long productName; // @synthesize productName=_productName;
- (id)initWithProductName:(unsigned long long)arg1 performanceLogger:(id)arg2 waterfallLogger:(id)arg3 ctScanEventTracker:(id)arg4;

@end
