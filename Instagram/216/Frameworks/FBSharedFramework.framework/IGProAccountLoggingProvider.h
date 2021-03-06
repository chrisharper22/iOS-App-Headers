//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGInterestAccountLoggingEntryPointProviding-Protocol.h>
#import <FBSharedFramework/IGInterestAccountLoggingProviding-Protocol.h>

@class IG4BLoggerConfiguration, IGUser, NSString;
@protocol IGConcurrentSessionHandling;

@interface IGProAccountLoggingProvider : NSObject <IGInterestAccountLoggingProviding, IGInterestAccountLoggingEntryPointProviding>
{
    IG4BLoggerConfiguration *_loggerConfig;
    IGUser *_actorAccount;
    id <IGConcurrentSessionHandling> _concurrentUserSessionHandler;
    NSString *_entryPoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
- (void)logEventWithInterestAccountLogType:(long long)arg1 metadata:(id)arg2;
- (id)initWithLoggerConfig:(id)arg1 stepType:(long long)arg2 concurrentUserSessionHandler:(id)arg3 actorAccount:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

