//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGListDisplayDelegate-Protocol.h"
#import "IGQuestionStickerResponseBrowserViewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGQuestionAnswerStickerResponsesModel, IGTooltipView, IGUserSession, NSString;
@protocol IGQuestionAnswerStickerResponsesSectionControllerDelegate, IGStoryItemType;

@interface IGQuestionAnswerStickerResponsesSectionController : IGListSectionController <UICollectionViewDelegate, UICollectionViewDataSource, IGQuestionStickerResponseBrowserViewControllerDelegate, IGListDisplayDelegate>
{
    IGQuestionAnswerStickerResponsesModel *_item;
    IGUserSession *_userSession;
    IGTooltipView *_nuxTooltip;
    id <IGStoryItemType> _storyItem;
    NSString *_reelId;
    id <IGQuestionAnswerStickerResponsesSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGQuestionAnswerStickerResponsesSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didDeleteResponse:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)questionStickerResponseBrowser:(id)arg1 didScrollToResponseAtIndex:(long long)arg2;
- (void)questionStickerResponseBrowserDidTapSeeAllButton:(id)arg1;
- (void)questionStickerResponseBrowser:(id)arg1 didDeleteResponse:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 storyItem:(id)arg2 reelId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

