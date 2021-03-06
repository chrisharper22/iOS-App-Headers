//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGHScrollCollectionViewCellDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGSuggestionsUnitActionCardSectionControllerDelegate-Protocol.h"
#import "IGSuggestionsUnitUserCardSectionControllerDelegate-Protocol.h"
#import "IGViewAppearListener-Protocol.h"
#import "IGViewDisappearListener-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGHScrollAYMFModel, IGListAdapter, IGSuggestedUsersTrackingManager, IGSuggestionsUnitLogger, IGSuggestionsUnitViewModel, IGUserSession, NSString;

@interface IGSuggestionsUnitSectionController : IGListSectionController <IGListAdapterDataSource, IGListAdapterDelegate, IGSuggestionsUnitUserCardSectionControllerDelegate, IGSuggestionsUnitActionCardSectionControllerDelegate, UIScrollViewDelegate, IGViewAppearListener, IGViewDisappearListener, IGHScrollCollectionViewCellDelegate>
{
    IGUserSession *_userSession;
    IGSuggestionsUnitViewModel *_viewModel;
    IGListAdapter *_listAdapter;
    NSString *_module;
    IGSuggestionsUnitLogger *_logger;
    IGHScrollAYMFModel *_aymfModel;
    IGSuggestedUsersTrackingManager *_trackingManager;
}

- (void).cxx_destruct;
- (double)_unselectedItemWidth;
- (double)_selectedItemWidth;
- (void)_dismissSuggestedModel:(id)arg1;
- (void)_autoScrollToUserAtIndexPath:(id)arg1 fromUserCardSection:(id)arg2;
- (void)hScrollCollectionViewCell:(id)arg1 didTapPageControl:(unsigned long long)arg2;
- (void)hScrollCollectionViewCell:(id)arg1 didChangeVisiblePercentage:(double)arg2;
- (void)_onAppResumed:(id)arg1;
- (void)_onAppBackgrounded:(id)arg1;
- (void)viewController:(id)arg1 viewDidDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewDidAppearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillAppearAnimated:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)actionCardSectionController:(id)arg1 didSelectActionCardType:(unsigned long long)arg2;
- (void)actionCardSectionController:(id)arg1 didDismissActionCardModel:(id)arg2;
- (void)userCardSectionControllerDidSelectCell:(id)arg1 suggestionsUser:(id)arg2;
- (void)userCardSectionControllerDidTapFollowButton:(id)arg1 suggestionsUser:(id)arg2 userAction:(long long)arg3;
- (void)userCardSectionController:(id)arg1 didDismissSuggestedUser:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 module:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

