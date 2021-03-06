//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPartialModalSheetNavigationController.h>

#import "IGPartialModalSheetCustomInteractionDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGVisualSearchInteractiveMediaViewDelegate-Protocol.h"
#import "IGVisualSearchResultsViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGPartialModalSheetBackgroundResizingController, IGPartialModalSheetViewController, IGPhoto, IGTapButton, IGVisualSearchInteractiveMediaView, IGVisualSearchResultsPerformanceLogger, IGVisualSearchResultsViewController, NSString, UIScrollView, UIView;
@protocol IGPartialModalSheetListener;

@interface IGVisualSearchInteractiveViewController : IGPartialModalSheetNavigationController <IGPartialModalSheetListener, IGVisualSearchInteractiveMediaViewDelegate, IGVisualSearchResultsViewControllerDelegate, IGPartialModalSheetCustomInteractionDelegate, UIScrollViewDelegate>
{
    IGVisualSearchInteractiveMediaView *_interactiveMediaView;
    UIView *_feedView;
    UIScrollView *_scrollView;
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    IGVisualSearchResultsViewController *_searchResultsViewController;
    IGPartialModalSheetBackgroundResizingController *_resizingController;
    IGPhoto *_mediaPhoto;
    double _mediaHeight;
    _Bool _isScrollable;
    IGTapButton *_closeButton;
    IGVisualSearchResultsPerformanceLogger *_perfLogger;
    id <IGPartialModalSheetListener> _partialModalSheetListener;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPartialModalSheetListener> partialModalSheetListener; // @synthesize partialModalSheetListener=_partialModalSheetListener;
- (void)visualSearchInteractiveMediaView:(id)arg1 didTapGlintForDetectedObjectWithID:(id)arg2;
- (id)partialModalSheetViewController:(id)arg1 delegateView:(id)arg2 hitTest:(struct CGPoint)arg3 withEvent:(id)arg4;
- (double)partialModalSheetViewControllerAlphaForDimmingView:(id)arg1;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)visualSearchResultsViewController:(id)arg1 didLoadSearchResultsWithDetectedObjects:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_centerFirstDetectedObject:(id)arg1;
- (id)_postCaptureOverlayMask:(struct CGRect)arg1;
- (void)_positionCloseButtonWithOffset:(double)arg1;
- (void)_didTapCloseButton;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (id)initWithFeedView:(id)arg1 photo:(id)arg2 interactingFocusRegion:(struct CGRect)arg3 userSession:(id)arg4 visualSearchInput:(id)arg5 entryPoint:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

