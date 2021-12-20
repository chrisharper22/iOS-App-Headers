//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGExceptionHandler-Protocol.h"
#import "IGSimplifiedAppStateHandlingDelegate-Protocol.h"

@class FBBreakpadExceptionHandler, NSString;
@protocol IGSimplifiedAppStateHandling, OS_dispatch_queue;

@interface IGExceptionHandler : NSObject <IGSimplifiedAppStateHandlingDelegate, IGExceptionHandler>
{
    FBBreakpadExceptionHandler *_breakpadHandler;
    NSObject<OS_dispatch_queue> *_exceptionProcessingQueue;
    id <IGSimplifiedAppStateHandling> _appStateHandler;
    _Bool _hasEmptyCrashReport;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasEmptyCrashReport; // @synthesize hasEmptyCrashReport=_hasEmptyCrashReport;
- (void)_logEventOnMain:(id)arg1 logger:(id)arg2;
- (void)_networkTransferRateChangedNotification:(id)arg1;
- (void)didLogoutAllUsers;
- (void)didSwitchToNewUserPK:(id)arg1 username:(id)arg2;
- (void)setExperimentsGroupsMapping:(id)arg1;
- (id)breakpadExceptionHandler;
- (void)process:(id)arg1 logger:(id)arg2;
- (void)_updateParameters:(id)arg1 withUserInfoFromUserSession:(id)arg2;
- (void)_updateExceptionParamWithUserSession:(id)arg1;
- (void)_populateExceptionParametersOnBackgroundWithUserSession:(id)arg1;
- (void)setupWithUserSession:(id)arg1;
- (void)simplifiedAppStateHandler:(id)arg1 didChangeState:(id)arg2;
- (id)previousAppSessionLastAppState;
- (_Bool)hasEmptyFatalCrashReport;
- (void)_initializeEmptyCrashReport;
- (void)_initializeBreakpad;
- (id)initWithAppStateHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
