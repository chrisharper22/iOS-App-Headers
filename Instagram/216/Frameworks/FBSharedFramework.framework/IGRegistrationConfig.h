//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAuthenticator, IGContinueAsRegistrationConfig, IGDeviceSession, IGMainAppSurfaceIntent, IGRegistrationFlowType, IGUser, IGUserSession;
@protocol IGAPIClient, IGProAccountCreationContextProtocol;

@interface IGRegistrationConfig : NSObject
{
    _Bool _hideFacebookButton;
    _Bool _isLoggingOut;
    _Bool _requiresSwitchToLastUserForFlowDismiss;
    id <IGAPIClient> _networker;
    IGDeviceSession *_deviceSession;
    id <IGProAccountCreationContextProtocol> _proAccountCreationContext;
    IGUser *_userSwitchedFrom;
    IGRegistrationFlowType *_flowType;
    IGAuthenticator *_authenticator;
    IGContinueAsRegistrationConfig *_registrationConfig;
    IGMainAppSurfaceIntent *_cancelSwitchDestinationAppSurface;
    unsigned long long _entryPoint;
    IGUserSession *_previouslyLoggedInUserSession_DO_NOT_USE_UNLESS_YOU_KNOW_WHAT_YOU_ARE_DOING;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserSession *previouslyLoggedInUserSession_DO_NOT_USE_UNLESS_YOU_KNOW_WHAT_YOU_ARE_DOING; // @synthesize previouslyLoggedInUserSession_DO_NOT_USE_UNLESS_YOU_KNOW_WHAT_YOU_ARE_DOING=_previouslyLoggedInUserSession_DO_NOT_USE_UNLESS_YOU_KNOW_WHAT_YOU_ARE_DOING;
@property(readonly, nonatomic) unsigned long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) _Bool requiresSwitchToLastUserForFlowDismiss; // @synthesize requiresSwitchToLastUserForFlowDismiss=_requiresSwitchToLastUserForFlowDismiss;
@property(readonly, nonatomic) IGMainAppSurfaceIntent *cancelSwitchDestinationAppSurface; // @synthesize cancelSwitchDestinationAppSurface=_cancelSwitchDestinationAppSurface;
@property(readonly, nonatomic) IGContinueAsRegistrationConfig *registrationConfig; // @synthesize registrationConfig=_registrationConfig;
@property(readonly, nonatomic) IGAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(readonly, nonatomic) _Bool isLoggingOut; // @synthesize isLoggingOut=_isLoggingOut;
@property(readonly, nonatomic) _Bool hideFacebookButton; // @synthesize hideFacebookButton=_hideFacebookButton;
@property(readonly, nonatomic) IGRegistrationFlowType *flowType; // @synthesize flowType=_flowType;
@property(readonly, nonatomic) IGUser *userSwitchedFrom; // @synthesize userSwitchedFrom=_userSwitchedFrom;
@property(readonly, nonatomic) id <IGProAccountCreationContextProtocol> proAccountCreationContext; // @synthesize proAccountCreationContext=_proAccountCreationContext;
@property(readonly, nonatomic) IGDeviceSession *deviceSession; // @synthesize deviceSession=_deviceSession;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (id)initWithNetworker:(id)arg1 deviceSession:(id)arg2 proAccountCreationContext:(id)arg3 userSwitchedFrom:(id)arg4 flowType:(id)arg5 hideFacebookButton:(_Bool)arg6 isLoggingOut:(_Bool)arg7 authenticator:(id)arg8 registrationConfig:(id)arg9 cancelSwitchDestinationAppSurface:(id)arg10 requiresSwitchToLastUserForFlowDismiss:(_Bool)arg11 entryPoint:(unsigned long long)arg12 previouslyLoggedInUserSession_DO_NOT_USE_UNLESS_YOU_KNOW_WHAT_YOU_ARE_DOING:(id)arg13;

@end
