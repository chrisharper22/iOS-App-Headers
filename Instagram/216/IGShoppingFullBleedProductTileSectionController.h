//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGShoppingGenericProductTileSectionController.h"

#import "IGFeedPreviewableSectionController-Protocol.h"
#import "IGShoppingFullBleedProductTileCellDelegate-Protocol.h"
#import "IGShoppingFullBleedProductTileSectionControllerTapDelegate-Protocol.h"

@class IGShoppingFullBleedProductTileViewModel, IGShoppingHomeTileVideoManager, IGUserSession, NSString;
@protocol IGShoppingFullBleedProductTileSectionControllerTapDelegate, IGShoppingGenericProductTileSectionControllerDelegate, IGShoppingProductTileLoggingProviderType;

@interface IGShoppingFullBleedProductTileSectionController : IGShoppingGenericProductTileSectionController <IGShoppingFullBleedProductTileSectionControllerTapDelegate, IGShoppingFullBleedProductTileCellDelegate, IGFeedPreviewableSectionController>
{
    IGUserSession *_userSession;
    struct IGGridLayoutConfiguration _layoutConfig;
    IGShoppingFullBleedProductTileViewModel *_viewModel;
    long long _entryPoint;
    long long _navigationSource;
    id <IGShoppingProductTileLoggingProviderType> _loggingProvider;
    IGShoppingHomeTileVideoManager *_videoManager;
    id <IGShoppingFullBleedProductTileSectionControllerTapDelegate> _tapDelegate;
    id <IGShoppingGenericProductTileSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingGenericProductTileSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGShoppingFullBleedProductTileSectionControllerTapDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (id)displayedCoverMedia;
- (id)navigationAnalyticsContext;
- (id)transitionZoomView;
- (id)_pdpPresentationContextForViewModel:(id)arg1;
- (id)_productTapLoggingExtras;
- (id)sectionIdentifier;
- (void)navigateToPDP;
- (id)_consumptionLoggingInfo;
- (void)presentFeedPreviewableItem;
- (id)_visibleCell;
- (id)_viewpointActionsForCell:(id)arg1 atIndex:(long long)arg2;
- (double)_currentScrollDepth;
- (void)_handleProductTileTap;
- (void)fullBleedProductTileSectionController:(id)arg1 didTapViewModel:(id)arg2;
- (void)fullBleedProductTileCell:(id)arg1 didFailToLoadImageView:(id)arg2 error:(id)arg3 networkRequestSummary:(id)arg4;
- (void)fullBleedProductTileCell:(id)arg1 didLoadImageView:(id)arg2 source:(id)arg3 networkRequestSummary:(id)arg4;
- (long long)vp_level;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 layoutConfig:(struct IGGridLayoutConfiguration)arg2 entryPoint:(long long)arg3 navigationSource:(long long)arg4 loggingProvider:(id)arg5 playbackCoordinator:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

