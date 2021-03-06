//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBARCaptureEventService : NSObject
{
    struct shared_ptr<facebook::arservices::apple::CaptureEventInput> _eventInput;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) weak_ptr_9ca7bb89 eventService;
@property(readonly, nonatomic) shared_ptr_bd589161 eventInput;
- (void)notifyCaptureEventOfType:(unsigned char)arg1;
- (void)notifyCameraInfoPreviewInfoChanged:(const struct CameraPreviewInfo *)arg1;
- (void)notifyCameraInfoVideoInfoChanged:(const struct CameraVideoInfo *)arg1;
- (void)notifyCameraInfoChanged:(struct FBARCaptureEventServiceCameraInfo)arg1;
- (id)init;

@end

