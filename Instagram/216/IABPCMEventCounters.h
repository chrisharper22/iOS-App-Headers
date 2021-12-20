//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IABPCMEventCounters : FBValueObject <NSCopying, NSCoding>
{
    NSString *_pcmAdDestination;
    NSString *_pcmCampaignID;
    long long _totalEventsNumber;
    long long _invalidDataEventsNumber;
    long long _validConversionDataEventsNumber;
    long long _validConversionDataEventsFromJSNumber;
    long long _invalidConversionDataEventsNumber;
    long long _failedToFetchConversionDataEventsNumber;
    long long _receivedConversionDataBeforeCampaignDataEventsNumber;
    long long _ccpaRestrictedEventsNumber;
    long long _sentConversionsNumber;
    long long _successfulConversionSendingsNumber;
    long long _failedConversionSendingsNumber;
    long long _initializationJSEventsNumber;
    long long _nonceRequestEventsNumber;
    long long _invalidNonceEventsNumber;
    long long _receivedPixelDataBeforeNonceIsSetEventsNumber;
    long long _receivedJSMessageWithoutCallbackIDEventsNumber;
    long long _nonceSendingFailedEventsNumber;
    long long _invalidCallbackHandlerNameEventsNumber;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long invalidCallbackHandlerNameEventsNumber; // @synthesize invalidCallbackHandlerNameEventsNumber=_invalidCallbackHandlerNameEventsNumber;
@property(readonly, nonatomic) long long nonceSendingFailedEventsNumber; // @synthesize nonceSendingFailedEventsNumber=_nonceSendingFailedEventsNumber;
@property(readonly, nonatomic) long long receivedJSMessageWithoutCallbackIDEventsNumber; // @synthesize receivedJSMessageWithoutCallbackIDEventsNumber=_receivedJSMessageWithoutCallbackIDEventsNumber;
@property(readonly, nonatomic) long long receivedPixelDataBeforeNonceIsSetEventsNumber; // @synthesize receivedPixelDataBeforeNonceIsSetEventsNumber=_receivedPixelDataBeforeNonceIsSetEventsNumber;
@property(readonly, nonatomic) long long invalidNonceEventsNumber; // @synthesize invalidNonceEventsNumber=_invalidNonceEventsNumber;
@property(readonly, nonatomic) long long nonceRequestEventsNumber; // @synthesize nonceRequestEventsNumber=_nonceRequestEventsNumber;
@property(readonly, nonatomic) long long initializationJSEventsNumber; // @synthesize initializationJSEventsNumber=_initializationJSEventsNumber;
@property(readonly, nonatomic) long long failedConversionSendingsNumber; // @synthesize failedConversionSendingsNumber=_failedConversionSendingsNumber;
@property(readonly, nonatomic) long long successfulConversionSendingsNumber; // @synthesize successfulConversionSendingsNumber=_successfulConversionSendingsNumber;
@property(readonly, nonatomic) long long sentConversionsNumber; // @synthesize sentConversionsNumber=_sentConversionsNumber;
@property(readonly, nonatomic) long long ccpaRestrictedEventsNumber; // @synthesize ccpaRestrictedEventsNumber=_ccpaRestrictedEventsNumber;
@property(readonly, nonatomic) long long receivedConversionDataBeforeCampaignDataEventsNumber; // @synthesize receivedConversionDataBeforeCampaignDataEventsNumber=_receivedConversionDataBeforeCampaignDataEventsNumber;
@property(readonly, nonatomic) long long failedToFetchConversionDataEventsNumber; // @synthesize failedToFetchConversionDataEventsNumber=_failedToFetchConversionDataEventsNumber;
@property(readonly, nonatomic) long long invalidConversionDataEventsNumber; // @synthesize invalidConversionDataEventsNumber=_invalidConversionDataEventsNumber;
@property(readonly, nonatomic) long long validConversionDataEventsFromJSNumber; // @synthesize validConversionDataEventsFromJSNumber=_validConversionDataEventsFromJSNumber;
@property(readonly, nonatomic) long long validConversionDataEventsNumber; // @synthesize validConversionDataEventsNumber=_validConversionDataEventsNumber;
@property(readonly, nonatomic) long long invalidDataEventsNumber; // @synthesize invalidDataEventsNumber=_invalidDataEventsNumber;
@property(readonly, nonatomic) long long totalEventsNumber; // @synthesize totalEventsNumber=_totalEventsNumber;
@property(readonly, copy, nonatomic) NSString *pcmCampaignID; // @synthesize pcmCampaignID=_pcmCampaignID;
@property(readonly, copy, nonatomic) NSString *pcmAdDestination; // @synthesize pcmAdDestination=_pcmAdDestination;
- (id)initWithPcmAdDestination:(id)arg1 pcmCampaignID:(id)arg2 totalEventsNumber:(long long)arg3 invalidDataEventsNumber:(long long)arg4 validConversionDataEventsNumber:(long long)arg5 validConversionDataEventsFromJSNumber:(long long)arg6 invalidConversionDataEventsNumber:(long long)arg7 failedToFetchConversionDataEventsNumber:(long long)arg8 receivedConversionDataBeforeCampaignDataEventsNumber:(long long)arg9 ccpaRestrictedEventsNumber:(long long)arg10 sentConversionsNumber:(long long)arg11 successfulConversionSendingsNumber:(long long)arg12 failedConversionSendingsNumber:(long long)arg13 initializationJSEventsNumber:(long long)arg14 nonceRequestEventsNumber:(long long)arg15 invalidNonceEventsNumber:(long long)arg16 receivedPixelDataBeforeNonceIsSetEventsNumber:(long long)arg17 receivedJSMessageWithoutCallbackIDEventsNumber:(long long)arg18 nonceSendingFailedEventsNumber:(long long)arg19 invalidCallbackHandlerNameEventsNumber:(long long)arg20;

@end
