//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectPollMessageLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)logExistingPollSubmitSuccessWithPollId:(id)arg1 threadInfo:(id)arg2 analyticsModule:(id)arg3;
- (void)logExistingPollSubmitError:(id)arg1 pollId:(id)arg2 threadInfo:(id)arg3 analyticsModule:(id)arg4;
- (void)logSubmitExistingPollWithPollId:(id)arg1 numOptionsSelected:(long long)arg2 numOptionsUnselected:(long long)arg3 numOptionsAdded:(long long)arg4 threadInfo:(id)arg5 analyticsModule:(id)arg6;
- (void)logShowVotersWithPollId:(id)arg1 threadInfo:(id)arg2 analyticsModule:(id)arg3;
- (void)logChangeVoteWithPollId:(id)arg1 threadInfo:(id)arg2 analyticsModule:(id)arg3;
- (void)logOpenExistingPollWithId:(id)arg1 entryPoint:(unsigned long long)arg2 threadInfo:(id)arg3 analyticsModule:(id)arg4;
- (void)logNewPollSubmitSuccessWithThreadInfo:(id)arg1 analyticsModule:(id)arg2;
- (void)logNewPollSubmitError:(id)arg1 threadInfo:(id)arg2 analyticsModule:(id)arg3;
- (void)logSubmitNewPollWithNumOptions:(long long)arg1 threadInfo:(id)arg2 analyticsModule:(id)arg3;
- (void)logStartNewPollWithThreadInfo:(id)arg1 module:(id)arg2;
- (id)initWithAnalyticsLogger:(id)arg1;

@end

