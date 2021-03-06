//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARFilterServiceHostConfiguring-Protocol.h>

@class FBARAudioPlatformComponentHostProvider, FBARMotionDataProviderConfiguration, FBARPlatformEventsDataProviderConfiguration, FBARWorldTrackingDataProviderConfiguration, IGAREffectNativeUIControlHandler, IGARInstructionServiceHandler, IGARServicesFailureHandler, IGCameraControlServiceDelegate, IGCameraEffectAudioConfigurationChangeProvider, IGUserSession, NSDictionary, NSNumber, NSString;
@protocol FBARGalleryPickerServiceDataSource, FBARMultipeerServiceDelegate, FBARParticipantServiceDelegate, FBARPersistenceServiceDelegateProvider, FBCCAudioGraphClientProvider, IGCameraSLAMControllerProvider;

@interface IGAREffectServiceHostConfigurator : NSObject <FBARFilterServiceHostConfiguring>
{
    NSString *_effectID;
    NSString *_effectCacheKey;
    _Bool _networkConsentRequired;
    IGUserSession *_userSession;
    id <FBARPersistenceServiceDelegateProvider> _inMemoryPersistenceDelegateProvider;
    id <FBARPersistenceServiceDelegateProvider> _captureScopePersistenceDelegateProvider;
    FBARWorldTrackingDataProviderConfiguration *_worldTrackingDataProviderConfiguration;
    IGCameraControlServiceDelegate *_cameraControlServiceDelegate;
    FBARPlatformEventsDataProviderConfiguration *_platformEventsDataProviderConfiguration;
    NSDictionary *_effectCameraShareArguments;
    FBARMotionDataProviderConfiguration *_motionDataProviderConfiguration;
    _Bool _usesGeoanchor;
    NSNumber *_randomNumberGeneratorSeed;
    id <FBARMultipeerServiceDelegate> _multipeerServiceDelegate;
    id <FBARParticipantServiceDelegate> _participantServiceDelegate;
    id <FBARGalleryPickerServiceDataSource> _galleryPickerServiceDataSource;
    FBARAudioPlatformComponentHostProvider *_audioPlatformComponentHostProvider;
    IGCameraEffectAudioConfigurationChangeProvider *_audioConfigurationChangeProvider;
    _Bool _isFBAARAudioEffectAllowed;
    id <FBCCAudioGraphClientProvider> _audioGraphClientProvider;
    IGARInstructionServiceHandler *_instructionServiceHandler;
    IGAREffectNativeUIControlHandler *_nativeUIControlHandler;
    id <IGCameraSLAMControllerProvider> _cameraSLAMControllerProvider;
    IGARServicesFailureHandler *_servicesFailureHandler;
}

- (void).cxx_destruct;
- (id)productFeatureConfiguration;
- (id)serviceConfigurationsForModelPaths:(id)arg1 shaderAssetProvider:(id)arg2;
- (id)initWithEffectID:(id)arg1 effectCacheKey:(id)arg2 networkConsentRequired:(_Bool)arg3 inMemoryPersistenceDelegateProvider:(id)arg4 captureScopePersistenceDelegateProvider:(id)arg5 worldTrackingDataProviderConfiguration:(id)arg6 cameraControlServiceDelegate:(id)arg7 platformEventsDataProviderConfiguration:(id)arg8 effectCameraShareArguments:(id)arg9 motionDataProviderConfiguration:(id)arg10 usesGeoanchor:(_Bool)arg11 randomNumberGeneratorSeed:(id)arg12 multipeerServiceDelegate:(id)arg13 participantServiceDelegate:(id)arg14 galleryPickerServiceDataSource:(id)arg15 userSession:(id)arg16 isFBAARAudioEffectAllowed:(_Bool)arg17 audioGraphClientProvider:(id)arg18 instructionServiceHandler:(id)arg19 nativeUIControlHandler:(id)arg20 cameraSLAMControllerProvider:(id)arg21 servicesFailureHandler:(id)arg22;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

