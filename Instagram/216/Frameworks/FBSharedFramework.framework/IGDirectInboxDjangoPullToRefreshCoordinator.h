//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectInboxPullToRefreshCoordinator-Protocol.h>
#import <FBSharedFramework/IGDirectInboxServiceListener-Protocol.h>

@class IGDirectInboxService, NSString;
@protocol IGDirectInboxPullToRefreshCoordinatorDelegate;

@interface IGDirectInboxDjangoPullToRefreshCoordinator : NSObject <IGDirectInboxServiceListener, IGDirectInboxPullToRefreshCoordinator>
{
    IGDirectInboxService *_inboxService;
    NSString *_inboxRequestUUID;
    id <IGDirectInboxPullToRefreshCoordinatorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectInboxPullToRefreshCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_executeInboxServiceRequestWithParams:(id)arg1;
- (void)directInboxServiceFetchFailedWithFetchInput:(id)arg1 httpStatusCode:(long long)arg2 error:(id)arg3 willAutoRetry:(_Bool)arg4;
- (void)directInboxServiceFetchSucceededWithFetchInput:(id)arg1 fetchOutput:(id)arg2;
- (_Bool)_triggeredFromPullToRefreshWithFetchInput:(id)arg1;
- (void)executePullToRefreshWithParams:(id)arg1;
- (_Bool)canPullToRefresh;
- (id)initWithInboxService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

