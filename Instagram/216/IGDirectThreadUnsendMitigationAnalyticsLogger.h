//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGGenericMegaphoneLogger-Protocol.h"

@class IGDirectThreadMetadata, IGUserDefaults, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectThreadUnsendMitigationAnalyticsLogger : NSObject <IGGenericMegaphoneLogger>
{
    id <IGAnalyticsEventLoggingProtocol> _logger;
    IGUserDefaults *_sessionUserDefaults;
    NSString *_threadId;
    IGDirectThreadMetadata *_threadMetadata;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (Optional_8822d440)_responsibleUserType;
- (Optional_381dc36e)_responsibleUserId;
- (Optional_a57f94f2)_threadType;
- (void)_logSenderWithAction:(int)arg1;
- (void)_logRecipientWithAction:(int)arg1;
- (void)logMegaphoneButtonTapped:(id)arg1 onButton:(id)arg2;
- (void)logMegaphoneDismissed:(id)arg1;
- (void)logMegaphoneWasSeen:(id)arg1;
- (void)logSenderOKButtonClicked;
- (void)logRecipientDismiss;
- (void)logLearnMoreClicked:(unsigned long long)arg1;
- (void)logShow:(unsigned long long)arg1;
- (id)initWithLogger:(id)arg1 sessionUserDefaults:(id)arg2 threadId:(id)arg3 threadMetadata:(id)arg4 analyticsModule:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
