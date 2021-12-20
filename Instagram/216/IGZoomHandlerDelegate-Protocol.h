//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGZoomController, IGZoomViewController, IGZoomViewPresenter, UIGestureRecognizer, UIViewController;
@protocol IGAnalyticsModule;

@protocol IGZoomHandlerDelegate <NSObject>
- (void)didEndZoomWithZoomController:(IGZoomController *)arg1 zoomPresenter:(IGZoomViewPresenter *)arg2;
- (void)didStartZoomWithZoomController:(IGZoomController *)arg1 zoomPresenter:(IGZoomViewPresenter *)arg2;
- (void)willStartZoomWithZoomController:(IGZoomController *)arg1 zoomPresenter:(IGZoomViewPresenter *)arg2;
- (IGZoomViewController *)zoomViewControllerForZoomController:(IGZoomController *)arg1 frame:(struct CGRect)arg2;
- (double)headerHeightForZoomController:(IGZoomController *)arg1;
- (UIViewController<IGAnalyticsModule> *)presentingController;
- (_Bool)shouldLaunchZoomingWithZoomController:(IGZoomController *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2;
@end
