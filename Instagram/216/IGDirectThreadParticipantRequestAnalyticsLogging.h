//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectThreadParticipantRequestAnalyticsLogging : NSObject
{
    NSString *_analyticsModule;
    NSString *_threadId;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)logSeeAllButtonTap;
- (void)logApproveParticipantRequests:(id)arg1;
- (void)logRemoveParticipantRequest:(id)arg1;
- (id)initWithAnalyticsModule:(id)arg1 threadId:(id)arg2 analyticsLogger:(id)arg3;

@end

