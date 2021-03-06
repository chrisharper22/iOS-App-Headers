//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DFCoreDataEmitter : NSObject
{
    NSMutableArray *_subscriptions;
    struct mutex _subscriptionsLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)subscriberQueue;
- (void)onDataAccessed;
- (_Bool)isDataInvalid:(id)arg1;
- (_Bool)shouldRefreshData:(id)arg1;
- (id)initialData;
- (void)didRefresh;
- (void)didStop;
- (void)didStart;
- (void)refresh;
- (void)emitResult:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (id)subscribe:(CDUnknownBlockType)arg1;
- (id)init;

@end

