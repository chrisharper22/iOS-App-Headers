//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGOCPostCaptureControlling-Protocol.h>
#import <FBSharedFramework/OCMControllerProtocol-Protocol.h>

@class FBCaptureController, FBCaptureCoordinatorBase, NSMutableDictionary, NSMutableSet, NSString, NSURL, OCMEKSource, OCMGraph;
@protocol FBARFilterDownloading, FBCCAudioPipelineProviding, FBCaptureCoordinatorFilterManaging><FBCCCaptureModeManaging, FBCaptureMode, FBSystemAudioCaptureSessionInteracting, OS_dispatch_queue;

@interface OCMController : NSObject <IGOCPostCaptureControlling, OCMControllerProtocol>
{
    NSObject<OS_dispatch_queue> *_controllerQueue;
    NSMutableDictionary *_components;
    NSMutableSet *_allComponentObjects;
    NSMutableDictionary *_dependenciesByComponentID;
    struct FBCaptureCoordinatorConfiguration _configuration;
    CDUnknownBlockType _loggerProvider;
    CDUnknownBlockType _filterFactoryProvider;
    CDUnknownBlockType _experimentManagerProvider;
    OCMEKSource *_primaryEventsSource;
    NSURL *_directoryForVideoStorage;
    id <FBSystemAudioCaptureSessionInteracting> _systemAudioCaptureSessionInteractor;
    _Bool _fbAudioEnabled;
    struct final _audioPipelineConfiguration;
    id <FBARFilterDownloading> _filterDownloader;
    FBCaptureCoordinatorBase<FBCaptureCoordinatorFilterManaging><FBCCCaptureModeManaging> *_preCaptureCoordinator;
    FBCaptureCoordinatorBase<FBCaptureCoordinatorFilterManaging><FBCCCaptureModeManaging> *_postCaptureCoordinator;
    id <FBCaptureMode> _captureMode;
    NSString *_captureModeComponentID;
    long long _currentState;
    FBCaptureController *_captureCoordinator;
    struct FBNewCaptureCoordinatorConfiguration _unifiedConfiguration;
    _Bool _unificationEnabled;
    id <FBCCAudioPipelineProviding> _audioPipelineProvider;
    OCMGraph *_graph;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) OCMGraph *graph; // @synthesize graph=_graph;
- (struct FBCaptureCoordinatorConfiguration)activeCaptureCoordinatorConfiguration;
- (struct FBCaptureCoordinatorConfiguration *)_activeCaptureCoordinatorConfigurationPointer;
- (void)_setPreviewProvider:(id)arg1;
- (id)_createCaptureController;
- (void)_createUnifiedConfigurationWithCameraConfiguration:(struct FBCameraConfiguration)arg1;
- (id)_createPostCaptureCoordinator;
- (id)_createCaptureCoordinator;
- (id)_detachingComponentsFromCaptureModeComponent:(id)arg1 toCaptureModeComponent:(id)arg2;
- (void)_unmountCaptureModeComponent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unmountCurrentCaptureModeComponentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_mountCaptureModeComponent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mountCaptureModeComponentWithID:(id)arg1 forState:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mountCaptureModeComponent:(id)arg1 forState:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)activeCaptureMode;
- (id)activeCaptureModeComponent;
- (long long)activeControllerState;
- (void)stopSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)startSessionWithCompletion:(CDUnknownBlockType)arg1;
- (struct FBNewCaptureCoordinatorConfiguration *)newCaptureCoordinatorConfiguration;
- (id)cameraCaptureCoordinator;
- (id)captureCoordinator;
- (_Bool)isCaptureCoordinatorRunning;
- (_Bool)isCaptureCoordinatorLoaded;
- (id)_allComponentsFromComponent:(id)arg1;
- (id)events;
- (id)graphValueForKey:(id)arg1;
- (id)interfaceForComponentID:(id)arg1;
- (id)attachedComponentIDs;
- (void)detachComponentsWithIDs:(id)arg1;
- (void)_attachComponentsWithIDs:(id)arg1 existingComponents:(id)arg2;
- (void)attachComponentsWithIDs:(id)arg1;
- (void)attachComponents:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(CDStruct_c22b3d9b)arg1;
- (_Bool)isRunning;
- (void)setFilters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearInMemoryCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)mountCaptureModeComponent:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

