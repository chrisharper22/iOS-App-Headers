//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCameraZoomController;

@protocol IGCameraZoomControllerDelegate <NSObject>
- (void)captureButtonDidZoomScale:(double)arg1;
- (void)zoomControllerDidStopZoom:(IGCameraZoomController *)arg1;
- (void)zoomController:(IGCameraZoomController *)arg1 didChangeZoomScaleBy:(double)arg2;
@end

