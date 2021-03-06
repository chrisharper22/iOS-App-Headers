//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBSCPEventLogger.h"

#import "SCPIDCaptureLogging-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;

@interface FBSCPIDCaptureLogger : FBSCPEventLogger <SCPIDCaptureLogging>
{
    NSString *_product;
    NSString *_sessionId;
    NSDictionary *_tags;
    unsigned long long _featureLevel;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long featureLevel; // @synthesize featureLevel=_featureLevel;
- (void)logStepChangeFrom:(id)arg1 to:(id)arg2;
- (void)addCaptureSessionState:(unsigned long long)arg1 isManualCaptureActive:(_Bool)arg2;
- (void)logScanAgainButtonTap;
- (void)logOpenPhotoRequirementButtonTap;
- (void)logCameraInitializeWithPreviewWidth:(double)arg1 previewHeight:(double)arg2 imageWidth:(double)arg3 mageHeight:(double)arg4 viewWidth:(double)arg5 viewHeight:(double)arg6;
- (id)initWithProduct:(id)arg1 sessionId:(id)arg2 tags:(id)arg3;
- (id)featureLevelName;
- (id)flowTypeName;
- (id)tags;
- (id)sessionId;
- (id)productName;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *currentCaptureSession;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

