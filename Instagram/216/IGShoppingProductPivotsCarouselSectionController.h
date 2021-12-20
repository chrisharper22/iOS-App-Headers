//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGSaveStatusListener-Protocol.h"
#import "IGShoppingGenericProductTileSectionControllerDelegate-Protocol.h"
#import "IGShoppingProductPivotsCellDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGFeedPreviewHandler, IGListAdapter, IGSessionTracker, IGShoppingNavigationAnalyticsContext, IGShoppingProductPivotsViewModel, IGUserSession, IGViewController, NSString;
@protocol IGPivotControllerDelegate, IGShoppingProductPivotsCarouselLoggingProviderType;

@interface IGShoppingProductPivotsCarouselSectionController : IGListSectionController <IGListAdapterDataSource, IGSaveStatusListener, IGShoppingProductPivotsCellDelegate, IGShoppingGenericProductTileSectionControllerDelegate, UIScrollViewDelegate>
{
    IGUserSession *_userSession;
    IGViewController *_previewViewController;
    IGFeedPreviewHandler *_previewHandler;
    IGShoppingNavigationAnalyticsContext *_navigationContext;
    id <IGShoppingProductPivotsCarouselLoggingProviderType> _loggingProvider;
    IGListAdapter *_listAdapter;
    IGShoppingProductPivotsViewModel *_viewModel;
    struct IGGridLayoutConfiguration _productCellLayoutConfig;
    id <IGPivotControllerDelegate> _delegate;
    IGSessionTracker *_shoppingSessionTracker;
    NSString *_shopsFirstEntryPoint;
    _Bool _didInteractWithCarousel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool didInteractWithCarousel; // @synthesize didInteractWithCarousel=_didInteractWithCarousel;
- (void)pivotsCellDidTapDismissButton:(id)arg1;
- (void)pivotsCell:(id)arg1 didTapActionButtonWithButtonTitle:(id)arg2;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)genericProductTileSectionController:(id)arg1 didTapDismissForProductItemPk:(id)arg2;
- (_Bool)genericProductTileSectionController:(id)arg1 containsLastSavedProductItemPk:(id)arg2;
- (void)genericProductTileSectionController:(id)arg1 willNavigateToPDPForProductItemPk:(id)arg2 merchantId:(id)arg3;
- (void)genericProductTileSectionController:(id)arg1 didUpdateGenericProductItem:(id)arg2 withUpdatedSaveStatus:(_Bool)arg3 displayedMediaId:(id)arg4 successHandler:(CDUnknownBlockType)arg5;
- (void)scrollViewDidScroll:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 previewViewController:(id)arg2 loggingProvider:(id)arg3 navigationAnalyticsContext:(id)arg4 shoppingSessionTracker:(id)arg5 shopsFirstEntryPoint:(id)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

