//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGCanvasControlsOverlayViewToolbarDelegate-Protocol.h"
#import "IGMusicStickerEditorDelegate-Protocol.h"
#import "IGStoryCanvasFormatGalleryHandler-Protocol.h"
#import "IGStoryCanvasFormatGradientHandler-Protocol.h"
#import "IGStoryCanvasFormatViewControllerType-Protocol.h"
#import "IGStoryMediaCompositionStickerCreationControllerDelegate-Protocol.h"
#import "IGStoryStickerAddingRulesDataSource-Protocol.h"
#import "IGStoryStickerTrayViewControllerDelegate-Protocol.h"
#import "IGStoryTextEntryViewControllerDelegate-Protocol.h"

@class IGPerformanceNavigationLogger, IGStickerContainerView, IGStoryCanvasToolbarConfig, IGStoryMediaCompositionStickerCreationController, IGStoryStickerDataSource, IGStoryStickerTrayStateModel, IGStoryTextWrapperView, IGUserSession, NSMutableDictionary, NSString;
@protocol IGStoryCanvasCompositionProvider, IGStoryCanvasFormatViewControllerDelegate, IGStoryCanvasTextFormatViewControllerStickerTrayPresentationDelegate, IGStoryColorProvider;

@interface IGStoryCanvasTextFormatViewController : UIViewController <IGStoryStickerAddingRulesDataSource, IGStoryStickerTrayViewControllerDelegate, IGStoryTextEntryViewControllerDelegate, IGStoryMediaCompositionStickerCreationControllerDelegate, IGMusicStickerEditorDelegate, IGCanvasControlsOverlayViewToolbarDelegate, IGStoryCanvasFormatGalleryHandler, IGStoryCanvasFormatGradientHandler, IGStoryCanvasFormatViewControllerType>
{
    IGUserSession *_userSession;
    struct UIEdgeInsets _contentInset;
    IGPerformanceNavigationLogger *_performanceLogger;
    IGStoryTextWrapperView *_textWrapperView;
    IGStoryStickerDataSource *_stickerDataSource;
    IGStoryStickerTrayStateModel *_lastStickerTrayStateModel;
    IGStoryMediaCompositionStickerCreationController *_stickerController;
    NSMutableDictionary *_fontSelectorViewItemDrawnImages;
    id <IGStoryCanvasFormatViewControllerDelegate> _delegate;
    id <IGStoryCanvasCompositionProvider> _compositionProvider;
    id <IGStoryColorProvider> _colorProvidingDelegate;
    id <IGStoryCanvasTextFormatViewControllerStickerTrayPresentationDelegate> _stickerTrayPresentationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasTextFormatViewControllerStickerTrayPresentationDelegate> stickerTrayPresentationDelegate; // @synthesize stickerTrayPresentationDelegate=_stickerTrayPresentationDelegate;
@property(nonatomic) __weak id <IGStoryColorProvider> colorProvidingDelegate; // @synthesize colorProvidingDelegate=_colorProvidingDelegate;
@property(nonatomic) __weak id <IGStoryCanvasCompositionProvider> compositionProvider; // @synthesize compositionProvider=_compositionProvider;
@property(nonatomic) __weak id <IGStoryCanvasFormatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stickerCreationController:(id)arg1 presentAlertWithMessage:(id)arg2;
- (void)stickerCreationController:(id)arg1 didSelectSticker:(id)arg2;
- (void)stickerCreationController:(id)arg1 didDismissStickerCreationViewController:(id)arg2 withSticker:(id)arg3;
- (void)stickerCreationController:(id)arg1 willDismissStickerCreationViewController:(id)arg2 withSticker:(id)arg3;
- (void)stickerCreationController:(id)arg1 presentMusicStickerEditingViewControllerWithMusicTrackClip:(id)arg2 musicSticker:(id)arg3;
- (void)stickerCreationController:(id)arg1 presentStickerCreationViewController:(id)arg2;
- (void)textEntryControlsDidToggleToTextFormat:(id)arg1;
- (void)textEntryViewControllerDidSelectTextFormat:(id)arg1 formatString:(id)arg2;
- (void)textEntryViewControllerDidSelectTextAlignment:(id)arg1 alignmentString:(id)arg2;
- (void)textEntryViewControllerColorPickerFormatPickerButtonDidToggle:(id)arg1 formatPickerSelected:(_Bool)arg2;
- (void)textEntryViewControllerDidChangeTextAnimation:(id)arg1 textFormatName:(id)arg2;
- (void)textEntryViewControllerDidAddAnimationSticker:(id)arg1 animatedStickerView:(id)arg2;
- (void)textEntryViewControllerDidChangeTextEffect:(id)arg1 emphasisType:(long long)arg2 isAppliedOnFullCaption:(_Bool)arg3;
- (void)textEntryViewController:(id)arg1 didFinishSelectingColorFromSource:(long long)arg2;
- (void)textEntryViewController:(id)arg1 didBeginEditingTextWrapperView:(id)arg2;
- (void)textEntryViewController:(id)arg1 didFinishEditingTextWrapperView:(id)arg2 withDismissalSource:(long long)arg3;
- (void)textEntryViewController:(id)arg1 willFinishEditingTextWrapperView:(id)arg2 withDismissalSource:(long long)arg3;
- (void)_proceedToPostcaptureWithStickers:(id)arg1 assetMetadatas:(id)arg2 musicClip:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_proceedToPostcaptureWithSticker:(id)arg1;
- (void)_handleTap;
- (void)musicStickerEditor:(id)arg1 didFinishEditingMusicSticker:(id)arg2 musicTrackClip:(id)arg3;
- (void)musicStickerEditorDidSelectCancel:(id)arg1 musicStickerView:(id)arg2;
- (unsigned long long)musicStickerDisabledReason;
- (_Bool)hasHitMaxCountForStaticStickerWithModel:(id)arg1;
- (_Bool)hasInstanceOfStickerWithEnforcementType:(unsigned long long)arg1;
- (void)willDismissStickerTrayViewController:(id)arg1 trayStateModel:(id)arg2;
- (void)handleGradientChange:(id)arg1;
- (void)handleGalleryAssetSelections:(id)arg1;
- (void)canvasControlsOverlayViewDidTapToolbarButton:(id)arg1;
- (id)createModeSubformatForLogging;
- (void)restoreCompositionState;
- (void)handleCapture;
@property(readonly, nonatomic) long long presentationAnimationStyle;
@property(readonly, nonatomic) IGStoryCanvasToolbarConfig *toolbarConfig;
@property(readonly, nonatomic) IGStickerContainerView *stickerContainerView;
- (void)resetTextView;
- (void)_layoutSticker:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)_newTextWrapperView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 stickerDataSource:(id)arg2 contentInset:(struct UIEdgeInsets)arg3 performanceLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

