//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGGenericMegaphoneLogger-Protocol.h"

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectThreadProactiveWarningsLogger : NSObject <IGGenericMegaphoneLogger>
{
    id <IGAnalyticsEventLoggingProtocol> _logger;
    NSString *_context;
    NSString *_threadIdV2ForInboxPaging;
    NSString *_targetUserId;
    NSString *_analyticsModule;
    NSString *_sessionId;
}

- (void).cxx_destruct;
- (void)_logEvent:(long long)arg1;
- (void)logMegaphoneButtonTapped:(id)arg1 onButton:(id)arg2;
- (void)logMegaphoneDismissed:(id)arg1;
- (void)logMegaphoneWasSeen:(id)arg1;
- (id)initWithLogger:(id)arg1 context:(id)arg2 threadIdV2ForInboxPaging:(id)arg3 targetUserId:(id)arg4 analyticsModule:(id)arg5 sessionId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
