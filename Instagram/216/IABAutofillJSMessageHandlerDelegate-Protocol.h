//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IABAutofillData, IABAutofillDataStoreState, IABPaymentAutofillDataStoreState, NSArray, NSDictionary, NSString, NSURL;

@protocol IABAutofillJSMessageHandlerDelegate <NSObject>
- (_Bool)jsMessageHandlerDidRequestShouldShowPaymentAutofillPrompt:(NSArray *)arg1;
- (_Bool)jsMessageHandlerDidRequestIsContactAutofillPreviewDataEmpty:(unsigned long long)arg1;
- (_Bool)jsMessageHandlerDidRequestIsAutofillSoftkeyboardEnabled;
- (void)jsMessageHandlerDidRequestHidePaymentAutofill;
- (void)jsMessageHandlerDidRequestHideContactAutofill;
- (_Bool)jsMessageHandlerDidRequestShouldAvoidiFrameCheckForOriginHost:(NSString *)arg1 messageName:(NSString *)arg2 messageParams:(NSDictionary *)arg3;
- (void)jsMessageHandlerDidRequestSetEnhancedRegexPaymentField:(NSArray *)arg1;
- (NSDictionary *)jsMessageHandlerDidRequestPaymentFieldPublicKeyMap;
- (void)jsMessageHandlerDidRequestSetPaymentFieldPublicKey:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)jsMessageHandlerDidRequestClearPaymentSaveCardData;
- (void)jsMessageHandlerDidRequestClearPaymentFieldsKeyMap;
- (void)jsMessageHandlerDidRequestSetPaymentField:(NSString *)arg1 forKey:(NSString *)arg2;
- (_Bool)jsMessageHandlerDidRequestContactOptOut;
- (void)jsMessageHandlerDidRequestLogging:(unsigned long long)arg1;
- (void)jsMessageHandlerDidRequestSavingPendingAutofillData;
- (void)jsMessageHandlerDidProvideNewRawAutofillData:(IABAutofillData *)arg1;
- (void)jsMessageHandlerDidRequestShowingPaymentBottomSheetWithType:(unsigned long long)arg1;
- (void)jsMessageHandlerDidRequestShowingBottomSheetWithType:(unsigned long long)arg1;
- (_Bool)jsMessageHandlerDidRequestHasPaymentCards;
- (unsigned long long)jsMessageHandlerDidRequestPaymentAutofillSaveActionType;
- (void)jsMessageHandlerDidRequestLogPaymentFormCompletion;
- (_Bool)jsMessageHandlerDidRequestShouldHandlePaymentRequestWithOriginHost:(NSString *)arg1;
- (_Bool)jsMessageHandlerDidRequestHasAcceptedConsent;
- (_Bool)jsMessageHandlerDidRequestShouldBlockJSCallFromOptedOutDomainWithURL:(NSURL *)arg1;
- (_Bool)jsMessageHandlerDidRequestIsPaymentEnabled;
- (IABAutofillData *)jsMessageHandlerDidRequestCurrentAutofillData;
- (IABPaymentAutofillDataStoreState *)jsMessageHandlerDidRequestPaymentDataStoreStateForOrignHost:(NSString *)arg1;
- (IABAutofillDataStoreState *)jsMessageHandlerDidRequestDataStoreStateForURL:(NSURL *)arg1;
@end

