//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPendingActionStore, IGUserSession;

@interface IGPendingActionManager : NSObject
{
    IGUserSession *_userSession;
    IGPendingActionStore *_pendingActionStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGPendingActionStore *pendingActionStore; // @synthesize pendingActionStore=_pendingActionStore;
- (void)_handleClearingDiskCache;
- (void)_retryActions;
- (void)_handleUnarchiving;
- (void)_handleArchiving;
- (void)_onNetworkReachibilityChanged:(id)arg1;
- (void)_onAppForegrounded:(id)arg1;
- (void)_onAppBackgrounded:(id)arg1;
- (void)setupPendingActionStoresAndListeners;
- (id)initWithUserSession:(id)arg1;

@end
