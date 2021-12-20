//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGraphQLService, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGInAppPurchasePurchaseVerificationMutator : NSObject
{
    NSString *_userPk;
    IGGraphQLService *_graphQLService;
    id <IGAnalyticsEventLoggingProtocol> _structuredLogger;
    _Bool _isIAPDebuggingEnabled;
    NSString *_containerModule;
    NSString *_mediaID;
    NSString *_productType;
    NSString *_creatorID;
}

- (void).cxx_destruct;
- (void)_addRequestToDebuggerForUserId:(id)arg1 externalTransactionId:(id)arg2 transactionState:(id)arg3 queryId:(id)arg4;
- (void)_logTransactionAddedToPurchaseVerificationDataWithDeveloperPayload:(id)arg1 transaction:(id)arg2;
- (void)verifyPurchasesForTransactionsViewModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)configureLoggerMetadataWithContainerModule:(id)arg1 mediaID:(id)arg2 productType:(id)arg3 creatorID:(id)arg4;
- (id)initWithUserPk:(id)arg1 graphQLService:(id)arg2 structuredLogger:(id)arg3 isIAPDebuggingEnabled:(_Bool)arg4;

@end
