//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAdInsertionDelegate-Protocol.h"

@class IGAsyncTask, IGShowreelNativePreloaderWithStore, IGUserSession, NSString;
@protocol IGSundialFeedInjectionHandlerDelegate, IGSundialFeedSource;

@interface IGSundialFeedInsertionHandler : NSObject <IGAdInsertionDelegate>
{
    id <IGSundialFeedSource> _feedNetworkSource;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGShowreelNativePreloaderWithStore *_showreelNativePreloader;
    IGAsyncTask *_loadingMidCardTask;
    _Bool _isAdsSupported;
    id <IGSundialFeedInjectionHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSundialFeedInjectionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isAdsSupported; // @synthesize isAdsSupported=_isAdsSupported;
- (void)optimisticPrefetchMediaForSponsoredItem:(id)arg1;
- (void)adPlatformDidDeliverSponsoredItem:(id)arg1 atAdRequestIndex:(long long)arg2;
- (void)adInsertionHandler:(id)arg1 shouldTryToInsertSponsoredItem:(id)arg2 atInsertionIndex:(long long)arg3 focusedIndex:(long long)arg4 validationResultString:(id)arg5 insertionContext:(id)arg6;
- (void)tryInsertingMidCardsIfNeeded;
- (void)tryInsertingAdsIfNeeded;
- (id)initWithFeedNetworkSource:(id)arg1 userSession:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

