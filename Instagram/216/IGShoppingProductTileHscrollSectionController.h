//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFeedSectionPlaceholderProviding-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListSupplementaryViewSource-Protocol.h"
#import "IGShoppingGenericProductTileSectionControllerDelegate-Protocol.h"
#import "IGShoppingModuleHeaderCellDelegate-Protocol.h"

@class IGListAdapter, IGSessionTracker, IGShoppingNavigationAnalyticsContext, IGShoppingProductTileHScrollLogger, IGShoppingProductTileHscrollViewModel, IGUserSession, NSString;
@protocol IGShoppingProductTileHscrollSectionControllerDelegate;

@interface IGShoppingProductTileHscrollSectionController : IGListSectionController <IGListAdapterDataSource, IGListSupplementaryViewSource, IGShoppingGenericProductTileSectionControllerDelegate, IGShoppingModuleHeaderCellDelegate, IGFeedSectionPlaceholderProviding>
{
    IGUserSession *_userSession;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    IGShoppingProductTileHScrollLogger *_logger;
    IGSessionTracker *_shoppingSessionTracker;
    struct IGGridLayoutConfiguration _productCellLayoutConfig;
    IGListAdapter *_listAdapter;
    IGShoppingProductTileHscrollViewModel *_viewModel;
    id <IGShoppingProductTileHscrollSectionControllerDelegate> _delegate;
}

+ (id)defaultPlaceholderSpecWithContext:(id)arg1;
+ (id)placeholderSpecForObject:(id)arg1 withContext:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingProductTileHscrollSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_actionForViewModel:(id)arg1;
- (void)genericProductTileSectionController:(id)arg1 didTapDismissForProductItemPk:(id)arg2;
- (_Bool)genericProductTileSectionController:(id)arg1 containsLastSavedProductItemPk:(id)arg2;
- (void)genericProductTileSectionController:(id)arg1 willNavigateToPDPForProductItemPk:(id)arg2 merchantId:(id)arg3;
- (void)genericProductTileSectionController:(id)arg1 didUpdateGenericProductItem:(id)arg2 withUpdatedSaveStatus:(_Bool)arg3 displayedMediaId:(id)arg4 successHandler:(CDUnknownBlockType)arg5;
- (void)shoppingModuleHeaderCellDidTapSubtitleText:(id)arg1;
- (void)shoppingModuleHeaderCellDidTapActionButton:(id)arg1;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 navigationInfo:(id)arg2 shoppingSessionTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

