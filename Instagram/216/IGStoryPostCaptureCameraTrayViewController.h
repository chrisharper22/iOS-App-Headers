//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAREffectSaveListener-Protocol.h"
#import "IGCameraEffectBottomSheetViewControllerDelegate-Protocol.h"
#import "IGCameraEffectCollectionDataSourceListener-Protocol.h"
#import "IGCameraEffectFooterViewDelegate-Protocol.h"
#import "IGCameraEffectMiniGalleryViewControllerDelegate-Protocol.h"
#import "IGCameraTrayViewControllerDataSource-Protocol.h"
#import "IGCameraTrayViewControllerDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGPostCaptureARControllerEffectListListener-Protocol.h"
#import "IGStoryCameraVariantSelectorViewControllerDelegate-Protocol.h"

@class IGCameraEffectFooterView, IGCameraEffectMiniGalleryDataFetcher, IGCameraEffectMiniGalleryFeedDataProvider, IGCameraEffectMiniGalleryTopicProvider, IGCameraTrayViewController, IGPostCaptureARController, IGStoryCameraVariantSelectorViewController, IGUserSession, NSArray, NSMutableSet, NSString;
@protocol IGCameraEffectCollectionDataSource, IGStoryPostCaptureCameraTrayViewControllerDelegate;

@interface IGStoryPostCaptureCameraTrayViewController : UIViewController <IGCameraTrayViewControllerDelegate, IGCameraTrayViewControllerDataSource, IGPostCaptureARControllerEffectListListener, IGAREffectSaveListener, IGCameraEffectCollectionDataSourceListener, IGCameraEffectFooterViewDelegate, IGCameraEffectMiniGalleryViewControllerDelegate, IGPartialModalSheetListener, IGCameraEffectBottomSheetViewControllerDelegate, IGStoryCameraVariantSelectorViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGPostCaptureARController *_postCaptureARController;
    IGCameraTrayViewController *_cameraTrayViewController;
    IGCameraEffectFooterView *_footerView;
    NSArray *_trayItems;
    NSMutableSet *_loggedImpressionAREffectIDs;
    _Bool _isReels;
    id <IGCameraEffectCollectionDataSource> _dataSource;
    NSString *_loggingSessionID;
    long long _entryPoint;
    long long _surface;
    long long _captureType;
    UIViewController *_minigalleryInteractingViewController;
    struct CGRect _minigalleryCaptureFrame;
    IGStoryCameraVariantSelectorViewController *_variantSelectorViewController;
    long long _defaultTrayIndex;
    IGCameraEffectMiniGalleryFeedDataProvider *_effectMiniGallerySavedFeedDataProvider;
    IGCameraEffectMiniGalleryFeedDataProvider *_effectMiniGalleryFeedDataProvider;
    IGCameraEffectMiniGalleryTopicProvider *_effectMiniGalleryTopicProvider;
    IGCameraEffectMiniGalleryDataFetcher *_effectMiniGalleryDataFetcher;
    _Bool _isComingFromSavedFeed;
    id <IGStoryPostCaptureCameraTrayViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryPostCaptureCameraTrayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_selectEffectWithID:(id)arg1 locatedOnLeftSideOfDefaultTrayItem:(_Bool)arg2;
