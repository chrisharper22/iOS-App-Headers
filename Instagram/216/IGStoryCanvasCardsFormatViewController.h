//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGCanvasControlsOverlayViewToolbarDelegate-Protocol.h"
#import "IGStoryCanvasCardCreationViewControllerDelegate-Protocol.h"
#import "IGStoryCanvasCardCreationViewControllerUserSelectionDelegate-Protocol.h"
#import "IGStoryCanvasCardCreationViewInitiationDelegate-Protocol.h"
#import "IGStoryCanvasFormatGradientHandler-Protocol.h"
#import "IGStoryCanvasFormatViewControllerType-Protocol.h"
#import "IGStoryCanvasPostCaptureCardsSelectionViewControllerDelegate-Protocol.h"
#import "IGStoryMultiEditCompositionThumbnailTrayAddButtonDelegate-Protocol.h"

@class IGImageView, IGPerformanceNavigationLogger, IGStickerContainerView, IGStoryCanvasCardCreationView, IGStoryCanvasToolbarConfig, IGStoryPostCaptureEditingViewController, IGUser, IGUserSession, NSArray, NSString;
@protocol IGStoryCanvasCompositionProvider, IGStoryCanvasFormatViewControllerDelegate;

@interface IGStoryCanvasCardsFormatViewController : UIViewController <IGStoryCanvasCardCreationViewControllerDelegate, IGStoryCanvasCardCreationViewControllerUserSelectionDelegate, IGStoryCanvasCardCreationViewInitiationDelegate, IGStoryCanvasPostCaptureCardsSelectionViewControllerDelegate, IGStoryMultiEditCompositionThumbnailTrayAddButtonDelegate, IGCanvasControlsOverlayViewToolbarDelegate, IGStoryCanvasFormatViewControllerType, IGStoryCanvasFormatGradientHandler>
{
    IGUserSession *_userSession;
    NSArray *_models;
    struct UIEdgeInsets _contentInset;
    unsigned long long _currentIndex;
    IGPerformanceNavigationLogger *_performanceLogger;
    IGStoryCanvasCardCreationView *_creationView;
    IGImageView *_backgroundImageView;
    IGUser *_selectedUser;
    IGStoryPostCaptureEditingViewController *_postcaptureViewController;
    id <IGStoryCanvasCompositionProvider> _compositionProvider;
    id <IGStoryCanvasFormatViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasFormatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGStoryCanvasCompositionProvider> compositionProvider; // @synthesize compositionProvider=_compositionProvider;
- (void)handleGradientChange:(id)arg1;
- (void)cardsCompositionsSelectionViewController:(id)arg1 didDeselectFeedItem:(id)arg2 atIndex:(long long)arg3;
- (void)cardsCompositionsSelectionViewController:(id)arg1 didSelectFeedItem:(id)arg2 atIndex:(long long)arg3;
- (void)cardsCompositionsSelectionViewController:(id)arg1 didLoadWithItemCount:(unsigned long long)arg2;
- (void)didTapAddButtonInMultiEditCompositionThumbnailTray:(id)arg1;
- (id)_mediaCompositionStateWithExtraLoggingMetadata:(id)arg1;
- (void)_handleFailedCompositionGeneration;
- (void)_handleSuccessfulCompositionGenerationWithCompositions:(id)arg1;
- (void)_presentCreationVC;
- (void)_updateViewsWithModel:(id)arg1;
- (void)canvasCardCreationViewController:(id)arg1 willFinishEditingWithDismissalSource:(long long)arg2;
- (void)canvasCardCreationViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)canvasCardCreationViewDidAttemptBeginEditing:(id)arg1;
- (void)canvasControlsOverlayViewDidTapToolbarButton:(id)arg1;
- (id)createModeSubformatForLogging;
- (void)restoreCompositionState;
- (void)handleCapture;
@property(readonly, nonatomic) long long presentationAnimationStyle;
@property(readonly, nonatomic) IGStoryCanvasToolbarConfig *toolbarConfig;
@property(readonly, nonatomic) IGStickerContainerView *stickerContainerView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 cardModels:(id)arg2 contentInset:(struct UIEdgeInsets)arg3 performanceLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
