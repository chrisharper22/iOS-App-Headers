//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGRoomsTabWatchTogetherCellSectionControllerDelegate-Protocol.h"
#import "IGWatchTogetherScrollListener-Protocol.h"

@class IGListAdapter, IGRoomsTabWatchTogetherUnitModel, IGUserSession, IGVideoCallRoomLogger, NSArray, NSString;

@interface IGRoomsTabWatchTogetherUnitSectionController : IGListBindingSingleSectionController <IGListAdapterDataSource, IGListAdapterDelegate, IGWatchTogetherScrollListener, IGRoomsTabWatchTogetherCellSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    NSArray *_coWatchItems;
    IGVideoCallRoomLogger *_roomsLogger;
    IGRoomsTabWatchTogetherUnitModel *_model;
}

- (void).cxx_destruct;
- (void)roomTabWatchTogetherCellSectionController:(id)arg1 didTapCellWithContentId:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)moreWatchTogetherItemsFetched:(id)arg1;
- (void)reachedEndOfWatchTogetherList;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)didUpdateToObject:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
