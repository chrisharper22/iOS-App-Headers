//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFeedSectionPlaceholderProviding-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGShoppingGenericProductTileSectionControllerDelegate-Protocol.h"
#import "IGShoppingModuleHeaderCellDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGListAdapter, IGMedia, IGSessionTracker, IGShoppingNavigationAnalyticsContext, IGShoppingProductCarouselItemConfig, IGShoppingProductCarouselViewModel, IGSponsoredSupportConfiguration, IGUserSession, NSString, UICollectionViewFlowLayout;
@protocol IGShoppingProductCarouselLoggingProviderType, IGShoppingProductCarouselSectionControllerDelegate;

@interface IGShoppingProductCarouselSectionController : IGListSectionController <IGListAdapterDataSource, IGShoppingModuleHeaderCellDelegate, IGShoppingGenericProductTileSectionControllerDelegate, UIScrollViewDelegate, IGFeedSectionPlaceholderProviding>
{
    IGUserSession *_userSession;
    IGShoppingProductCarouselItemConfig *_itemConfig;
    _Bool _preventCollectionViewContainerReuse;
    IGShoppingProductCarouselViewModel *_viewModel;
    UICollectionViewFlowLayout *_collectionViewLayout;
    struct CGPoint _restorableContentOffset;
    id <IGShoppingProductCarouselLoggingProviderType> _loggingProvider;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    IGMedia *_associatedFeedItemForInsights;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGSessionTracker *_shoppingSessionTracker;
    id <IGShoppingProductCarouselSectionControllerDelegate> _delegate;
    IGListAdapter *_listAdapter;
}

+ (id)placeholderSpecForObject:(id)arg1 withContext:(id)arg2;
+ (id)defaultPlaceholderSpecWithContext:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(nonatomic) __weak id <IGShoppingProductCarouselSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_viewModelForProductItem:(id)arg1 index:(long long)arg2;
- (void)genericProductTileSectionController:(id)arg1 didTapDismissForProductItemPk:(id)arg2;
- (_Bool)genericProductTileSectionController:(id)arg1 containsLastSavedProductItemPk:(id)arg2;
- (void)genericProductTileSectionController:(id)arg1 willNavigateToPDPForProductItemPk:(id)arg2 merchantId:(id)arg3;
- (void)genericProductTileSectionController:(id)arg1 didUpdateGenericProductItem:(id)arg2 withUpdatedSaveStatus:(_Bool)arg3 displayedMediaId:(id)arg4 successHandler:(CDUnknownBlockType)arg5;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)shoppingModuleHeaderCellDidTapSubtitleText:(id)arg1;
- (void)shoppingModuleHeaderCellDidTapActionButton:(id)arg1;
- (void)_attemptRestoreContentOffset;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 loggingProvider:(id)arg2 itemConfig:(id)arg3 shoppingSessionTracker:(id)arg4 preventCollectionViewContainerReuse:(_Bool)arg5 associatedFeedItemForInsights:(id)arg6 sponsoredSupportConfiguration:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

