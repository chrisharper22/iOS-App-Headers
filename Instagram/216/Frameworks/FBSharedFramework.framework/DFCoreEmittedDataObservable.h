//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/DFCoreDataObservable.h>

@class DFCoreDataEmitter;
@protocol DFCoreDataSubscription, NSObject;

@interface DFCoreEmittedDataObservable : DFCoreDataObservable
{
    DFCoreDataEmitter *_emitter;
    id <DFCoreDataSubscription> _subscription;
    id <NSObject> _latestData;
    _Bool _hasReceivedData;
    _Bool _refreshIfNeededInProgress;
    struct mutex _stateLock;
}

+ (id)newWithEmitter:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)internalDataObservables;
- (id)latestData;
- (id)_latestDataAndRefreshIfInvalid:(_Bool)arg1;
- (id)observerQueue;
- (void)resume;
- (void)pause;
- (void)onDataAccessed;
- (void)refreshIfNeeded;
- (void)refresh;
- (void)addDataObserver:(id)arg1;
- (void)_superAddDataObserver:(id)arg1;
- (void)receiveData:(id)arg1;
- (void)dealloc;
- (id)initWithEmitter:(id)arg1;

@end

