//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayLoggingAPI-Protocol.h"
#import "FBPaymentsW3CClientLogger-Protocol.h"

@class NSString;
@protocol FBAnalyticsLogging;

@interface IGFBPaymentsW3CClientLogger : NSObject <FBPaymentsW3CClientLogger, FBPayLoggingAPI>
{
    id <FBAnalyticsLogging> _logger;
}

- (void).cxx_destruct;
- (void)_logAutofillAction:(id)arg1;
- (void)interceptEvent:(long long)arg1;
- (void)logEventName:(long long)arg1 extraData:(id)arg2;
- (id)getSessionID;
- (void)paymentSettingsSaveCardButtonClick;
- (void)paymentSettingsRemoveCard;
- (void)paymentSettingsAddedNewCard;
- (void)paymentSettingsAddCardButtonClick;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

