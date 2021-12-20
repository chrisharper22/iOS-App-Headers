//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCameraLoggingContext, IGCameraOpenPerfComponents, IGCaptureQueueManager, IGUserSession, NSArray;
@protocol IGAnalyticsEventLoggingProtocol, OCMComponentExperimentManagerProtocol;

@interface IGOneCameraConfiguration : NSObject
{
    _Bool _photostreamEnabled;
    _Bool _highResolutionFormatsEnabled;
    _Bool _shouldSortFormatsByFOV;
    _Bool _forceBestPhotoCaptureFormat;
    _Bool _useFBMultiCaptureManager;
    _Bool _isHLGVideoDesired;
    _Bool _fbAudioEnabled;
    _Bool _stereoEnabled;
    _Bool _unificationEnabled;
    _Bool _isSingleConfigurationAVCaptureSessionStart;
    IGUserSession *_userSession;
    long long _initialCameraPosition;
    long long _initialFlashMode;
    long long _videoStabilizationMode;
    NSArray *_initialCaptureDevices;
    long long _initialSessionPreset;
    long long _captureManagerMode;
    IGCaptureQueueManager *_queueManager;
    IGCameraLoggingContext *_cameraLoggingContext;
    unsigned long long _analyticsProductName;
    IGCameraOpenPerfComponents *_perfComponents;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLoggerForUserSession;
    id <OCMComponentExperimentManagerProtocol> _experimentManagerProvider;
    long long _maxCaptureResolution;
    struct final _audioPipelineConfiguration;
    struct IGCCCaptureManagerBracketedCaptureOptions _bracketedCaptureOptions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct final audioPipelineConfiguration; // @synthesize audioPipelineConfiguration=_audioPipelineConfiguration;
@property(nonatomic) _Bool isSingleConfigurationAVCaptureSessionStart; // @synthesize isSingleConfigurationAVCaptureSessionStart=_isSingleConfigurationAVCaptureSessionStart;
@property(nonatomic) _Bool unificationEnabled; // @synthesize unificationEnabled=_unificationEnabled;
@property(nonatomic) _Bool stereoEnabled; // @synthesize stereoEnabled=_stereoEnabled;
@property(nonatomic) _Bool fbAudioEnabled; // @synthesize fbAudioEnabled=_fbAudioEnabled;
@property(nonatomic) _Bool isHLGVideoDesired; // @synthesize isHLGVideoDesired=_isHLGVideoDesired;
@property(nonatomic) _Bool useFBMultiCaptureManager; // @synthesize useFBMultiCaptureManager=_useFBMultiCaptureManager;
@property(nonatomic) _Bool forceBestPhotoCaptureFormat; // @synthesize forceBestPhotoCaptureFormat=_forceBestPhotoCaptureFormat;
@property(nonatomic) _Bool shouldSortFormatsByFOV; // @synthesize shouldSortFormatsByFOV=_shouldSortFormatsByFOV;
@property(nonatomic) long long maxCaptureResolution; // @synthesize maxCaptureResolution=_maxCaptureResolution;
@property(nonatomic) _Bool highResolutionFormatsEnabled; // @synthesize highResolutionFormatsEnabled=_highResolutionFormatsEnabled;
@property(nonatomic) _Bool photostreamEnabled; // @synthesize photostreamEnabled=_photostreamEnabled;
@property(nonatomic) struct IGCCCaptureManagerBracketedCaptureOptions bracketedCaptureOptions; // @synthesize bracketedCaptureOptions=_bracketedCaptureOptions;
@property(retain, nonatomic) id <OCMComponentExperimentManagerProtocol> experimentManagerProvider; // @synthesize experimentManagerProvider=_experimentManagerProvider;
@property(retain, nonatomic) id <IGAnalyticsEventLoggingProtocol> analyticsLoggerForUserSession; // @synthesize analyticsLoggerForUserSession=_analyticsLoggerForUserSession;
@property(retain, nonatomic) IGCameraOpenPerfComponents *perfComponents; // @synthesize perfComponents=_perfComponents;
@property(nonatomic) unsigned long long analyticsProductName; // @synthesize analyticsProductName=_analyticsProductName;
@property(retain, nonatomic) IGCameraLoggingContext *cameraLoggingContext; // @synthesize cameraLoggingContext=_cameraLoggingContext;
@property(retain, nonatomic) IGCaptureQueueManager *queueManager; // @synthesize queueManager=_queueManager;
@property(nonatomic) long long captureManagerMode; // @synthesize captureManagerMode=_captureManagerMode;
@property(nonatomic) long long initialSessionPreset; // @synthesize initialSessionPreset=_initialSessionPreset;
@property(retain, nonatomic) NSArray *initialCaptureDevices; // @synthesize initialCaptureDevices=_initialCaptureDevices;
@property(nonatomic) long long videoStabilizationMode; // @synthesize videoStabilizationMode=_videoStabilizationMode;
@property(nonatomic) long long initialFlashMode; // @synthesize initialFlashMode=_initialFlashMode;
@property(nonatomic) long long initialCameraPosition; // @synthesize initialCameraPosition=_initialCameraPosition;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)init;

@end

