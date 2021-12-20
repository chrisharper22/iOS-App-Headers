//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGCameraTrayDataSource-Protocol.h"
#import "IGCameraTrayDelegate-Protocol.h"
#import "IGCameraTraySelectionDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGStoryCameraVariantSelectorViewControllerDelegate-Protocol.h"
#import "IGStoryCanvasCompositionProvider-Protocol.h"
#import "IGStoryCanvasCountdownFormatViewControllerStickerDelegate-Protocol.h"
#import "IGStoryCanvasFormatViewControllerDelegate-Protocol.h"
#import "IGStoryCanvasTextFormatViewControllerStickerTrayPresentationDelegate-Protocol.h"
#import "IGStoryColorProvider-Protocol.h"
#import "IGStoryDrawerDismissDelegate-Protocol.h"
#import "IGStoryExtendedGalleryViewControllerDelegate-Protocol.h"
#import "IGStoryGalleryFirstViewControllerDelegate-Protocol.h"
#import "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"
#import "IGStorySettingsViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGBackgroundGradient, IGCameraLoggingContext, IGCanvasControlsOverlayView, IGCanvasStickerDialMode, IGDirectionalPanGestureRecognizer, IGLinearGradientView, IGObjectDiskStorage, IGStoryCanvasConfig, IGStoryCreateModeSessionLogger, IGStoryExtendedGalleryViewController, IGStoryGalleryFirstViewController, IGStoryStickerDataSource, IGUserSession, NSArray, NSMutableDictionary, NSMutableSet, NSString, UIImage, UISelectionFeedbackGenerator, UIView;
@protocol IGStoryCanvasFormatViewControllerType, IGStoryCanvasViewControllerDelegate;

@interface IGStoryCanvasViewController : UIViewController <IGPartialModalSheetListener, IGStoryCanvasCompositionProvider, IGStoryCanvasCountdownFormatViewControllerStickerDelegate, IGStoryCanvasFormatViewControllerDelegate, IGStoryCanvasTextFormatViewControllerStickerTrayPresentationDelegate, IGStoryColorProvider, IGStoryDrawerDismissDelegate, IGStoryExtendedGalleryViewControllerDelegate, IGStoryPostCaptureEditingViewControllerDelegate, UIGestureRecognizerDelegate, IGStoryGalleryFirstViewControllerDelegate, IGStorySettingsViewControllerDelegate, IGGestureHandler, IGCameraTrayDataSource, IGCameraTrayDelegate, IGCameraTraySelectionDelegate, IGStoryCameraVariantSelectorViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGStoryCanvasConfig *_config;
    NSString *_loggingSessionID;
    double _cameraRequestedTimestamp;
    id <IGStoryCanvasViewControllerDelegate> _delegate;
    UIView *_compositionView;
    IGLinearGradientView *_gradientView;
    IGCanvasControlsOverlayView *_controlsOverlayView;
    UIImage *_gradientSnapshotForEyedropperColorPicker;
    UIView *_contentView;
    long long _selectedDialElementIndex;
    long long _defaultDialElementIndex;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIViewController *_activeEditingViewController;
    _Bool _toolbarControlsViewHidden;
    UIViewController<IGStoryCanvasFormatViewControllerType> *_currentFormatViewController;
    IGStoryExtendedGalleryViewController *_galleryViewController;
    IGDirectionalPanGestureRecognizer *_galleryVerticalPanGesture;
    IGStoryGalleryFirstViewController *_galleryFirstViewController;
    IGObjectDiskStorage *_storageDialElements;
    NSArray *_dialElements;
    NSMutableSet *_visitedDialHashes;
    IGCanvasStickerDialMode *_typeMode;
    IGCanvasStickerDialMode *_testMode;
    _Bool _creationFromAttribution;
    IGStoryCreateModeSessionLogger *_createModeSessionLogger;
    NSArray *_availableBackgroundGradients;
    long long _currentBackgroundGradientIndex;
    NSMutableSet *_loggedImpressionCreateModeFormats;
    IGCameraLoggingContext *_cameraLoggingContext;
    IGStoryStickerDataSource *_stickerDataSource;
    NSMutableDictionary *_compositionIdsForAssets;
    _Bool _postCaptureActive;
    double _contentCornerRadius;
    IGBackgroundGradient *_customGradient;
    struct CGRect _contentRegion;
    struct UIEdgeInsets _contentOverlayInsets;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGBackgroundGradient *customGradient; // @synthesize customGradient=_customGradient;