- (void)_applyEffectMiniGalleryFeedControllerDataSource:(id)arg1 toTrayWithSource:(unsigned long long)arg2;
- (void)cameraVariantSelectorViewController:(id)arg1 didChangeSliderValue:(double)arg2;
- (void)cameraVariantSelectorViewController:(id)arg1 didEndScrollingAtIndex:(long long)arg2;
- (void)cameraVariantSelectorViewController:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (void)cameraVariantSelectorViewController:(id)arg1 didTapItemAtIndex:(long long)arg2;
- (void)cameraVariantSelectorViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)cameraVariantSelectorViewControllerDidTapCustomItem:(id)arg1;
- (id)_effectTrayItemForEffect:(id)arg1;
- (void)_presentEffectBottomSheet;
- (void)_logEffectImpressionsForVisibleItems;
- (void)_selectTrayItemForCurrentlyAppliedEffect;
- (void)_generateTrayItemsWithEffectsOnTheRight:(id)arg1 leftEffects:(id)arg2;
- (void)_generateTrayItemsWithEffects:(id)arg1;
- (void)_generateTrayItemsFromDefaultSource;
- (id)_effectForIndex:(long long)arg1;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didToggleSaveToWishlist:(_Bool)arg2 showToast:(_Bool)arg3;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didTapViewProductItem:(id)arg2;
- (void)cameraEffectBottomSheetViewControllerDidLeaveFullscreenMode:(id)arg1;
- (void)cameraEffectBottomSheetViewControllerDidEnterFullscreenMode:(id)arg1;
- (void)cameraEffectBottomSheetViewControllerDidTapTryIt:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (long long)cameraEffectBottomSheetViewControllerCaptureType:(id)arg1;
- (_Bool)cameraEffectBottomSheetViewControllerShouldPresentCamera:(id)arg1;
- (id)cameraEffectBottomSheetViewControllerAttributionModelForCurrentAREffect:(id)arg1;
- (void)cameraEffectBottomSheetViewController:(id)arg1 didRequestRemovalOfEffectWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (_Bool)cameraEffectMiniGalleryViewControllerEffectIdIsLogged:(id)arg1;
- (void)cameraEffectMiniGalleryViewControllerDidLogImpressionForEffectID:(id)arg1;
- (void)cameraEffectMiniGalleryViewControllerDidDismiss:(id)arg1;
- (void)cameraEffectMiniGalleryViewControllerDidEnterFullscreen:(id)arg1;
- (void)cameraEffectMiniGalleryViewControllerWillExitFullscreen:(id)arg1;
- (void)cameraEffectMiniGalleryViewControllerDidTapSwitchCamera:(id)arg1;
- (void)cameraEffectMiniGalleryViewControllerDidSwitchTopics:(id)arg1;
- (void)cameraEffectMiniGalleryViewController:(id)arg1 logSelectedEffect:(id)arg2 index:(long long)arg3;
- (void)cameraEffectMiniGalleryViewController:(id)arg1 didSelectEffect:(id)arg2;
- (void)cameraEffectMiniGalleryViewControllerDidClearSelection:(id)arg1;
- (void)cameraEffectCollectionDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraEffectCollectionDataSource:(id)arg1 didUpdateUsingPage:(id)arg2;
- (void)cameraEffectFooterViewDidTapTitle:(id)arg1;
- (void)cameraEffectFooterViewDidTapCloseButton:(id)arg1;
- (void)cameraEffectFooterView:(id)arg1 didToggleSaveButtonToSaveState:(_Bool)arg2;
- (void)arEffectSavingController:(id)arg1 didChangeSaveState:(unsigned long long)arg2 forAREffectID:(id)arg3;
- (void)postCaptureControllerDidUpdateEffectList:(id)arg1;
- (CDUnknownBlockType)cameraTrayViewController:(id)arg1 imageProviderForItemAtIndex:(long long)arg2 isHighlighted:(_Bool)arg3;
- (_Bool)cameraTrayViewController:(id)arg1 shouldDisplayBadgeOnItemAtIndex:(long long)arg2;
- (_Bool)cameraTrayViewController:(id)arg1 shouldAllowMoreInfoAccessForItemAtIndex:(long long)arg2;
- (id)cameraTrayViewController:(id)arg1 imageProcessorForItemAtIndex:(long long)arg2;
- (id)cameraTrayViewController:(id)arg1 imageURLForItemAtIndex:(long long)arg2 isHighlighted:(_Bool)arg3;
- (id)cameraTrayViewController:(id)arg1 accessibilityHintForItemAtIndex:(long long)arg2;
- (id)cameraTrayViewController:(id)arg1 accessibilityLabelForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInCameraTrayViewController:(id)arg1;
- (void)cameraTrayViewControllerDidConfirmSelection:(id)arg1 didTapAtIndex:(long long)arg2;
- (void)cameraTrayViewController:(id)arg1 didRequestRemovalOfAREffectWithID:(id)arg2;
- (void)cameraTrayViewController:(id)arg1 didScrollToItemAtIndex:(long long)arg2;
- (void)cameraTrayViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)_handleDidSelectItemAtIndex:(long long)arg1;
- (id)cameraTrayViewController:(id)arg1 effectForIndex:(long long)arg2;
- (void)presentEffectMiniGallery:(id)arg1 captureFrame:(struct CGRect)arg2;
- (void)selectEffectIfPresent:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 postCaptureARController:(id)arg2 isReels:(_Bool)arg3 initialDataSource:(id)arg4 minigalleryDataFetcher:(id)arg5 loggingSessionID:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
