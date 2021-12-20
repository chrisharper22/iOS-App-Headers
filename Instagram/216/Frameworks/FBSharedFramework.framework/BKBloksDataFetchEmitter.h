//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/DFCoreDataEmitter.h>

@class BKObjectSet, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BKBloksDataFetchEmitter : DFCoreDataEmitter
{
    BKObjectSet *_objectSet;
    unsigned long long _cacheTTL;
    NSString *_appID;
    NSDictionary *_params;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id _fetcher;
    unsigned long long _fetchType;
}

+ (id)newWithObjectSet:(id)arg1 appID:(id)arg2 params:(id)arg3 cacheTTL:(unsigned long long)arg4 fetchType:(unsigned long long)arg5;
- (void).cxx_destruct;
- (id)subscriberQueue;
- (void)onDataAccessed;
- (_Bool)shouldRefreshData:(id)arg1;
- (_Bool)isDataInvalid:(id)arg1;
- (id)initialData;
- (void)didRefresh;
- (void)didStop;
- (void)_handleError:(id)arg1;
- (void)_handleSuccessWithResponse:(id)arg1 status:(id)arg2;
- (void)didStart;

@end
