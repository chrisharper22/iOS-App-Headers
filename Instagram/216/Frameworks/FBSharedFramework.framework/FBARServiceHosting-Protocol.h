//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBARIGLTextureCreatorSource-Protocol.h>
#import <FBSharedFramework/NSObject-Protocol.h>

@class FBARLogger, FBARServiceHostConfiguration, FBARServiceHostEffect, FBARSessionRecordingConfiguration, NSDictionary;
@protocol FBARAnalyticsLogging, FBARIGLTextureCreating, FBARServiceHostControlling, FBDepthData;

@protocol FBARServiceHosting <FBARIGLTextureCreatorSource, NSObject>
@property(readonly, nonatomic) FBARServiceHostEffect *currentEffect;
@property(readonly, nonatomic) FBARSessionRecordingConfiguration *sessionRecordingConfiguration;
@property(readonly, nonatomic) Optional_4a74817c serviceAnalyticsLogger;
@property(readonly, nonatomic) shared_ref_431945ee pluginConfig;
@property(readonly, nonatomic) shared_ref_49fe85fd ARClassContext;
@property(readonly, nonatomic) shared_ref_5cdfb9eb experimentConfig;
@property(readonly, nonatomic) shared_ref_c3a6841c engineAnalyticsLogger;
@property(readonly, nonatomic) shared_ptr_eaf197ea performanceLogger;
@property(nonatomic) unsigned char optimizationMode;
@property(readonly, nonatomic) shared_ref_f3fa7b41 engineServiceHost;
@property(readonly, nonatomic) id <FBARAnalyticsLogging> analyticsLogger;
@property(readonly, nonatomic) FBARLogger *logger;
- (shared_ref_855019a2)networkClientSource;
- (void)didDetachFromController:(id <FBARServiceHostControlling>)arg1;
- (void)willAttachToController:(id <FBARServiceHostControlling>)arg1;
- (void)didFinishRenderingFrame;
- (void)willStartRenderingFrame;
- (void)resetAllServices;
- (void)updateServicesWithDepthData:(id <FBDepthData>)arg1 bufferPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)updateAudioServiceWithAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 volumeLevel:(float)arg2;
- (void)updateServicesWithPixelBuffer:(struct __CVBuffer *)arg1 bufferPresentationTime:(CDStruct_1b6d18a9)arg2 additionalData:(NSDictionary *)arg3 iglTextureCreator:(id <FBARIGLTextureCreating>)arg4 imageMetadata:(const void *)arg5 outputSize:(const struct FBAREngineOutputSize *)arg6;
- (void)notifyServicesThatPermissionsAreReadyForEffectWithManifest:(const struct Manifest *)arg1;
- (void)preparePermissionsForEffectWithManifest:(shared_ref_a9344986)arg1;
- (shared_ref_344acd93)prepareServicesForEffect:(FBARServiceHostEffect *)arg1;
- (void)preloadServicesForConfiguration:(FBARServiceHostConfiguration *)arg1;
@end