@property(readonly, nonatomic) long long defaultDialElementIndex; // @synthesize defaultDialElementIndex=_defaultDialElementIndex;
@property(nonatomic) long long selectedDialElementIndex; // @synthesize selectedDialElementIndex=_selectedDialElementIndex;
@property(nonatomic) _Bool postCaptureActive; // @synthesize postCaptureActive=_postCaptureActive;
@property(nonatomic) struct UIEdgeInsets contentOverlayInsets; // @synthesize contentOverlayInsets=_contentOverlayInsets;
@property(nonatomic) double contentCornerRadius; // @synthesize contentCornerRadius=_contentCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
- (void)galleryFirstViewControllerHeaderTapped:(id)arg1;
- (void)galleryFirstViewControllerCloseTapped:(id)arg1;
- (void)_setCompositionIdentifier:(id)arg1 forGalleryAsset:(id)arg2;
- (id)compositionIdentifierForGalleryAsset:(id)arg1;
- (id)canvasCompositionPrepopulatedOverlays;
- (id)canvasCompositionExtraLoggingMetadata;
- (id)canvasCompositionCustomBackgroundGradient;
- (long long)canvasCompositionCurrentBackgroundGradientIndex;
- (id)canvasCompositionAvailableBackgroundGradients;
- (struct CGSize)canvasCompositionSize;
- (void)countdownFormatViewController:(id)arg1 didUpdateCountdownStickerModel:(id)arg2;
- (void)canvasFormatViewController:(id)arg1 proceedToPostcaptureWithMediaCompositions:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)canvasFormatViewController:(id)arg1 presentViewControllerInPartialSheet:(id)arg2;
- (void)canvasFormatViewController:(id)arg1 willDismissEditingViewController:(id)arg2;
- (void)canvasFormatViewController:(id)arg1 presentEditingViewController:(id)arg2;
- (void)canvasTextFormatViewControllerWillDismissStickerTray:(id)arg1;
- (void)canvasTextFormatViewControllerWillPresentStickerTray:(id)arg1;
- (void)_updateOverlayTools;
- (void)_setCurrentFormatViewController:(id)arg1;
- (id)colorAtWindowCoordinates:(struct CGPoint)arg1 withViewController:(id)arg2;
- (void)finishedSelectingColorFromScreenWithViewController:(id)arg1;
- (void)beginSelectingColorFromScreenWithViewController:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)cameraTrayDidConfirmItemAtIndex:(long long)arg1;
- (void)cameraTrayDidCompleteScrollAtItemWithIndex:(long long)arg1;
- (void)cameraTrayDidSelectItemAtIndex:(long long)arg1 usingData:(id)arg2;
- (void)_handleDidSelectItemAtIndex:(long long)arg1;
- (void)cameraTrayDidScrollToItemAtIndex:(long long)arg1;
- (void)cameraTrayDidManuallyScrollToItemAtIndex:(long long)arg1;
- (void)cameraTrayDidManuallyScrollToPrecisionItemIndex:(double)arg1;
- (void)_didSelectDialIndex:(long long)arg1 fromAttribution:(_Bool)arg2;
- (void)cameraTrayWillDisplayItemAtIndex:(long long)arg1 isHighlighted:(_Bool)arg2;
- (_Bool)cameraTrayShouldDisplayBadgeOnItemAtIndex:(long long)arg1;
- (_Bool)cameraTrayShouldAllowMoreInfoAccessForItemAtIndex:(long long)arg1;
- (id)cameraTrayImageProcessorForItemAtIndex:(long long)arg1;
- (CDUnknownBlockType)cameraTrayImageProviderForItemAtIndex:(long long)arg1 isHighlighted:(_Bool)arg2;
- (id)cameraTrayImageURLForItemAtIndex:(long long)arg1 isHighlighted:(_Bool)arg2;
- (id)cameraTrayAccessibilityHintForItemAtIndex:(long long)arg1;
- (id)cameraTrayAccessibilityLabelForItemAtIndex:(long long)arg1;
- (long long)numberOfItemsInCameraTray;
- (void)cameraVariantSelectorViewController:(id)arg1 didChangeSliderValue:(double)arg2;
- (void)cameraVariantSelectorViewController:(id)arg1 didEndScrollingAtIndex:(long long)arg2;
- (void)cameraVariantSelectorViewController:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (void)cameraVariantSelectorViewController:(id)arg1 didTapItemAtIndex:(long long)arg2;
- (void)cameraVariantSelectorViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)cameraVariantSelectorViewControllerDidTapCustomItem:(id)arg1;
- (void)storyPostCaptureEditingViewControllerDidCancel:(id)arg1;
- (void)storyPostCaptureEditingViewController:(id)arg1 didShareToStory:(long long)arg2 andDirectRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5 exitPoint:(long long)arg6;
- (void)storyDrawerDidDismiss:(id)arg1;
- (void)storyDrawerWillDismiss:(id)arg1 withDismissStyle:(unsigned long long)arg2;
- (void)extendedGalleryViewController:(id)arg1 didShareToStory:(long long)arg2 exitPoint:(long long)arg3 directRecipients:(id)arg4 storyModelArray:(id)arg5 metadataArray:(id)arg6;
- (void)extendedGalleryViewController:(id)arg1 didSelectBoomerangSuggestion:(id)arg2 atIndexPath:(id)arg3 boomerangAssetSize:(struct CGSize)arg4;
- (void)extendedGalleryViewControllerDidUpdateGalleryPermissions:(id)arg1;
- (void)extendedGalleryViewController:(id)arg1 didSelectDraft:(id)arg2 withDraftGallery:(id)arg3;
- (void)extendedGalleryViewController:(id)arg1 didSelectCameraCell:(id)arg2;
- (void)extendedGalleryViewController:(id)arg1 didSelectAssets:(id)arg2;
- (void)_logGalleryAssetsSelected:(id)arg1;
- (void)_didPanVertically:(id)arg1;
- (void)didTapGalleryButton;
- (void)_presentGalleryWithGestureRecognizer:(id)arg1;
- (void)_finishedSelectingColorFromScreen;
- (void)_beganSelectingColorFromScreen;
- (void)_setPrepopulatedStickersHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setToolbarControlsViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)_presentDarkBlurPartialModalWithContentViewController:(id)arg1;
- (void)_seeAllButtonTapped;
- (void)_diceButtonTapped;
- (void)storySettingsViewControllerDidTapDone:(id)arg1;
- (void)_settingsButtonTapped;
- (void)_backButtonTapped;
- (id)_currentDialMode;
- (void)_updateAppearanceForCreateMode:(_Bool)arg1;
- (void)_updateAppearanceWithCurrentGradient;
- (void)_updateBackgroundGradients;
- (void)didTapGradientButton;
- (void)clearTextFormat;
@property(readonly, nonatomic) IGBackgroundGradient *currentBackgroundGradient;
- (void)willBecomeInactiveCameraMode;
- (void)didBecomeActiveCameraMode;
- (void)willBecomeActiveCameraMode;
- (_Bool)prefersStatusBarHidden;
- (void)viewSafeAreaInsetsDidChange;
- (void)_updateContentOverlayInsets;
- (struct UIEdgeInsets)_contentRegionInsets;
- (struct CGRect)_contentOverlaySafeArea;
- (void)_updateCreateModes;
- (void)_prepareComposition:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 loggingSessionID:(id)arg2 cameraRequestedTimestamp:(double)arg3 config:(id)arg4 stickerDataSource:(id)arg5 loggingContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
