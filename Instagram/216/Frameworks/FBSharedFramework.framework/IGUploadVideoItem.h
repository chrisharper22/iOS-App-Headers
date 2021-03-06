//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGImageUploadSource, IGVideoSource, IGVideoTranscodeOptions, NSDictionary, NSString;

@interface IGUploadVideoItem : FBValueObject <NSCopying, NSCoding>
{
    _Bool _useFirstFrameForCoverPhoto;
    _Bool _shouldMeasureQuality;
    IGVideoSource *_videoSource;
    IGVideoTranscodeOptions *_transcodeOptions;
    NSString *_videoSegmentsOutputFolderPath;
    IGImageUploadSource *_coverPhotoImageSource;
    NSString *_uploadId;
    NSDictionary *_uploadParams;
    NSDictionary *_additionalHeaders;
    NSString *_mediaKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldMeasureQuality; // @synthesize shouldMeasureQuality=_shouldMeasureQuality;
@property(readonly, copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(readonly, copy, nonatomic) NSDictionary *uploadParams; // @synthesize uploadParams=_uploadParams;
@property(readonly, copy, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(readonly, nonatomic) _Bool useFirstFrameForCoverPhoto; // @synthesize useFirstFrameForCoverPhoto=_useFirstFrameForCoverPhoto;
@property(readonly, copy, nonatomic) IGImageUploadSource *coverPhotoImageSource; // @synthesize coverPhotoImageSource=_coverPhotoImageSource;
@property(readonly, copy, nonatomic) NSString *videoSegmentsOutputFolderPath; // @synthesize videoSegmentsOutputFolderPath=_videoSegmentsOutputFolderPath;
@property(readonly, copy, nonatomic) IGVideoTranscodeOptions *transcodeOptions; // @synthesize transcodeOptions=_transcodeOptions;
@property(readonly, copy, nonatomic) IGVideoSource *videoSource; // @synthesize videoSource=_videoSource;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithVideoSource:(id)arg1 transcodeOptions:(id)arg2 videoSegmentsOutputFolderPath:(id)arg3 coverPhotoImageSource:(id)arg4 useFirstFrameForCoverPhoto:(_Bool)arg5 uploadId:(id)arg6 uploadParams:(id)arg7 additionalHeaders:(id)arg8 mediaKey:(id)arg9 shouldMeasureQuality:(_Bool)arg10;
- (id)initWithCoder:(id)arg1;
- (id)isInvalid;

@end

