//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableDictionary, NSString;

@interface FBSDKLoginManagerLogger : NSObject
{
    NSString *_identifier;
    NSMutableDictionary *_extras;
    NSString *_lastResult;
    NSError *_lastError;
    NSString *_authMethod;
    NSString *_loggingToken;
}

+ (id)clientStateForAuthMethod:(id)arg1 andExistingState:(id)arg2 logger:(id)arg3;
+ (id)parametersWithTimeStampAndClientState:(id)arg1 forAuthMethod:(id)arg2 logger:(id)arg3;
+ (id)loggerFromParameters:(id)arg1 tracking:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *loggingToken; // @synthesize loggingToken=_loggingToken;
@property(retain, nonatomic) NSString *authMethod; // @synthesize authMethod=_authMethod;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) NSString *lastResult; // @synthesize lastResult=_lastResult;
@property(retain, nonatomic) NSMutableDictionary *extras; // @synthesize extras=_extras;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)logEvent:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)logEvent:(id)arg1 params:(id)arg2;
- (id)_parametersForNewEvent;
- (void)logNativeAppDialogResult:(_Bool)arg1 dialogDuration:(double)arg2;
- (void)willAttemptAppSwitchingBehaviorWithUrlScheme:(id)arg1;
- (void)heartbestTimerDidFire;
- (void)postLoginHeartbeat;
- (void)endLoginWithResult:(id)arg1 error:(id)arg2;
- (void)startAuthMethod:(id)arg1;
- (void)endSession;
- (void)startSessionForLoginManager:(id)arg1;
- (id)initWithLoggingToken:(id)arg1 tracking:(unsigned long long)arg2;

@end

