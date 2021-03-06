//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface IGShoppingTagsListPerformanceLogger : NSObject
{
    NSMapTable *_qplMarkerMap;
    NSString *_merchantId;
    NSString *_containerModule;
    NSString *_priorModule;
    _Bool _isCheckoutEnabled;
}

- (void).cxx_destruct;
- (void)_endQPLMarkerWithMarkerId:(id)arg1 actionId:(short)arg2;
- (void)_beginQPLMarkerWithMarkerId:(id)arg1;
- (void)markCancelled;
- (void)markLoadSucceeded;
- (void)markLoadFailure;
- (void)markLoadBegin;
- (void)markTTISuccess;
- (void)markTTIBegin;
- (id)initWithMerchantId:(id)arg1 containerModule:(id)arg2 priorModule:(id)arg3 isCheckoutEnabled:(_Bool)arg4;

@end

