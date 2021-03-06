//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGGuideItemAttachmentCellDelegate-Protocol.h"
#import "IGGuideItemAttachmentPickerViewControllerDelegate-Protocol.h"
#import "IGGuideItemMediaSectionControllerDelegate-Protocol.h"
#import "IGGuideItemTitleCellDelegate-Protocol.h"
#import "IGGuideTextCellDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListWorkingRangeDelegate-Protocol.h"
#import "IGLocationNetworkerDelegate-Protocol.h"
#import "IGMediaUpdatedListener-Protocol.h"
#import "IGSaveToCollectionsFeedDelegate-Protocol.h"
#import "IGShoppingSaveControllerDelegate-Protocol.h"
#import "IGShoppingSessionTracking-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGFeedVideoCellManager_DEPRECATED, IGGuide, IGGuideLogger, IGListAdapter, IGLocationNetworker, IGSessionTracker, IGShoppingSaveController, IGUserSession, NSArray, NSString;
@protocol IGGuideItemSectionControllerDelegate, IGSubscriptionToken;

@interface IGGuideItemSectionController : IGListGenericSectionController <IGListAdapterDataSource, IGListWorkingRangeDelegate, IGLocationNetworkerDelegate, IGGuideItemAttachmentCellDelegate, IGGuideItemAttachmentPickerViewControllerDelegate, IGGuideItemTitleCellDelegate, IGGuideItemMediaSectionControllerDelegate, IGGuideTextCellDelegate, IGSaveToCollectionsFeedDelegate, IGMediaUpdatedListener, UIScrollViewDelegate, IGShoppingSaveControllerDelegate, IGShoppingSessionTracking>
{
    IGUserSession *_userSession;
    long long _collectionType;
    IGFeedVideoCellManager_DEPRECATED *_videoCellManager;
    IGGuide *_guide;
    NSString *_analyticsModule;
    IGGuideLogger *_logger;
    NSArray *_rowTypes;
    IGLocationNetworker *_locationNetworker;
    NSString *_editedTitle;
    NSString *_editedDetailText;
    IGListAdapter *_carouselListAdapter;
    IGActionableConfirmationToastController *_toastController;
    IGShoppingSaveController *_shoppingSaveController;
    long long _currentMediaItemIndex;
    _Bool _hideNumbers;
    id <IGSubscriptionToken> _locationSubscriptionToken;
    _Bool _editingEnabled;
    IGSessionTracker *_shoppingSessionTracker;
    id <IGGuideItemSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGuideItemSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool editingEnabled; // @synthesize editingEnabled=_editingEnabled;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_rebuildRowTypes;
- (void)locationNetworker:(id)arg1 didFetchLocation:(id)arg2;
- (void)locationNetworker:(id)arg1 didFailRequestWithError:(id)arg2 config:(id)arg3 ofNetworkRequstType:(long long)arg4;
- (void)locationNetworker:(id)arg1 didFetchInfoPageModel:(id)arg2 withConfig:(id)arg3;
- (void)locationNetworker:(id)arg1 didFetchNetworkResponse:(id)arg2 withConfig:(id)arg3;
- (void)locationNetworker:(id)arg1 didCompleteReelRequest:(id)arg2 withConfig:(id)arg3 withDefaultImageURL:(id)arg4;
- (void)shoppingSaveControllerDidUpdateButtonState:(long long)arg1;
- (void)saveCollectionsViewControllerDidDismiss:(id)arg1;
- (void)saveCollectionsViewController:(id)arg1 didUpdateCollection:(id)arg2 withRemoveFromCollection:(_Bool)arg3;
- (void)_setupLocationValueSubscribers;
- (void)mediaWasUpdated:(id)arg1 withChange:(long long)arg2;
- (void)guideItemMediaSectionControllerDidSelectEditSettings:(id)arg1;
- (void)guideItemMediaSectionController:(id)arg1 didSelectRemoveProductFromGuide:(id)arg2;
- (void)guideItemMediaSectionController:(id)arg1 didSelectRemoveMediaFromGuide:(id)arg2;
- (void)guideItemMediaSectionController:(id)arg1 didSelectProductRepresentation:(id)arg2;
- (void)guideItemMediaSectionController:(id)arg1 didSelectFeedItem:(id)arg2;
- (void)guideItemAttachmentPicker:(id)arg1 didSelectAttachment:(id)arg2;
- (void)guideItemAttachmentCellDidLongPressSave:(id)arg1;
- (void)_showAttachmentPickerSheet;
- (void)guideItemAttachmentCellDidTapEdit:(id)arg1;
- (void)_handleDidTapSaveForGuidePlaceInfo:(id)arg1 withinCell:(id)arg2;
- (void)guideItemAttachmentCellDidTapSave:(id)arg1;
- (void)_invalidateLayoutForRowType:(long long)arg1;
- (_Bool)guideItemTitleCell:(id)arg1 shouldChangeText:(id)arg2 inRange:(struct _NSRange)arg3 replacementText:(id)arg4 numberOfLines:(long long)arg5;
- (void)guideItemTitleCellDidEndEditing:(id)arg1;
- (void)guideItemTitleCell:(id)arg1 didUpdateToTitle:(id)arg2;
- (void)_handleMerchantProductMoreOptionsForProduct:(id)arg1;
- (void)_handleEditingMoreOptions;
- (void)guideItemTitleCellDidTapMoreButton:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)guideTextCell:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)guideTextCell:(id)arg1 didTapLink:(id)arg2;
- (void)guideTextCellDidEndEditing:(id)arg1;
- (void)guideTextCell:(id)arg1 textDidChange:(id)arg2;
- (void)_navigateToProduct:(id)arg1;
- (id)_titlePlaceholder;
- (id)_defaultTitle;
- (id)_titleText;
- (id)_mediaItemForSave;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)_sizeForItemWithRowType:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 collectionType:(long long)arg2 videoCellManager:(id)arg3 shoppingSessionTracker:(id)arg4 guide:(id)arg5 analyticsModule:(id)arg6 logger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

