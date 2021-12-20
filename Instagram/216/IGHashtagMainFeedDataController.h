//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGHashtagNetworkerDelegate-Protocol.h"
#import "IGHashtagProductPivotsFetcherDelegate-Protocol.h"

@class IGDiscoveryGridDataValidationBehavior, IGHashtagPersistentDataStore, IGSessionTracker, IGUserSession, NSMutableDictionary, NSString;
@protocol IGHashtagMainFeedDataControllerDelegate;

@interface IGHashtagMainFeedDataController : NSObject <IGHashtagNetworkerDelegate, IGHashtagProductPivotsFetcherDelegate>
{
    IGUserSession *_userSession;
    id <IGHashtagMainFeedDataControllerDelegate> _delegate;
    IGDiscoveryGridDataValidationBehavior *_validationBehavior;
    NSMutableDictionary *_hashtagFeedTypeToDataControllerMap;
    IGHashtagPersistentDataStore *_persistentDataStore;
    IGSessionTracker *_sessionTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSessionTracker *sessionTracker; // @synthesize sessionTracker=_sessionTracker;
@property(readonly, nonatomic) IGHashtagPersistentDataStore *persistentDataStore; // @synthesize persistentDataStore=_persistentDataStore;
- (id)_createNewSingleDataControllerForHashtagFeedType:(long long)arg1;
- (long long)_fetchStateForNetworkRequestType:(long long)arg1 hashtagFeedType:(long long)arg2;
- (void)hashtagProductPivotsFetcher:(id)arg1 didLoadProductPivots:(id)arg2 hashtagFeedType:(long long)arg3 config:(id)arg4;
- (void)hashtagNetworker:(id)arg1 didFailDataRequest:(id)arg2 networkRequestType:(long long)arg3 config:(id)arg4;
- (void)hashtagNetworker:(id)arg1 didCompleteHeaderEYMFRequestRequest:(id)arg2;
- (void)hashtagNetworker:(id)arg1 didCompleteReelRequest:(id)arg2 config:(id)arg3;
- (void)hashtagNetworker:(id)arg1 didCompleteMainFeedRequest:(id)arg2 config:(id)arg3;
- (void)hashtagNetworker:(id)arg1 didCompleteInfoRequest:(id)arg2 config:(id)arg3;
- (void)hashtagNetworker:(id)arg1 didStartLoadingWithConfig:(id)arg2 networkRequestType:(long long)arg3;
- (id)dataStoreForHashtagFeedType:(long long)arg1;
- (_Bool)headerFetchCompleteForHashtagFeedType:(long long)arg1;
- (long long)mediaFetchStateForHashtagFeedType:(long long)arg1;
- (void)updateDataStore:(id)arg1;
- (void)requestDropdownMenuContent;
- (void)requestProductPivotsWithType:(long long)arg1;
- (_Bool)requestDataWithConfig:(id)arg1;
- (id)initWithUserSession:(id)arg1 hashtagModel:(id)arg2 validationBehavior:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

