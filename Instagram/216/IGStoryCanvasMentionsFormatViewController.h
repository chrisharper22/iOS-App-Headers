//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGCanvasControlsOverlayViewToolbarDelegate-Protocol.h"
#import "IGResharedMentionStickerListViewControllerDelegate-Protocol.h"
#import "IGStoryCanvasFormatGradientHandler-Protocol.h"
#import "IGStoryCanvasFormatViewControllerType-Protocol.h"

@class IGMedia, IGPerformanceNavigationLogger, IGStickerContainerView, IGStoryCanvasToolbarConfig, IGStoryGradientRingView, IGUserSession, NSArray, NSString, UISelectionFeedbackGenerator, UIView;
@protocol IGStoryCanvasCompositionProvider, IGStoryCanvasFormatViewControllerDelegate;

@interface IGStoryCanvasMentionsFormatViewController : UIViewController <IGResharedMentionStickerListViewControllerDelegate, IGCanvasControlsOverlayViewToolbarDelegate, IGStoryCanvasFormatGradientHandler, IGStoryCanvasFormatViewControllerType>
{
    IGUserSession *_userSession;
    NSArray *_mentionedFeedItems;
    IGPerformanceNavigationLogger *_performanceLogger;
    IGStoryGradientRingView *_loadingRingView;
    IGStickerContainerView *_stickerContainerView;
    UIView *_stickerView;
    NSString *_currentlyLoadingAsyncStickerID;
    IGMedia *_currentMentionedFeedItem;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    id <IGStoryCanvasCompositionProvider> _compositionProvider;
    id <IGStoryCanvasFormatViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasFormatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGStoryCanvasCompositionProvider> compositionProvider; // @synthesize compositionProvider=_compositionProvider;
- (void)_setIsLoading:(_Bool)arg1;
- (void)_handleTap:(id)arg1;
- (void)resharedMentionStickerListViewController:(id)arg1 didSelectResharedMentionSticker:(id)arg2;
- (void)canvasControlsOverlayViewDidTapToolbarButton:(id)arg1;
- (void)handleGradientChange:(id)arg1;
- (id)createModeSubformatForLogging;
- (void)restoreCompositionState;
- (void)handleCapture;
@property(readonly, nonatomic) IGStickerContainerView *stickerContainerView;
@property(readonly, nonatomic) long long presentationAnimationStyle;
@property(readonly, nonatomic) IGStoryCanvasToolbarConfig *toolbarConfig;
- (void)_presentStickerView:(id)arg1;
- (void)_asynchronouslyCreateMentionStickerWithMedia:(id)arg1 shouldBounce:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 mentionedFeedItems:(id)arg2 performanceLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

