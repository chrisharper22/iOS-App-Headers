//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGMainFeedStoryTrayLoggingContextProvider-Protocol.h"
#import "IGSettingsAdActivityFullscreenTraySectionControllerDelegate-Protocol.h"
#import "IGStoryTraySectionControllerViewerDelegate-Protocol.h"

@class IGListAdapter, IGSettingsAdActivityFullscreenTrayDataSource, IGSettingsAdActivityFullscreenTraySectionController, IGSettingsAdActivityIGTVTrayModel, IGSettingsAdActivityStoryTrayDataSource, IGSettingsAdActivitySundialTrayModel, IGSpinnerLabelViewModel, IGStoryTraySectionController, IGUserSession, NSString, UICollectionView;
@protocol IGSettingsAdActivityTraySectionControllerDelegate;

@interface IGSettingsAdActivityTraySectionController : IGListSectionController <IGMainFeedStoryTrayLoggingContextProvider, IGSettingsAdActivityFullscreenTraySectionControllerDelegate, IGStoryTraySectionControllerViewerDelegate, IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    unsigned long long _trayType;
    IGSpinnerLabelViewModel *_spinner;
    IGSettingsAdActivityStoryTrayDataSource *_storyTrayDataSource;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGStoryTraySectionController *_storyTraySectionController;
    IGSettingsAdActivityFullscreenTraySectionController *_igtvTraySectionController;
    IGSettingsAdActivityIGTVTrayModel *_igtvTrayModel;
    IGSettingsAdActivityFullscreenTrayDataSource *_igtvTrayDataSource;
    IGSettingsAdActivityFullscreenTraySectionController *_sundialTraySectionController;
    IGSettingsAdActivitySundialTrayModel *_sundialTrayModel;
    IGSettingsAdActivityFullscreenTrayDataSource *_sundialTrayDataSource;
    _Bool _hasQueuedUpdate;
    id <IGSettingsAdActivityTraySectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSettingsAdActivityTraySectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)adActivityFullscreenTraySectionControllerScrollViewWillScrollNearEnd:(id)arg1;
- (id)loggingExtras;
- (id)loggingContext;
- (void)storyTraySectionControllerDidShowShimmer:(id)arg1;
- (void)storyTraySectionController:(id)arg1 didPublishHighlightNavigationAction:(long long)arg2;
- (void)storyTraySectionControllerScrollViewWillScrollNearRight:(id)arg1;
- (void)storyTraySectionController:(id)arg1 willShowViewerWithItem:(id)arg2;
- (void)storyTraySectionController:(id)arg1 didDismissViewerWithAddToStoryNUXModel:(id)arg2;
- (void)_loadMoreIfAvailable;
- (void)_setupSpinner;
- (void)_setupCollectionViewAndAdapter;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)updateWithAdItems:(id)arg1;
- (void)updateWithReels:(id)arg1;
- (id)initWithUserSession:(id)arg1 trayType:(unsigned long long)arg2 delegate:(id)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

