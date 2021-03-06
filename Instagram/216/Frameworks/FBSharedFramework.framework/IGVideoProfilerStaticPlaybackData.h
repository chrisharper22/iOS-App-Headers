//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGVideoProfilerDashMetadata, NSString;

@interface IGVideoProfilerStaticPlaybackData : NSObject
{
    _Bool _isLive;
    _Bool _isFacebookVideo;
    NSString *_mediaId;
    NSString *_playerVersion;
    NSString *_playerId;
    NSString *_playerOrigin;
    NSString *_streamingFormat;
    IGVideoProfilerDashMetadata *_dashMetadata;
    NSString *_loomTraceID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *loomTraceID; // @synthesize loomTraceID=_loomTraceID;
@property(readonly, nonatomic) IGVideoProfilerDashMetadata *dashMetadata; // @synthesize dashMetadata=_dashMetadata;
@property(readonly, nonatomic) _Bool isFacebookVideo; // @synthesize isFacebookVideo=_isFacebookVideo;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) NSString *streamingFormat; // @synthesize streamingFormat=_streamingFormat;
@property(readonly, nonatomic) NSString *playerOrigin; // @synthesize playerOrigin=_playerOrigin;
@property(readonly, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
@property(readonly, nonatomic) NSString *playerVersion; // @synthesize playerVersion=_playerVersion;
@property(readonly, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (id)initWithMediaId:(id)arg1 playerVersion:(id)arg2 playerId:(id)arg3 playerOrigin:(id)arg4 streamingFormat:(id)arg5 isLive:(_Bool)arg6 isFacebookVideo:(_Bool)arg7 dashMetadata:(id)arg8 loomTraceID:(id)arg9;
- (id)videoId;

@end

