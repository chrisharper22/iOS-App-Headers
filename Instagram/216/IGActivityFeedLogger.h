//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSMutableSet, NSString;
@protocol IGAPIClient;

@interface IGActivityFeedLogger : NSObject
{
    NSString *_analyticsModule;
    NSString *_priorModule;
    NSString *_priorSubmodule;
    id <IGAPIClient> _networker;
    NSMutableSet *_impressionPKSet;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)logInlineSUPosition:(unsigned long long)arg1;
- (void)logHideWithStoryPK:(id)arg1 position:(unsigned long long)arg2 storyType:(unsigned long long)arg3 section:(id)arg4 tuuid:(id)arg5 timeBucket:(id)arg6 candidateID:(id)arg7 extras:(id)arg8;
- (void)logClickWithStoryPK:(id)arg1 position:(unsigned long long)arg2 storyType:(unsigned long long)arg3 section:(id)arg4 tuuid:(id)arg5 timeBucket:(id)arg6 tapTarget:(id)arg7 candidateID:(id)arg8 extras:(id)arg9;
- (void)logStoryMentionsImpression;
- (void)logImpressionWithStoryPK:(id)arg1 position:(unsigned long long)arg2 storyType:(unsigned long long)arg3 section:(id)arg4 tuuid:(id)arg5 timeBucket:(id)arg6 tagID:(id)arg7 candidateID:(id)arg8 extras:(id)arg9;
- (void)_logEventWithAction:(id)arg1 storyPK:(id)arg2 storyTuuid:(id)arg3;
- (id)initWithAnalyticsModule:(id)arg1 priorModule:(id)arg2 priorSubmodule:(id)arg3 networker:(id)arg4 userSession:(id)arg5;

@end

