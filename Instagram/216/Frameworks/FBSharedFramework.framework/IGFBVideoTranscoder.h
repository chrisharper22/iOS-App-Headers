//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGVideoTranscoderProtocol-Protocol.h>

@class FBVideoSegmentedTranscoder, IGTranscoderConfig, NSMutableArray, NSString;
@protocol IGUserLauncherSetProviding;

@interface IGFBVideoTranscoder : NSObject <IGVideoTranscoderProtocol>
{
    IGTranscoderConfig *_config;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    FBVideoSegmentedTranscoder *_transcoder;
    NSMutableArray *_segments;
    CDUnknownBlockType _completionBlock;
    CDStruct_1b6d18a9 _startPresentationTime;
    unsigned long long _segmentIndex;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)startWithProgress:(CDUnknownBlockType)arg1 segmentStart:(CDUnknownBlockType)arg2 segmentCompletion:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 imageCompletion:(CDUnknownBlockType)arg5;
- (void)_createDirectoryIfNeeded:(id *)arg1;
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 config:(id)arg4 mediaProcessor:(id)arg5 transcodeTracer:(id)arg6 launcherSetProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
