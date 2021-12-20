//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCheckpointCoordinatorDelegate-Protocol.h"
#import "IGCheckpointManaging-Protocol.h"

@class IGDeviceSessionProvider, NSString;

@interface IGLoggedOutCheckpointManager : NSObject <IGCheckpointCoordinatorDelegate, IGCheckpointManaging>
{
    IGDeviceSessionProvider *_deviceSessionProvider;
}

- (void).cxx_destruct;
- (void)_handleChallengeWithCheckpointModel:(id)arg1 deviceSession:(id)arg2 presenter:(id)arg3;
- (void)_attemptClearWithBigBlue:(id)arg1 networker:(id)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_attemptClearWithCheckpointModel:(id)arg1 deviceSession:(id)arg2 presenter:(id)arg3;
- (void)_showChallengeWithResponse:(id)arg1 deviceSession:(id)arg2 presenter:(id)arg3;
- (void)checkpointCoordinatorDidBackToLogin:(id)arg1;
- (void)checkpointCoordinator:(id)arg1 didSucceedWithType:(unsigned long long)arg2;
- (void)checkpointCoordinator:(id)arg1 didTerminateWithChallengeType:(id)arg2 isCleared:(_Bool)arg3;
- (void)handleChallengeWithCookies:(id)arg1 checkpointModel:(id)arg2;
- (void)showCheckpointWithCookies:(id)arg1 challengeResponse:(id)arg2;
- (id)initWithDeviceSessionProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
