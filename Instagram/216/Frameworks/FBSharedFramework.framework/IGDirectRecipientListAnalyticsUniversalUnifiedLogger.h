//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBGeneralImpressionManagerDelegate-Protocol.h>

@class IGDirectRecipientListAnalyticsLogger, IGDirectShareRecipient, IGUserSession, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectRecipientListAnalyticsUniversalUnifiedLogger : NSObject <FBGeneralImpressionManagerDelegate>
{
    NSString *_analyticsModule;
    NSString *_sessionId;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGUserSession *_userSession;
    IGDirectShareRecipient *_lastSelectedRecipient;
    NSString *_selectedRecipientIdentifier;
    _Bool _isSearchLoggingUnificationEnabled;
    _Bool _didTriggerUnifiedLoggingEndEvent;
    IGDirectRecipientListAnalyticsLogger *_previousLogger;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didTriggerUnifiedLoggingEndEvent; // @synthesize didTriggerUnifiedLoggingEndEvent=_didTriggerUnifiedLoggingEndEvent;
@property(readonly, copy, nonatomic) IGDirectRecipientListAnalyticsLogger *previousLogger; // @synthesize previousLogger=_previousLogger;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)logUniversalSearchEndWithRecipient:(id)arg1 endAction:(long long)arg2 viewerUserId:(id)arg3;
- (void)logUniversalSearchResultSelected:(id)arg1 uiSection:(long long)arg2 uiSectionIndex:(id)arg3 resultIndex:(id)arg4 queryString:(id)arg5 isExpanded:(_Bool)arg6 transportType:(id)arg7 threadId:(id)arg8 rankScore:(id)arg9 isLocal:(_Bool)arg10 mnetRequestId:(id)arg11;
- (void)setSelectedRecipient:(id)arg1 query:(id)arg2 isExpanded:(_Bool)arg3;
- (void)logUniversalSearchQueryChanged:(id)arg1;
- (void)logUniversalSearchStart;
- (void)impressionManager:(id)arg1 willLogClickSessionEnd:(id)arg2 clickSessionDurationMs:(unsigned long long)arg3;
- (void)impressionManager:(id)arg1 willLogClick:(id)arg2;
- (void)impressionManager:(id)arg1 willLogImpression:(id)arg2;
- (id)initWithAnalyticsModule:(id)arg1 analyticsLogger:(id)arg2 userSession:(id)arg3 sessionId:(id)arg4 shareSheetSessionId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

