//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, IGVideoConfiguration, NSString, NSURL;
@protocol IGVideoWriterDelegate, OS_dispatch_queue;

@interface IGVideoWriter : NSObject
{
    _Bool _useTemporaryDirectory;
    _Bool _videoWritingIsFinished;
    _Bool _audioWritingIsFinished;
    id <IGVideoWriterDelegate> _delegate;
    double _progress;
    NSURL *_outputFileURL;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInput *_audioWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_bufferAdaptor;
    NSObject<OS_dispatch_queue> *_videoQueue;
    NSObject<OS_dispatch_queue> *_audioQueue;
    IGVideoConfiguration *_videoConfiguration;
    NSString *_locationMetadataName;
    double _videoAvgBitRate;
    long long _audioAvgBitRate;
    NSString *_urlBase;
    struct CGSize _size;
    CDStruct_1b6d18a9 _videoDuration;
    struct CGAffineTransform _transform;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *urlBase; // @synthesize urlBase=_urlBase;
@property(readonly, nonatomic) long long audioAvgBitRate; // @synthesize audioAvgBitRate=_audioAvgBitRate;
@property(readonly, nonatomic) double videoAvgBitRate; // @synthesize videoAvgBitRate=_videoAvgBitRate;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) NSString *locationMetadataName; // @synthesize locationMetadataName=_locationMetadataName;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) IGVideoConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(nonatomic) _Bool audioWritingIsFinished; // @synthesize audioWritingIsFinished=_audioWritingIsFinished;
@property(nonatomic) _Bool videoWritingIsFinished; // @synthesize videoWritingIsFinished=_videoWritingIsFinished;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue; // @synthesize videoQueue=_videoQueue;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *bufferAdaptor; // @synthesize bufferAdaptor=_bufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *audioWriterInput; // @synthesize audioWriterInput=_audioWriterInput;
@property(retain, nonatomic) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak id <IGVideoWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startWriting;
- (id)initWithVideoConfiguration:(id)arg1 videoAvgBitRate:(double)arg2 audioAvgBitRate:(long long)arg3 size:(struct CGSize)arg4 duration:(CDStruct_1b6d18a9)arg5 locationMetadataName:(id)arg6 transform:(struct CGAffineTransform)arg7 urlBase:(id)arg8 launcherSet:(id)arg9;
- (void)dealloc;

@end

