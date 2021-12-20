//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStoryCameraViewController, IGTVCameraViewController, NSArray;

@protocol IGTVCameraViewControllerDelegate <NSObject>
- (void)igtvCameraViewControllerDidStopRecordingAndCaptureVideo:(IGTVCameraViewController *)arg1 withMediaCompositions:(NSArray *)arg2;
- (void)igtvCameraViewController:(IGTVCameraViewController *)arg1 storyCameraViewControllerDidDismissFromSuccessfulBroadcast:(IGStoryCameraViewController *)arg2 shouldAnimatePostToFeed:(_Bool)arg3 sharedToIGTV:(_Bool)arg4;
- (void)igtvCameraViewControllerShouldCancelPostcapture:(IGTVCameraViewController *)arg1;
- (void)igtvCameraViewController:(IGTVCameraViewController *)arg1 storyCameraViewControllerDidStartRecording:(IGStoryCameraViewController *)arg2;
- (void)igtvCameraViewController:(IGTVCameraViewController *)arg1 storyCameraViewController:(IGStoryCameraViewController *)arg2 didCreateMediaCompositions:(NSArray *)arg3;
- (void)igtvCameraViewController:(IGTVCameraViewController *)arg1 storyCameraViewControllerDidTapOpenGallery:(IGStoryCameraViewController *)arg2;
- (void)igtvCameraViewController:(IGTVCameraViewController *)arg1 storyCameraViewControllerDidTapCloseButton:(IGStoryCameraViewController *)arg2;
@end

