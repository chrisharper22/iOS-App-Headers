//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARCameraCapabilitiesProviding-Protocol.h>
#import <FBSharedFramework/FBARServiceConfigurationProvider-Protocol.h>
#import <FBSharedFramework/FBARServiceHosting-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class FBARApplicationStateNotifier, FBARLogger, FBARServiceHostEffect, FBARSessionRecordingConfiguration, NSHashTable, NSString;
@protocol FBARAnalyticsLogging, FBARClassBenchmark, FBARIGLTextureCreating, FBARServiceHostBasePermissionsDelegate;

@interface FBARServiceHostBase : NSObject <NSSecureCoding, FBARCameraCapabilitiesProviding, FBARServiceConfigurationProvider, FBARServiceHosting>
{
    NSHashTable *_controllers;
    struct mutex _controllersMutex;
    struct shared_ptr<msqrd::experiment::IExperimentConfig> _experimentConfig;
    struct shared_ptr<facebook::cameracore::arclass::ARClassContext> _ARClassContext;
    struct shared_ptr<msqrd::services::network::INetworkClientSource> _networkClientSource;
    struct ServiceCreatorRegistry _serviceCreatorRegistry;
    shared_ptr_ad266505 _xplatServiceHost;
    shared_ptr_eaf197ea _performanceLogger;
    struct shared_ptr<msqrd::analytics::IEngineAnalyticsLogger> _engineAnalyticsLogger;
    struct shared_ptr<msqrd::plugins::BasePluginConfiguration> _pluginConfig;
    FBARApplicationStateNotifier *_stateNotifier;
    struct shared_ptr<facebook::bufferpool::BufferPool> _pixelBufferPool;
    id <FBARIGLTextureCreating> _currentIGLTextureCreator;
    unsigned char _optimizationMode;
    FBARLogger *_logger;
    id <FBARAnalyticsLogging> _analyticsLogger;
    unsigned long long _supportedCameraCapabilities;
    FBARSessionRecordingConfiguration *_sessionRecordingConfiguration;
    FBARServiceHostEffect *_currentEffect;
    id <FBARServiceHostBasePermissionsDelegate> _permissionsController;
    id <FBARClassBenchmark> _arClassBenchmark;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithLogger:(id)arg1 analyticsLogger:(id)arg2 performanceLogger:(shared_ptr_eaf197ea)arg3 experimentConfiguration:(id)arg4 arClass:(const struct ARClass *)arg5 networkClientSource:(shared_ref_855019a2)arg6 supportedCameraCapabilities:(unsigned long long)arg7 sessionRecordingConfiguration:(id)arg8;
+ (id)newWithLogger:(id)arg1 analyticsLogger:(id)arg2 performanceLogger:(shared_ptr_eaf197ea)arg3 experimentConfiguration:(id)arg4 arClass:(const struct ARClass *)arg5 networkClientSource:(shared_ref_855019a2)arg6 supportedCameraCapabilities:(unsigned long long)arg7;
+ (id)newWithLogger:(id)arg1;
+ (unique_ptr_428768e8)newPluginConfig;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FBARClassBenchmark> arClassBenchmark; // @synthesize arClassBenchmark=_arClassBenchmark;
@property(retain, nonatomic) id <FBARServiceHostBasePermissionsDelegate> permissionsController; // @synthesize permissionsController=_permissionsController;
@property(nonatomic) unsigned char optimizationMode; // @synthesize optimizationMode=_optimizationMode;
@property(retain, nonatomic) FBARServiceHostEffect *currentEffect; // @synthesize currentEffect=_currentEffect;
@property(readonly, nonatomic) FBARSessionRecordingConfiguration *sessionRecordingConfiguration; // @synthesize sessionRecordingConfiguration=_sessionRecordingConfiguration;
@property(readonly, nonatomic) unsigned long long supportedCameraCapabilities; // @synthesize supportedCameraCapabilities=_supportedCameraCapabilities;
@property(readonly, nonatomic) id <FBARAnalyticsLogging> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) FBARLogger *logger; // @synthesize logger=_logger;
- (id)configurationForServiceType:(const struct ServiceType *)arg1;
@property(readonly, nonatomic) shared_ref_431945ee pluginConfig;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (shared_ref_855019a2)networkClientSource;
- (void)didDetachFromController:(id)arg1;
- (void)willAttachToController:(id)arg1;
- (void)_updateLoomTracingForEffect:(id)arg1;
- (void)notifyServicesThatPermissionsAreReadyForEffectWithManifest:(const void *)arg1;
- (void)preparePermissionsForEffectWithManifest:(shared_ref_a9344986)arg1;
- (void)didFinishRenderingFrame;
- (void)willStartRenderingFrame;
- (void)cleanupAllServices;
- (void)resetAllServices;
- (void)updateServicesWithDepthData:(id)arg1 bufferPresentationTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)needAudioSampleBufferProcessing;
- (void)updateAudioServiceWithAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 volumeLevel:(float)arg2;
- (void)updateServicesWithPixelBuffer:(struct __CVBuffer *)arg1 bufferPresentationTime:(CDStruct_1b6d18a9)arg2 additionalData:(id)arg3 iglTextureCreator:(id)arg4 imageMetadata:(const void *)arg5 outputSize:(const struct FBAREngineOutputSize *)arg6;
- (shared_ref_344acd93)prepareServicesForEffect:(id)arg1;
- (void)preloadServicesForConfiguration:(id)arg1;
@property(readonly, nonatomic) Optional_4a74817c serviceAnalyticsLogger;
@property(readonly, nonatomic) shared_ref_49fe85fd ARClassContext;
@property(readonly, nonatomic) shared_ref_5cdfb9eb experimentConfig;
@property(readonly, nonatomic) shared_ref_c3a6841c engineAnalyticsLogger;
@property(readonly, nonatomic) shared_ptr_eaf197ea performanceLogger;
@property(readonly, nonatomic) shared_ref_f3fa7b41 engineServiceHost;
@property(readonly, nonatomic) id <FBARIGLTextureCreating> currentIGLTextureCreator;
- (struct ServiceCreatorRegistry)newServiceCreatorRegistry;
- (void)dealloc;
- (id)initWithLogger:(id)arg1 analyticsLogger:(id)arg2 performanceLogger:(shared_ptr_eaf197ea)arg3 rawEventLogger:(shared_ref_5e37a987)arg4 experimentConfiguration:(id)arg5 arClass:(const struct ARClass *)arg6 networkClientSource:(shared_ref_855019a2)arg7 supportedCameraCapabilities:(unsigned long long)arg8 effectSessionListener:(Optional_daa70580)arg9 dataSnapshotterCreator:(Optional_92f53422)arg10 sessionRecordingConfiguration:(id)arg11;
- (id)initWithLogger:(id)arg1 analyticsLogger:(id)arg2 performanceLogger:(shared_ptr_eaf197ea)arg3 experimentConfiguration:(id)arg4 arClass:(const struct ARClass *)arg5 networkClientSource:(shared_ref_855019a2)arg6 dataSnapshotterCreator:(Optional_92f53422)arg7;
- (id)initWithLogger:(id)arg1 analyticsLogger:(id)arg2 performanceLogger:(shared_ptr_eaf197ea)arg3 experimentConfiguration:(id)arg4 arClass:(const struct ARClass *)arg5 networkClientSource:(shared_ref_855019a2)arg6 supportedCameraCapabilities:(unsigned long long)arg7 sessionRecordingConfiguration:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

