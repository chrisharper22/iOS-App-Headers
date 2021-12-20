//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession, FBExponentialBackoffTimer, FBKVOController, FBSystemAudioSessionVolumeChangedListenerAnnouncer, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FBSystemAudioSessionManager : NSObject
{
    AVAudioSession *_audioSession;
    NSObject<OS_dispatch_queue> *_audioSessionQueue;
    struct mutex _clientsLock;
    NSHashTable *_clients;
    NSMutableDictionary *_clientsClasses;
    struct atomic<bool> _interrupted;
    _Bool _routeIsExternal;
    _Bool _routeIsBluetooth;
    _Bool _routeIsHeadphoneConnected;
    _Bool _routeIsSpeakerphone;
    _Bool _forceSpeakerphone;
    struct mutex _statusObserversLock;
    NSHashTable *_statusObservers;
    struct mutex _errorObserversLock;
    NSHashTable *_errorObservers;
    FBKVOController *_kvoController;
    FBSystemAudioSessionVolumeChangedListenerAnnouncer *_volumeChangeAnnouncer;
    float _currentOutputVolume;
    _Bool _enableIosBluetoothWorkaround;
    _Bool _showingAudioRouteSelector;
    _Bool _memoizeAudioSessionVolumeAccess;
    _Bool _disableRegisterForVolumeChanges;
    _Bool _audioSessionShouldBeHandsOff;
    _Bool _audioSessionBugReportEnabled;
    _Bool _fixVideoCallHeadphonesRemoval;
    _Bool _audioSessionActiveWhileAppRunning;
    _Bool _ignoreAudioSessionUpdatesOnInterrupt;
    _Bool _updateClientsOnAppBackground;
    _Bool _appIsBackgrounded;
    _Bool _audioSessionAvoidClearInterruptedOnClientUpdate;
    _Bool _clearInterruptedStateForClientsOnAppFG;
    _Bool _ignoreUnnecessaryInterruptions;
    _Bool _exponentialBackoffRetry;
    FBExponentialBackoffTimer *_expBackoffTimer;
    CDStruct_5d77a0e9 _expBackoffConfig;
    NSMutableDictionary *_clientPreferences;
    int _retryCount;
    _Bool _wasInterruptedBeforeAppFG;
    _Bool _activateVoipSessions;
    _Bool _allowAVAudioSessionCategoryOptionMixWithOthers;
    _Bool _callKitActive;
    _Bool _allowAudioResetWhenCallKitActive;
    _Bool _allowSpkOverrideAfterCategoryChange;
    _Bool _allowCallKitActiveAdjust;
    _Bool _overrideOutputAudioPortOnlyWhenUserRequests;
    _Bool _allowAudioReset;
    _Bool _ignoreAudioResetWhenClientsEmpty;
    _Bool _allowSettingInputOrientation;
    _Bool _shouldEnableStereoCapture;
}

