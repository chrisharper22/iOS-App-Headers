//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OCMComponentLoggerProtocol-Protocol.h"

@class FBCCFacebookPerformanceLogger, FBCaptureCoordinatorLogger, IGOneCameraConfiguration, NSString;

@interface IGOneCameraLogger : NSObject <OCMComponentLoggerProtocol>
{
    IGOneCameraConfiguration *_configuration;
    FBCaptureCoordinatorLogger *_captureCoordinatorLogger;
    FBCCFacebookPerformanceLogger *_performanceLogger;
    NSString *_productSessionID;
}

- (void).cxx_destruct;
- (id)performanceLogger;
@property(readonly, nonatomic) FBCaptureCoordinatorLogger *captureCoordinatorLogger;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

