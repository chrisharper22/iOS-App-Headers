//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGLiveViewerUserPayLoggerHelper : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    NSString *_mediaID;
    NSString *_productType;
}

- (void).cxx_destruct;
- (void)logViewerPaymentErrorDialogShown;
- (void)logBadgeEntitlementToViewer:(long long)arg1 recognitionType:(unsigned long long)arg2;
- (void)logViewerExitedLive;
- (void)logBadgeCountUpdated:(long long)arg1;
- (void)configureWithBroadcast:(id)arg1 inAppPurchaseStoreManager:(id)arg2 userSession:(id)arg3 productType:(id)arg4 creatorID:(id)arg5;

@end

