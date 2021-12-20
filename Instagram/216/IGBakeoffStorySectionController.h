//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGBakeoffSectionControllerType-Protocol.h"
#import "IGBakeoffStoryPairSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGBakeoffItemViewedStateInfoCell, IGBakeoffStoryItemPair, IGLabelItemViewModel, IGListAdapter, IGUserSession, NSMutableArray, NSString, UICollectionView;
@protocol IGBakeoffSectionControllerDelegate, IGStoryViewerLandscapeAdLayoutListener;

@interface IGBakeoffStorySectionController : IGListSectionController <IGBakeoffStoryPairSectionControllerDelegate, IGListAdapterDataSource, IGBakeoffSectionControllerType>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGBakeoffStoryItemPair *_pair;
    IGBakeoffItemViewedStateInfoCell *_viewedStateInfoCell;
    NSMutableArray *_seenIndexes;
    NSString *_module;
    id <IGStoryViewerLandscapeAdLayoutListener> _bakeoffLogger;
    IGLabelItemViewModel *_promptViewModel;
    id <IGBakeoffSectionControllerDelegate> _delegate;
    NSString *_surveySessionId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *surveySessionId; // @synthesize surveySessionId=_surveySessionId;
@property(nonatomic) __weak id <IGBakeoffSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bakeoffStoryPairSectionControllerDidMarkStoryAsSeenWithIndex:(long long)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)seenIndexes;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)didUpdateToObject:(id)arg1;
- (void)_setupCollectionViewAndAdapter;
- (id)initWithUserSession:(id)arg1 module:(id)arg2 bakeoffLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

