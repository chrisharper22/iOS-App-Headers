//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectRealtimeIrisSyncErrorAnalyticsLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)logDismissThreadWithAction:(id)arg1 userId:(unsigned long long)arg2 currentSeqId:(id)arg3 irisStuckTime:(id)arg4 latestSeqId:(id)arg5;
- (id)initWithAnalyticsLogger:(id)arg1;

@end

