//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAudioConfig, IGSegmentsConfig, IGVideoComposition, IGVideoConfig, IGVideoTranscodeOptions, NSString;

@interface IGMediaUploadTranscodeConfig : NSObject
{
    IGVideoTranscodeOptions *_transcodeOptions;
    IGVideoComposition *_composition;
    IGVideoConfig *_videoConfig;
    IGAudioConfig *_audioConfig;
    IGSegmentsConfig *_segmentsConfig;
    NSString *_mediaID;
    NSString *_uploadID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
@property(readonly, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, nonatomic) IGSegmentsConfig *segmentsConfig; // @synthesize segmentsConfig=_segmentsConfig;
@property(readonly, nonatomic) IGAudioConfig *audioConfig; // @synthesize audioConfig=_audioConfig;
@property(readonly, nonatomic) IGVideoConfig *videoConfig; // @synthesize videoConfig=_videoConfig;
@property(readonly, nonatomic) IGVideoComposition *composition; // @synthesize composition=_composition;
@property(readonly, nonatomic) IGVideoTranscodeOptions *transcodeOptions; // @synthesize transcodeOptions=_transcodeOptions;
- (id)initWithTranscodeOptions:(id)arg1 composition:(id)arg2 videoConfig:(id)arg3 audioConfig:(id)arg4 segmentsConfig:(id)arg5 mediaID:(id)arg6 uploadID:(id)arg7;

@end

