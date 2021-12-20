//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGCanvasControlsOverlayViewToolbarDelegate-Protocol.h"
#import "IGMemoriesStickerListViewControllerDelegate-Protocol.h"
#import "IGStoryCanvasFormatGradientHandler-Protocol.h"
#import "IGStoryCanvasFormatViewControllerType-Protocol.h"

@class IGMemoryHeaderStickerView, IGOnThisDayModel, IGPerformanceNavigationLogger, IGStickerContainerView, IGStoryCanvasToolbarConfig, IGStoryGradientRingView, IGUserSession, NSArray, NSString, UISelectionFeedbackGenerator, UIView;
@protocol IGStoryCanvasCompositionProvider, IGStoryCanvasFormatViewControllerDelegate;

@interface IGStoryCanvasMemoriesFormatViewController : UIViewController <IGMemoriesStickerListViewControllerDelegate, IGStoryCanvasFormatViewControllerType, IGCanvasControlsOverlayViewToolbarDelegate, IGStoryCanvasFormatGradientHandler>
{
    NSArray *_onThisDayModels;
    IGUserSession *_userSession;
    IGPerformanceNavigationLogger *_performanceLogger;
    IGOnThisDayModel *_currentOnThisDayModel;
    IGStickerContainerView *_stickerContainerView;
    NSString *_currentlyLoadingAsyncStickerID;
    IGMemoryHeaderStickerView *_titleSticker;
    UIView *_mediaStickerView;
    IGStoryGradientRingView *_loadingRingView;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    id <IGStoryCanvasFormatViewControllerDelegate> _delegate;
    id <IGStoryCanvasCompositionProvider> _compositionProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasCompositionProvider> compositionProvider; // @synthesize compositionProvider=_compositionProvider;
@property(nonatomic) __weak id <IGStoryCanvasFormatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleTap:(id)arg1;
- (void)memoriesStickerListViewController:(id)arg1 didSelectMemoryWithModel:(id)arg2;
- (void)_displayNextSticker;
- (void)canvasControlsOverlayViewDidTapToolbarButton:(id)arg1;
- (void)_setIsLoading:(_Bool)arg1;
- (void)handleGradientChange:(id)arg1;
- (void)_presentTitleSticker:(id)arg1 mediaSticker:(id)arg2 withBounceAnimation:(_Bool)arg3;
- (void)_displayOnThisDaySticker:(id)arg1 withBounceAnimation:(_Bool)arg2;
- (id)createModeSubformatForLogging;
- (void)restoreCompositionState;
- (void)handleCapture;
@property(readonly, nonatomic) long long presentationAnimationStyle;
@property(readonly, nonatomic) IGStoryCanvasToolbarConfig *toolbarConfig;
@property(readonly, nonatomic) IGStickerContainerView *stickerContainerView;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithOnThisDayModels:(id)arg1 userSession:(id)arg2 performanceLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

