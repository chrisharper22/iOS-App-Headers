//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSURL;

@interface FNFMediaPresentationDescription : NSObject
{
    _Bool _isDynamic;
    _Bool _isFragmented;
    _Bool _isPredictive;
    _Bool _isManifestService;
    _Bool _containsUsingASRCaptions;
    unsigned int _durationMS;
    unsigned long long _source;
    unsigned long long _timelineType;
    long long _videoType;
    double _publishFrameTimeMS;
    long long _minimumUpdatePeriodMs;
    NSString *_mpdAccessibilityDescription;
    NSDate *_availabilityEndTime;
    NSDate *_publishTime;
    long long _firstAvTimeMS;
    long long _currentServerTimeMs;
    long long _lastVideoFrameTimeMs;
    NSString *_liveTraceStreamId;
    NSString *_liveTraceStreamType;
    NSURL *_url;
    NSString *_uploadMosTags;
    NSString *_uploadMosConfidenceTags;
    NSString *_manifestIdentifier;
    NSArray *_videoTracks;
    NSArray *_audioTracks;
    NSArray *_captionTracks;
}

+ (id)prettyPrintXML:(id)arg1;
+ (id)getContentProtectionMode:(const void *)arg1;
+ (id)getKeyId:(const void *)arg1;
+ (id)getPssh:(const void *)arg1;
+ (struct _NSRange)rangeFromStartToEndString:(id)arg1;
+ (id)urlFromBase:(id)arg1 suffix:(id)arg2;
+ (id)_presentationDescriptionWithContentsOfXml:(id)arg1 mpdUrl:(id)arg2 config:(struct FNFMpdConfig)arg3 source:(unsigned long long)arg4 currentTime:(id)arg5 error:(id *)arg6;
+ (id)presentationDescriptionWithContentsOfXml:(id)arg1 mpdUrl:(id)arg2 config:(struct FNFMpdConfig)arg3 source:(unsigned long long)arg4 error:(id *)arg5;
+ (id)presentationDescriptionWithContentsOfXml:(id)arg1 mpdUrl:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *captionTracks; // @synthesize captionTracks=_captionTracks;
@property(readonly, copy, nonatomic) NSArray *audioTracks; // @synthesize audioTracks=_audioTracks;
@property(readonly, copy, nonatomic) NSArray *videoTracks; // @synthesize videoTracks=_videoTracks;
@property(readonly, copy, nonatomic) NSString *manifestIdentifier; // @synthesize manifestIdentifier=_manifestIdentifier;
@property(readonly, copy, nonatomic) NSString *uploadMosConfidenceTags; // @synthesize uploadMosConfidenceTags=_uploadMosConfidenceTags;
@property(readonly, copy, nonatomic) NSString *uploadMosTags; // @synthesize uploadMosTags=_uploadMosTags;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *liveTraceStreamType; // @synthesize liveTraceStreamType=_liveTraceStreamType;
@property(readonly, copy, nonatomic) NSString *liveTraceStreamId; // @synthesize liveTraceStreamId=_liveTraceStreamId;
@property(readonly, nonatomic) long long lastVideoFrameTimeMs; // @synthesize lastVideoFrameTimeMs=_lastVideoFrameTimeMs;
@property(readonly, nonatomic) long long currentServerTimeMs; // @synthesize currentServerTimeMs=_currentServerTimeMs;
@property(readonly, nonatomic) long long firstAvTimeMS; // @synthesize firstAvTimeMS=_firstAvTimeMS;
@property(readonly, copy, nonatomic) NSDate *publishTime; // @synthesize publishTime=_publishTime;
@property(readonly, copy, nonatomic) NSDate *availabilityEndTime; // @synthesize availabilityEndTime=_availabilityEndTime;
@property(readonly, copy, nonatomic) NSString *mpdAccessibilityDescription; // @synthesize mpdAccessibilityDescription=_mpdAccessibilityDescription;
@property(readonly, nonatomic) long long minimumUpdatePeriodMs; // @synthesize minimumUpdatePeriodMs=_minimumUpdatePeriodMs;
@property(readonly, nonatomic) double publishFrameTimeMS; // @synthesize publishFrameTimeMS=_publishFrameTimeMS;
@property(readonly, nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(readonly, nonatomic) unsigned int durationMS; // @synthesize durationMS=_durationMS;
@property(readonly, nonatomic) unsigned long long timelineType; // @synthesize timelineType=_timelineType;
@property(readonly, nonatomic) _Bool containsUsingASRCaptions; // @synthesize containsUsingASRCaptions=_containsUsingASRCaptions;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool isManifestService; // @synthesize isManifestService=_isManifestService;
@property(readonly, nonatomic) _Bool isPredictive; // @synthesize isPredictive=_isPredictive;
@property(readonly, nonatomic) _Bool isFragmented; // @synthesize isFragmented=_isFragmented;
@property(readonly, nonatomic) _Bool isDynamic; // @synthesize isDynamic=_isDynamic;
- (id)initWithAudioTracks:(id)arg1 videoTracks:(id)arg2 captionTracks:(id)arg3 isDynamic:(_Bool)arg4 isFragmented:(_Bool)arg5 durationMS:(unsigned int)arg6 videoType:(long long)arg7 mpdAccessibilityDescription:(id)arg8 publishFrameTime:(unsigned long long)arg9 minimumUpdatePeriodMs:(long long)arg10 availabilityEndTime:(id)arg11 publishTime:(id)arg12 firstAvTimeMS:(long long)arg13 currentServerTimeMs:(long long)arg14 lastVideoFrameTimeMs:(long long)arg15 isPredictive:(_Bool)arg16 isManifestService:(_Bool)arg17 containsUsingASRCaptions:(_Bool)arg18 timelineType:(unsigned long long)arg19 liveTraceStreamId:(id)arg20 liveTraceStreamType:(id)arg21 uploadMosTags:(id)arg22 uploadMosConfidenceTags:(id)arg23 mpdUrl:(id)arg24 source:(unsigned long long)arg25 manifestIdentifier:(id)arg26;

@end

