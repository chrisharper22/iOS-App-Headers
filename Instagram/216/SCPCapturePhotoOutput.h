//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCapturePhotoCaptureDelegate-Protocol.h"

@class AVCapturePhotoOutput, AVCaptureStillImageOutput, NSString;

@interface SCPCapturePhotoOutput : NSObject <AVCapturePhotoCaptureDelegate>
{
    AVCapturePhotoOutput *_photoOutput;
    AVCaptureStillImageOutput *_stillImageOutput;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6;
- (void)callCompletionWithPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 error:(id)arg3;
- (void)captureWithFlash:(_Bool)arg1 withDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)avCaptureOutput;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

