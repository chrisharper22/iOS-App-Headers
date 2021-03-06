//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class IGAsyncTask, IGAudioMusicTrack;

@interface IGAudioMusicTrackClip : NSObject <NSCopying, NSSecureCoding>
{
    IGAsyncTask *_audioClipAsset;
    IGAudioMusicTrack *_musicTrack;
    double _startTimeInComposition;
    CDStruct_e83c9415 _timeRange;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) double startTimeInComposition; // @synthesize startTimeInComposition=_startTimeInComposition;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) IGAudioMusicTrack *musicTrack; // @synthesize musicTrack=_musicTrack;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) IGAsyncTask *audioClipAsset; // @synthesize audioClipAsset=_audioClipAsset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMusicTrack:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 startTimeInComposition:(double)arg3;
- (id)initWithMusicTrack:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;

@end

