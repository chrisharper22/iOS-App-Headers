//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGCanvasControlsOverlayViewToolbarDelegate-Protocol.h"
#import "IGCountdownStickerCreationViewControllerDelegate-Protocol.h"
#import "IGCountdownStickerListViewControllerDelegate-Protocol.h"
#import "IGStoryCanvasFormatGradientHandler-Protocol.h"
#import "IGStoryCanvasFormatViewControllerType-Protocol.h"

@class IGCountdownStickerListModel, IGCountdownStickerView, IGPerformanceNavigationLogger, IGStickerContainerView, IGStoryCanvasToolbarConfig, IGUserSession, NSString;
@protocol IGStoryCanvasCompositionProvider, IGStoryCanvasCountdownFormatViewControllerStickerDelegate, IGStoryCanvasFormatViewControllerDelegate;

@interface IGStoryCanvasCountdownFormatViewController : UIViewController <IGCountdownStickerCreationViewControllerDelegate, IGCountdownStickerListViewControllerDelegate, IGCanvasControlsOverlayViewToolbarDelegate, IGStoryCanvasFormatGradientHandler, IGStoryCanvasFormatViewControllerType>
{
    IGUserSession *_userSession;
    IGCountdownStickerListModel *_model;
    struct UIEdgeInsets _contentInset;
    IGPerformanceNavigationLogger *_performanceLogger;
    unsigned long long _currentIndex;
    IGStickerContainerView *_stickerContainerView;
    IGCountdownStickerView *_stickerView;
    id <IGStoryCanvasCompositionProvider> _compositionProvider;
    id <IGStoryCanvasFormatViewControllerDelegate> _delegate;
    id <IGStoryCanvasCountdownFormatViewControllerStickerDelegate> _updateDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasCountdownFormatViewControllerStickerDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic) __weak id <IGStoryCanvasFormatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGStoryCanvasCompositionProvider> compositionProvider; // @synthesize compositionProvider=_compositionProvider;
- (void)_beginPostcapture;
- (void)_beginEditingInCreationViewControllerWithSticker:(id)arg1;
- (id)_newStickerViewWithConsumptionModel:(id)arg1;
- (void)_cycleToNextSticker;
- (void)_handleTap:(id)arg1;
- (void)countdownStickerViewController:(id)arg1 didFinishEditingCountdownStickerView:(id)arg2 withDismissalSource:(long long)arg3;
- (void)countdownStickerViewController:(id)arg1 willFinishEditingCountdownStickerView:(id)arg2 withDismissalSource:(long long)arg3;
- (void)countdownStickerListViewController:(id)arg1 didDeleteCountdownSticker:(id)arg2;
- (void)countdownStickerListViewController:(id)arg1 didReshareCountdownSticker:(id)arg2;
- (void)countdownStickerListViewControllerDidTapCreateNewList:(id)arg1;
- (void)handleGradientChange:(id)arg1;
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
- (id)initWithUserSession:(id)arg1 model:(id)arg2 contentInset:(struct UIEdgeInsets)arg3 performanceLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

