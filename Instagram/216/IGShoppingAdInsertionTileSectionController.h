//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGALLogContextModelProvider-Protocol.h"
#import "IGFeedPreviewableSectionController-Protocol.h"

@class IGFeedItemLogger, IGSessionTracker, IGShoppingAdInsertionTileViewModel, IGSponsoredSupportConfiguration, IGUserSession, NSString;
@protocol IGShoppingAdInsertionTileSectionControllerDelegate, IGShoppingProductTileLoggingProviderType;

@interface IGShoppingAdInsertionTileSectionController : IGListSectionController <IGALLogContextModelProvider, IGFeedPreviewableSectionController>
{
    IGUserSession *_userSession;
    struct IGGridLayoutConfiguration _layoutConfig;
    IGSessionTracker *_shoppingSessionTracker;
    NSString *_analyticsModule;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGFeedItemLogger *_feedItemLogger;
    id <IGShoppingProductTileLoggingProviderType> _shoppingProductTileLoggingProvider;
    long long _entryPoint;
    IGShoppingAdInsertionTileViewModel *_viewModel;
    id <IGShoppingAdInsertionTileSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingAdInsertionTileSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentFeedPreviewableItem;
- (id)trackingModel;
- (void)_setUpViewpointActionsWithCell:(id)arg1;
- (double)_currentScrollDepth;
- (void)_navigateToPDPForItemAtIndex:(long long)arg1;
- (void)_handleTapForItemAtIndex:(long long)arg1;
- (void)_exposeIGShoppingAdInsertionTileCellExperiment;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 layoutConfig:(struct IGGridLayoutConfiguration)arg2 shoppingSessionTracker:(id)arg3 analyticsModule:(id)arg4 sponsoredSupportConfiguration:(id)arg5 feedItemLogger:(id)arg6 shoppingProductTileLoggingProvider:(id)arg7 entryPoint:(long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

