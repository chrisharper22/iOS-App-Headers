//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGDirectMessageSectionController.h"

#import "IGDirectAggregatedMediaViewerViewControllerDelegate-Protocol.h"
#import "IGDirectPhotoMessageCellImageViewDelegate-Protocol.h"

@class IGDirectPhotoMessageViewModel, IGZoomController, NSString, UIView;

@interface IGDirectPhotoMessageSectionController : IGDirectMessageSectionController <IGDirectAggregatedMediaViewerViewControllerDelegate, IGDirectPhotoMessageCellImageViewDelegate>
{
    IGZoomController *_zoomController;
    UIView *_recognizerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *recognizerView; // @synthesize recognizerView=_recognizerView;
@property(retain, nonatomic) IGZoomController *zoomController; // @synthesize zoomController=_zoomController;
- (void)aggregatedMediaViewer:(id)arg1 didViewMedia:(id)arg2;
- (id)aggregatedMediaViewer:(id)arg1 animationViewForMedia:(id)arg2;
- (void)directPhotoMessageCell:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)directPhotoMessageCell:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)directPhotoMessageCell:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)directPhotoMessageCellWillLoadImage:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (_Bool)shouldLaunchZoomingWithZoomController:(id)arg1 gestureRecognizer:(id)arg2;
- (void)_presentMediaViewer;
- (void)handleSingleTapOfSendingOrSentMessageCell:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (id)initWithComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) IGDirectPhotoMessageViewModel *viewModel; // @dynamic viewModel;

@end

