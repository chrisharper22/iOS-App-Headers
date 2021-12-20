//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBGeneralImpressionManagerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol FBAnalyticsLogging;

@interface IGVideoCallRankingCallRecipientsLogger : NSObject <FBGeneralImpressionManagerDelegate>
{
    id <FBAnalyticsLogging> _logger;
    NSString *_sessionId;
    NSString *_mnetRequestId;
    NSMutableDictionary *_selectedRecipients;
}

- (void).cxx_destruct;
- (void)_logCallRecipientImpressionEvent:(id)arg1;
- (void)impressionManager:(id)arg1 willLogClickSessionEnd:(id)arg2 clickSessionDurationMs:(unsigned long long)arg3;
- (void)impressionManager:(id)arg1 willLogClick:(id)arg2;
- (void)impressionManager:(id)arg1 willLogImpression:(id)arg2;
- (void)setMnetRequestId:(id)arg1;
- (void)didRemoveSelectedRecipient:(id)arg1;
- (void)didAddSelectedRecipient:(id)arg1 atPosition:(id)arg2 isSearch:(_Bool)arg3;
- (void)logClickEventForSelectedRecipients;
- (id)initWithUserSession:(id)arg1 sessionId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

