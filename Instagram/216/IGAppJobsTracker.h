//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAppJobsRunContextDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface IGAppJobsTracker : NSObject <IGAppJobsRunContextDelegate>
{
    NSMutableSet *_executedAppJobsNames;
    _Bool _authorized;
    _Bool _enableQPLLogging;
}

+ (id)loggedOutTracker;
- (void).cxx_destruct;
- (void)appJobContextDidFinishRunning:(id)arg1;
- (_Bool)shouldExecuteAppJob:(id)arg1;
- (void)markAppJobExecuted:(id)arg1;
- (id)_initPrivate:(_Bool)arg1 enableQPLLogging:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

