//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGCameraViewControllerSampleBufferObserver-Protocol.h"

@class MISSING_TYPE;

@interface _TtC20IGSundialVideoLayout31IGSundialVideoLayoutPreviewView : IGPassthroughView <IGCameraViewControllerSampleBufferObserver>
{
    MISSING_TYPE *previewView;
    MISSING_TYPE *blurView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)cameraViewController:(id)arg1 didReceiveAudioBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)cameraViewController:(id)arg1 didReceiveVideoBuffer:(struct opaqueCMSampleBuffer *)arg2 metadata:(id)arg3;
- (void)layoutSubviews;
- (id)init;

@end
