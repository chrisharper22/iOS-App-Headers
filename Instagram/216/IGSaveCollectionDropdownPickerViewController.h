//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGSaveCollectionDropdownPickerSectionControllerDelegate-Protocol.h"
#import "IGSavedMediaCollectionsListListener-Protocol.h"

@class IGFeedStarterKit, IGSavedMediaCollection, IGUserSession, NSString;
@protocol IGSaveCollectionDropdownPickerDelegate;

@interface IGSaveCollectionDropdownPickerViewController : IGViewController <IGListAdapterDataSource, IGSavedMediaCollectionsListListener, IGSaveCollectionDropdownPickerSectionControllerDelegate, IGFeedScrollViewListener>
{
    IGUserSession *_userSession;
    IGFeedStarterKit *_feedStarterKit;
    IGSavedMediaCollection *_allSavedCollection;
    id <IGSaveCollectionDropdownPickerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSaveCollectionDropdownPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)saveCollectionDropdownSectionControllerDidTap:(id)arg1;
- (void)savedMediaCollectionsDidFailToLoad:(id)arg1;
- (void)savedMediaCollectionsDidLoadCollections:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_handleAllSavedResponse:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

