//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray;

@interface IGDirectAudioWaveform : FBValueObject <NSCopying, NSCoding>
{
    double _volumeRecordingInterval;
    NSArray *_averageVolume;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *averageVolume; // @synthesize averageVolume=_averageVolume;
@property(readonly, nonatomic) double volumeRecordingInterval; // @synthesize volumeRecordingInterval=_volumeRecordingInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithVolumeRecordingInterval:(double)arg1 averageVolume:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

