//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectRealtimeIrisSyncStatusListener-Protocol.h>

@class IGDirectThreadStartupAnalyzer, NSString;
@protocol IGDirectRealtimeIrisSyncStatusQuerying;

@interface IGDirectThreadSyncStatusPerfLogger : NSObject <IGDirectRealtimeIrisSyncStatusListener>
{
    IGDirectThreadStartupAnalyzer *_startupAnalyzer;
    id <IGDirectRealtimeIrisSyncStatusQuerying> _irisSyncStatusProvider;
}

- (void).cxx_destruct;
- (void)irisSyncStatusTrackerChangedStatus:(id)arg1;
- (id)initWithStartupAnalyzer:(id)arg1 irisSyncStatusProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

