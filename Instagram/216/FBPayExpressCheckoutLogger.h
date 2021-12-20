//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayUPLLoggingAPI-Protocol.h"

@class FBPayUPLLoggingLoggingConfiguration, NSDictionary, NSString;
@protocol FBPayUPLLoggingAPI;

@interface FBPayExpressCheckoutLogger : NSObject <FBPayUPLLoggingAPI>
{
    id <FBPayUPLLoggingAPI> _uplLogger;
    FBPayUPLLoggingLoggingConfiguration *_loggingConfiguration;
    NSDictionary *_loggingContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(retain, nonatomic) FBPayUPLLoggingLoggingConfiguration *loggingConfiguration; // @synthesize loggingConfiguration=_loggingConfiguration;
- (id)_filteredExtraDataWithLoggingPolicy:(id)arg1;
- (id)_payloadFromExtraData:(id)arg1;
- (void)logComponentGainFocus:(long long)arg1 extraData:(id)arg2;
- (void)logComponentClick:(long long)arg1 extraData:(id)arg2;
- (void)logComponentDisplayContent:(long long)arg1 extraData:(id)arg2;
- (void)logComponentInit:(long long)arg1 extraData:(id)arg2;
- (void)setLoggingContextWithPaymentRequest:(id)arg1;
- (id)getProductID;
- (id)getSessionID;
- (void)logUPLEvent:(id)arg1 extraData:(id)arg2;
- (id)initWithUPLLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
