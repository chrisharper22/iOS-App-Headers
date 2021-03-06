//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGFilteredFeedNetworkSourceControllerType-Protocol.h"

@class IGFeedNetworkSource, IGSessionTracker, IGUserSession, NSString;
@protocol IGFeedFilterType, IGFilteredFeedNetworkSourceControllerDelegate;

@interface IGFilteredFeedSimpleNetworkSourceController : NSObject <IGFeedNetworkSourceDelegate, IGFilteredFeedNetworkSourceControllerType>
{
    IGFeedNetworkSource *_networkSource;
    id <IGFeedFilterType> _filter;
    IGUserSession *_userSession;
    NSString *_module;
    IGSessionTracker *_sessionTracker;
    id <IGFilteredFeedNetworkSourceControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFilteredFeedNetworkSourceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didStartLoadingWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (id)_requestParameters;
- (void)_setupNetworkSourceWithItems:(id)arg1 nextMaxID:(id)arg2;
- (_Bool)isReloading;
- (id)nextMaxID;
- (void)setFilter:(id)arg1 items:(id)arg2 nextMaxID:(id)arg3;
- (id)storyTrayDataSource;
- (id)sessionTracker;
- (_Bool)loadMore;
- (_Bool)reloadWithReason:(long long)arg1;
- (id)allItems;
- (id)initWithUserSession:(id)arg1 module:(id)arg2 sessionTracker:(id)arg3 filter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

