//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectInboxServiceListener-Protocol.h"

@class IGDirectCache, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGUserFeatureSets;

@interface IGDirectBadgeCountValidator : NSObject <IGDirectInboxServiceListener>
{
    NSString *_userPk;
    _Bool _shouldLogBadgeConsistency;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGDirectCache *_directCache;
    id <IGUserFeatureSets> _featureSets;
}

- (void).cxx_destruct;
- (void)directInboxServiceFetchFailedWithFetchInput:(id)arg1 httpStatusCode:(long long)arg2 error:(id)arg3 willAutoRetry:(_Bool)arg4;
- (void)directInboxServiceFetchSucceededWithFetchInput:(id)arg1 fetchOutput:(id)arg2;
- (void)_logBadgeCountConsistencyCheckWithInAppUnseenThreads:(id)arg1 serverThreads:(id)arg2 serverUnseenCount:(id)arg3;
- (void)_validateBadgeConsistencyWithCachedThreads:(id)arg1 serverThreads:(id)arg2 serverUnseenCount:(id)arg3;
- (id)initWithShouldLogBadgeConsistency:(_Bool)arg1 userPk:(id)arg2 analyticsLogger:(id)arg3 directCache:(id)arg4 featureSets:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
