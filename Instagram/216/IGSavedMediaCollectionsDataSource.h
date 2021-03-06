//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGMediaUpdatedForAllListener-Protocol.h"
#import "IGNetworkSourceDelegate-Protocol.h"
#import "IGSavedItemStatusListener-Protocol.h"
#import "IGSavedMediaCollectionListener-Protocol.h"

@class IGEmptyFeedView, IGNetworkSource, IGUserSession, NSArray, NSString;
@protocol IGSavedMediaCollectionsAddPlaceholderDelegate, IGSavedMediaCollectionsDataSourceConfigurationType, IGSavedMediaCollectionsDataSourceDelegate, IGSavedMediaCollectionsThumbnailSectionControllerDelegate;

@interface IGSavedMediaCollectionsDataSource : NSObject <IGMediaUpdatedForAllListener, IGSavedItemStatusListener, IGSavedMediaCollectionListener, IGListAdapterDataSource, IGNetworkSourceDelegate>
{
    NSString *_module;
    IGUserSession *_userSession;
    IGNetworkSource *_networkSource;
    IGEmptyFeedView *_emptyView;
    id <IGSavedMediaCollectionsDataSourceConfigurationType> _configuration;
    id <IGSavedMediaCollectionsThumbnailSectionControllerDelegate> _selectionDelegate;
    id <IGSavedMediaCollectionsAddPlaceholderDelegate> _addDelegate;
    id <IGSavedMediaCollectionsDataSourceDelegate> _dataSourceDelegate;
    _Bool _enableAddPlaceholder;
    NSArray *_collections;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *collections; // @synthesize collections=_collections;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3 requestTag:(id)arg4;
- (void)saveStatusChangedForItem:(id)arg1 withEvent:(long long)arg2 changedCollectionIds:(id)arg3;
- (void)mediaWasUpdated:(id)arg1 withChange:(long long)arg2;
- (void)_collectionUpdated:(id)arg1;
- (void)_collectionDeleted:(id)arg1;
- (void)_collectionCreated:(id)arg1;
- (void)savedMediaCollectionStatusChanged:(long long)arg1 collection:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)hasResults;
- (void)fetchMoreIfAvailable;
- (void)fetch;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1 configuration:(id)arg2 selectionDelegate:(id)arg3 addDelegate:(id)arg4 dataSourceDelegate:(id)arg5 enableAddPlaceholder:(_Bool)arg6 module:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

