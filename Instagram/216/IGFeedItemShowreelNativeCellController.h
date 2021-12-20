//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGFeedItemCellController.h>

#import "IGCreativeTransformationsRenderingDelegate-Protocol.h"
#import "IGFeedItemShowreelNativeCellOverlayViewDelegate-Protocol.h"

@class IGMedia, IGShowreelNativeController, IGShowreelNativePreloaderWithStore, IGSponsoredSupportConfiguration, IGUserSession, NSString;
@protocol IGFeedItemShowreelNativeCellControllerDelegate, IGZoomControllerZoomingDelegate;

@interface IGFeedItemShowreelNativeCellController : IGFeedItemCellController <IGFeedItemShowreelNativeCellOverlayViewDelegate, IGCreativeTransformationsRenderingDelegate>
{
    IGShowreelNativePreloaderWithStore *_showreelNativePreloader;
    IGUserSession *_userSession;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
    id <IGFeedItemShowreelNativeCellControllerDelegate> _delegate;
    struct IGFeedItemShowreelNativePlaybackConfig _playbackConfig;
    _Bool _prioritizeShowreelNativePreload;
    IGShowreelNativeController *_snController;
}

+ (Class)collectionViewCellClass;
- (void).cxx_destruct;
@property(retain, nonatomic) IGShowreelNativeController *snController; // @synthesize snController=_snController;
- (void)renderingControllerDidStartPlayback:(id)arg1;
- (void)renderingControllerHasLoopedIn:(id)arg1;
- (void)renderingControllerIsReadyToPlayback:(id)arg1;
- (void)renderingControllerShouldFallbackRendering:(id)arg1;
- (void)renderingController:(id)arg1 didTapToOpenMultiDocumentWithName:(id)arg2 closeMultiDocumentBlock:(CDUnknownBlockType)arg3;
- (void)renderingController:(id)arg1 didTapNonTouchableRegion:(id)arg2;
- (void)renderingController:(id)arg1 didTapTouchableRegionAtPoint:(struct CGPoint)arg2 type:(id)arg3 value:(id)arg4 previouslyTappedValue:(id)arg5;
- (void)feedDidDoubleTapToLike:(id)arg1 locationInfo:(id)arg2;
- (void)_preloadMedia:(id)arg1;
- (void)didEndDisplayingCell:(id)arg1;
- (void)willDisplayCell:(id)arg1;
- (void)_updatePlaybackForVisibility:(double)arg1;
- (void)_configureCellViewPoint:(id)arg1;
- (void)configureCell:(id)arg1;
- (id)cellWithCollectionContext:(id)arg1 sectionController:(id)arg2 index:(long long)arg3;
- (struct CGSize)sizeForWidth:(double)arg1;
@property(readonly, nonatomic) IGMedia *media;
- (id)initWithSectionContext:(id)arg1 feedItemSectionContext:(id)arg2 sponsoredSupportConfiguration:(id)arg3 delegate:(id)arg4 zoomingDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

