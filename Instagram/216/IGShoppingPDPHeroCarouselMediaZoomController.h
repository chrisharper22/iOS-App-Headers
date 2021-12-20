//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGZoomHandlerDelegate-Protocol.h"

@class IGViewController, NSString, UIView;

@interface IGShoppingPDPHeroCarouselMediaZoomController : NSObject <IGZoomHandlerDelegate>
{
    IGViewController *_presentingViewController;
    UIView *_zoomedViewParentView;
    long long _zoomedViewParentPosition;
}

- (void).cxx_destruct;
- (void)didEndZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (void)didStartZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (void)willStartZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (id)zoomViewControllerForZoomController:(id)arg1 frame:(struct CGRect)arg2;
- (double)headerHeightForZoomController:(id)arg1;
- (id)presentingController;
- (_Bool)shouldLaunchZoomingWithZoomController:(id)arg1 gestureRecognizer:(id)arg2;
- (id)initWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

