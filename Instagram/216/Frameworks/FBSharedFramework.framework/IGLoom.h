//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBLoomBlackBoxTracingDelegate-Protocol.h>

@class IGLoomConfigurationNetworkSource;

@interface IGLoom : NSObject <FBLoomBlackBoxTracingDelegate>
{
    _Bool _started;
    struct shared_ptr<FBLoomOrchestrator> _orchestrator;
    struct shared_ptr<IGLoomUploadNetworkSource> _uploadNetworkSource;
    IGLoomConfigurationNetworkSource *_configNetworkSource;
    struct shared_ptr<FBLoomConfigurationManager> _configurationManager;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_startMobileLabQPLEvent;
- (id)getCurrentCrashResistantTrace;
- (id)blackBoxTracingDidAskToWriteTraceWithTriggerID:(int)arg1;
- (void)processMmappedTraces:(id)arg1 withColdStartReason:(id)arg2;
- (_Bool)isInsideBlackboxTrace;
- (id)getCurrentTraceIDTriggeredByQPL:(unsigned int)arg1;
- (id)getCurrentTraceID;
- (_Bool)isInsideTraceTriggeredByQPL:(unsigned int)arg1;
- (_Bool)isInsideTrace;
- (void)_updateLoomInMemoryLogger:(id)arg1;
- (void)_registerForLoomConfigUpload:(id)arg1;
- (_Bool)hasPermissionToWriteOnDisk;
- (void)_updateUserSession:(id)arg1;
- (void)_didLogInWithNewUserSession:(id)arg1;
- (void)_didLogoutAllUsers;
- (void)updateOnSessionChange:(id)arg1;
- (void)didColdStartWithUserSession:(id)arg1;
- (void)_registerProviders;
- (void)registerController:(shared_ptr_f67b7089)arg1;
- (void)start;

@end
