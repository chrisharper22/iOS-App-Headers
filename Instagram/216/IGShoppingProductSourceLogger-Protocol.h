//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGShoppingProductSourceAnalyticsContext, NSArray, NSString;

@protocol IGShoppingProductSourceLogger <NSObject>
@property(readonly, nonatomic) NSString *priorModule;
@property(readonly, nonatomic) NSString *module;
- (void)logSourceCatalogSelectionStart:(unsigned long long)arg1 hasMultipleSourceTypes:(_Bool)arg2 selectedSourceID:(NSString *)arg3 selectedSourceType:(NSString *)arg4 selectedSourceName:(NSString *)arg5;
- (void)logSelectedSource:(IGShoppingProductSourceAnalyticsContext *)arg1;
- (void)logSelectedMerchantID:(NSString *)arg1 name:(NSString *)arg2;
- (void)logLoadFailureWithErrorMessage:(NSString *)arg1 productSourceType:(unsigned long long)arg2;
- (void)logLoadSuccessForProductSourceType:(unsigned long long)arg1 results:(NSArray *)arg2 hasMoreResults:(_Bool)arg3;
- (void)logLoadStartForProductSourceType:(unsigned long long)arg1;
- (void)logSelectionVCOpenedForProductSourceType:(unsigned long long)arg1 hasMultipleSourceTypes:(_Bool)arg2 selectedSourceID:(NSString *)arg3 selectedSourceType:(NSString *)arg4;
@end

