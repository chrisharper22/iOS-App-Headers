//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGReshareHubLogging-Protocol.h"

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGReshareHubLogger : NSObject <IGReshareHubLogging>
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    NSString *_threadID;
    NSString *_sessionID;
}

- (void).cxx_destruct;
- (void)logSendWithRecipientIDs:(id)arg1 mediaID:(id)arg2;
- (void)logSelectMediaWithID:(id)arg1 tab:(long long)arg2;
- (void)logReshareHubOpenWithInitialTab:(long long)arg1;
- (id)initWithAnalyticsLogger:(id)arg1 threadID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

