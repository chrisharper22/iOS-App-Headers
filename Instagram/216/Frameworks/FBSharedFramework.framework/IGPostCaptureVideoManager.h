//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAudioCapturing-Protocol.h>
#import <FBSharedFramework/IGVideoCapturing-Protocol.h>

@class IGCaptureQueueManager, NSString;
@protocol FBCCAudioPipelineProviding, IGOCPostCaptureControlling, IGVideoProcessorControlling;

@interface IGPostCaptureVideoManager : NSObject <IGVideoCapturing, IGAudioCapturing>
{
    IGCaptureQueueManager *_captureQueueManager;
    id <IGOCPostCaptureControlling> _postCaptureController;
    id <FBCCAudioPipelineProviding> audioPipelineProvider;
    id <IGVideoProcessorControlling> _videoProcessorController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGVideoProcessorControlling> videoProcessorController; // @synthesize videoProcessorController=_videoProcessorController;
@property(retain, nonatomic) id <FBCCAudioPipelineProviding> audioPipelineProvider; // @synthesize audioPipelineProvider;
- (_Bool)isSpeakerMuted;
- (void)setSpeakerDefaultMuted:(_Bool)arg1;
- (void)setSpeakerMuted:(_Bool)arg1;
- (id)waterfallLogger;
- (id)videoBufferQueue;
- (id)audioBufferQueue;
- (id)createNewVideoProcessorController;
- (id)initWithUserSession:(id)arg1 postCaptureController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