+ (unsigned long long)preferredSessionModeForComputedMode:(unsigned long long)arg1 newMode:(unsigned long long)arg2;
+ (void)propertiesForClients:(id)arg1 routeIsExternal:(_Bool)arg2 active:(out _Bool *)arg3 activeOptions:(out unsigned long long *)arg4 category:(out id *)arg5 categoryOptions:(out unsigned long long *)arg6 mode:(out id *)arg7 portOverrideOptions:(out unsigned long long *)arg8 disablePortOverrides:(inout _Bool *)arg9 allowSettingInputOrientation:(_Bool)arg10 shouldEnableStereoCapture:(_Bool)arg11 preferredInputOrientations:(out id *)arg12 allowMixin:(_Bool)arg13 shouldBeHandsOff:(_Bool)arg14 clientIsCasting:(out _Bool *)arg15 appBackgrounded:(_Bool)arg16 prefersExternalMic:(out _Bool *)arg17;
+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldEnableStereoCapture; // @synthesize shouldEnableStereoCapture=_shouldEnableStereoCapture;
@property(nonatomic) _Bool allowSettingInputOrientation; // @synthesize allowSettingInputOrientation=_allowSettingInputOrientation;
@property(nonatomic) _Bool ignoreAudioResetWhenClientsEmpty; // @synthesize ignoreAudioResetWhenClientsEmpty=_ignoreAudioResetWhenClientsEmpty;
@property(nonatomic) _Bool allowAudioReset; // @synthesize allowAudioReset=_allowAudioReset;
@property(nonatomic) _Bool overrideOutputAudioPortOnlyWhenUserRequests; // @synthesize overrideOutputAudioPortOnlyWhenUserRequests=_overrideOutputAudioPortOnlyWhenUserRequests;
@property(nonatomic) _Bool allowCallKitActiveAdjust; // @synthesize allowCallKitActiveAdjust=_allowCallKitActiveAdjust;
@property(nonatomic) _Bool allowSpkOverrideAfterCategoryChange; // @synthesize allowSpkOverrideAfterCategoryChange=_allowSpkOverrideAfterCategoryChange;
@property(nonatomic) _Bool allowAudioResetWhenCallKitActive; // @synthesize allowAudioResetWhenCallKitActive=_allowAudioResetWhenCallKitActive;
@property(nonatomic, getter=isCallKitActive) _Bool callKitActive; // @synthesize callKitActive=_callKitActive;
@property(nonatomic) _Bool allowAVAudioSessionCategoryOptionMixWithOthers; // @synthesize allowAVAudioSessionCategoryOptionMixWithOthers=_allowAVAudioSessionCategoryOptionMixWithOthers;
@property(nonatomic) _Bool activateVoipSessions; // @synthesize activateVoipSessions=_activateVoipSessions;
- (_Bool)isStereoCaptureEnabled;
- (void)_didStartBugReport:(id)arg1;
- (void)_setClientPreferences:(id)arg1 forAction:(id)arg2;
- (void)_applicationWillResignActive;
- (void)_applicationDidBecomeActive;
- (_Bool)hasAnyExternalInput;
- (_Bool)isRoutingOnlyToReceiver;
- (_Bool)isRoutingOnlyToReceiver:(id)arg1;
- (_Bool)_isRoutingToPort:(id)arg1 ports:(id)arg2;
- (_Bool)isRoutingToHDMI;
- (_Bool)isRoutingToHDMI:(id)arg1;
- (_Bool)isRoutingToLineOut;
- (_Bool)isRoutingToLineOut:(id)arg1;
- (_Bool)isRoutingToAirPlay;
- (_Bool)isRoutingToAirPlay:(id)arg1;
- (_Bool)isRoutingToUSB;
- (_Bool)isRoutingToUSB:(id)arg1;
- (_Bool)isAnyBluetoothConnected;
- (_Bool)isRoutingToBluetoothHfp;
- (_Bool)isRoutingToBluetooth;
- (_Bool)isRoutingToBluetooth:(id)arg1;
- (_Bool)isRoutingToHeadphones;
- (_Bool)isRoutingToHeadphones:(id)arg1;
- (_Bool)isRoutingToReceiver;
- (_Bool)isRoutingToReceiver:(id)arg1;
- (_Bool)isRoutingToSpeaker;
- (_Bool)isRoutingToSpeaker:(id)arg1;
- (id)currentOutputPorts;
- (_Bool)audioSessionInterrupted;
- (void)clearInterruptedState;
- (void)waitUtilFinish;
- (_Bool)hasHardwareVoiceCallProcessing;
- (void)dispatchError:(id)arg1 selector:(SEL)arg2;
- (void)announceRouteChange:(SEL)arg1 reason:(unsigned long long)arg2 outputPorts:(id)arg3;
- (void)announceStatusChange:(SEL)arg1;
- (void)removeAudioSessionErrorObserver:(id)arg1;
- (void)addAudioSessionErrorObserver:(id)arg1;
- (void)removeOutputVolumeDidChangeListener:(id)arg1;
- (void)addOutputVolumeDidChangeListener:(id)arg1;
- (void)removeAudioSessionStatusObserver:(id)arg1;
- (void)addAudioSessionStatusObserver:(id)arg1;
- (void)_registerForVolumeChanges;
- (void)_setCurrentOutputVolume:(float)arg1;
- (_Bool)_allowSpeakerOverride:(unsigned long long)arg1 withBuiltInSpeaker:(_Bool)arg2 andBuiltinReceiver:(_Bool)arg3;
- (void)_updateRoutesWithReason:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_audioRouteChangedWithNotification:(id)arg1;
- (void)_registerForAudioRoutes;
- (void)_notifyActiveClientsOfDeactivationPriority:(id)arg1;
- (void)_notifyActiveClientsOfActivationPriority:(id)arg1;
- (_Bool)_isRTCClient:(id)arg1;
- (void)_updateInterruptedForAddedClient:(id)arg1 updateSucceeded:(_Bool)arg2;
- (void)_shouldRetryUpdateOnError:(id)arg1 forceUpdateByClient:(_Bool)arg2 disablePortOverrides:(_Bool)arg3 isFromReset:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_resumeClientsFromInterruption:(_Bool)arg1;
- (void)_interruptionWithNotification:(id)arg1;
- (void)_registerForInterruptions;
- (_Bool)_clientBackgroundAudioEnabled:(id)arg1;
- (void)_enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasRTCClient;
- (float)outputVolume;
- (_Bool)isMuted;
- (_Bool)isSpeakerphone;
- (_Bool)isHeadphoneConnected;
- (_Bool)isBluetooth;
- (_Bool)isExternal;
- (_Bool)containsActiveClient:(id)arg1;
- (_Bool)overrideOutputAudioToSpeakerphone:(_Bool)arg1;
- (_Bool)reloadActiveClientDontChangeRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)reloadActiveClient:(id)arg1 forceUpdate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)reloadActiveClientWithSetterSuccessCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)reloadActiveClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_reloadActiveClientWithSetterSuccessCompletion:(id)arg1 forceUpdate:(_Bool)arg2 disablePortOverrides:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_clientShouldBeUpdated:(id)arg1;
- (_Bool)_reloadActiveClient:(id)arg1 forceUpdate:(_Bool)arg2 disablePortOverrides:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeFinishedClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addActiveClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableExponentialBackoffTimer:(_Bool)arg1 config:(CDStruct_5d77a0e9)arg2;
- (void)setUpdateClientsOnAppBackground:(_Bool)arg1;
- (void)setIgnoreAudioSessionUpdatesOnInterrupt:(_Bool)arg1;
- (void)setAudioSessionActiveWhileAppRunning:(_Bool)arg1;
- (void)setFixVideoCallHeadphonesRemoval:(_Bool)arg1;
- (_Bool)fixVideoCallHeadphonesRemoval;
- (void)setIgnoreUnnecessaryInterruptions:(_Bool)arg1;
- (void)setClearInterruptedStateForClientsOnAppFG:(_Bool)arg1;
- (void)setAudioSessionAvoidClearInterruptedOnClientUpdate:(_Bool)arg1;
- (void)setAudioSessionBugReportEnabled:(_Bool)arg1;
- (void)setAudioSessionShouldBeHandsOff:(_Bool)arg1;
- (_Bool)audioSessionShouldBeHandsOff;
- (void)setDisableRegisterForVolumeChanges:(_Bool)arg1;
- (void)setMemoizeAudioSessionVolumeAccess:(_Bool)arg1;
- (void)setShowingAudioRouteSelector:(_Bool)arg1;
- (void)enableIosBluetoothWorkaround:(_Bool)arg1;
- (void)resetAudioSessionWithRetries:(unsigned long long)arg1 retryInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_shouldForceUpdateByClient;
- (void)_runCompletionAndAnnounceStatusChange:(CDUnknownBlockType)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)_update:(CDUnknownBlockType)arg1 forceupdate:(_Bool)arg2 forceUpdateByClient:(_Bool)arg3 disablePortOverrides:(_Bool)arg4 isFromReset:(_Bool)arg5 backoffRetrying:(_Bool)arg6;
- (void)_update:(CDUnknownBlockType)arg1 forceupdate:(_Bool)arg2 forceUpdateByClient:(_Bool)arg3 disablePortOverrides:(_Bool)arg4 isFromReset:(_Bool)arg5;
- (id)_backgroundAudioEnabledClients;
- (void)_updateAVAudioSessionProperties:(_Bool)arg1 active:(_Bool)arg2 activeOptions:(unsigned long long)arg3 category:(id)arg4 categoryOptions:(unsigned long long)arg5 preferredInputOrientations:(id)arg6 forceupdate:(_Bool)arg7 mode:(id)arg8 categoryUpdated:(_Bool *)arg9 clientIsCasting:(_Bool)arg10 prefersExternalMic:(_Bool)arg11 error:(id *)arg12;
- (void)_validateClients:(id)arg1 clientsClasses:(id)arg2;
- (id)initWithAudioSession:(id)arg1;

@end
