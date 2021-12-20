//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUploadTaskListener-Protocol.h>

@class IGUploadService, IGUploadTaskMediaKeyMap, NSMutableArray, NSString, NSURL;
@protocol IGPostAnalyticsProvider, IGUserLauncherSetProviding;

@interface IGUploadSessionBuilder : NSObject <IGUploadTaskListener>
{
    IGUploadService *_uploadService;
    id <IGPostAnalyticsProvider> _analyticsProvider;
    NSString *_waterfallId;
    NSString *_uploadServicePath;
    NSMutableArray *_maps;
    IGUploadTaskMediaKeyMap *_pendingVideoInfo;
    NSURL *_videoUrlRenderedOptimistically;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
}

- (void).cxx_destruct;
- (void)videoUploadTask:(id)arg1 didUpdateWithRenderedVideoUrl:(id)arg2;
- (void)videoUploadTask:(id)arg1 didUpdateWithVideoCoverImageSource:(id)arg2;
- (void)imageUploadTask:(id)arg1 didUpdateWithRenderedImageSource:(id)arg2;
- (void)uploadTaskDidCancel:(id)arg1;
- (void)uploadTask:(id)arg1 didCompleteWithResponse:(id)arg2 error:(id)arg3;
- (void)uploadTask:(id)arg1 didUpdateToProgress:(double)arg2;
- (id)_buildWithContext:(id)arg1;
- (void)cancel;
- (id)buildForResumeWithComposition:(id)arg1 context:(id)arg2;
- (id)build;
- (void)uploadAudioWithAudioFileUrl:(id)arg1 uploadId:(id)arg2 uploadParams:(id)arg3 mediaKey:(id)arg4;
- (void)commitVideoUploadWithCoverImageSource:(id)arg1;
- (id)uploadVideoWithSource:(id)arg1 transcodeOptions:(id)arg2 videoSegmentsOutputFolderPath:(id)arg3 useFirstFrameForCoverPhoto:(_Bool)arg4 uploadId:(id)arg5 uploadParams:(id)arg6 additionalHeaders:(id)arg7 mediaKey:(id)arg8 shouldMeasureQuality:(_Bool)arg9;
- (void)uploadImageUploadModel:(id)arg1 uploadId:(id)arg2 uploadParams:(id)arg3 mediaKey:(id)arg4;
- (id)initWithUploadService:(id)arg1 uploadServicePath:(id)arg2 analyticsProvider:(id)arg3 waterfallId:(id)arg4 launcherSetProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

