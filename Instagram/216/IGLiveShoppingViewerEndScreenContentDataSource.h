//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGLiveBroadcast, IGLiveShoppingViewerEndScreenContentDataModel, IGShoppingTagsListPerformanceLogger, IGStatefulNetworker, IGStatefulNetworkerFetchState, IGUserSession;
@protocol IGLiveShoppingViewerEndScreenContentDataSourceAnnouncer;

@interface IGLiveShoppingViewerEndScreenContentDataSource : NSObject
{
    IGUserSession *_userSession;
    IGStatefulNetworker *_networker;
    id <IGLiveShoppingViewerEndScreenContentDataSourceAnnouncer> _announcer;
    IGShoppingTagsListPerformanceLogger *_perfLogger;
    IGLiveShoppingViewerEndScreenContentDataModel *_dataModel;
    IGLiveBroadcast *_broadcast;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGLiveBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(readonly, nonatomic) IGLiveShoppingViewerEndScreenContentDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) IGShoppingTagsListPerformanceLogger *perfLogger; // @synthesize perfLogger=_perfLogger;
- (void)_networkFetchStateUpdated:(id)arg1;
- (void)_networkResponseLoaded:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) IGStatefulNetworkerFetchState *fetchState;
- (_Bool)fetchContentIfNeeded;
- (id)initWithUserSession:(id)arg1 broadcast:(id)arg2;

@end

