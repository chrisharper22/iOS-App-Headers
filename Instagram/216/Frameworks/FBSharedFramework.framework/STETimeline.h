//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface STETimeline : NSObject
{
    NSString *_auxAudioFile;
    NSMutableArray *_intensity;
    NSMutableArray *_variation;
    NSMutableArray *_speed;
    NSMutableArray *_volume;
    NSMutableArray *_auxVolume;
    NSMutableArray *_segment;
    NSMutableArray *_timestretchLimits;
    CDStruct_1b6d18a9 _length;
    CDStruct_1b6d18a9 _outroLength;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *timestretchLimits; // @synthesize timestretchLimits=_timestretchLimits;
@property(readonly) NSMutableArray *segment; // @synthesize segment=_segment;
@property(readonly) NSMutableArray *auxVolume; // @synthesize auxVolume=_auxVolume;
@property(readonly) NSMutableArray *volume; // @synthesize volume=_volume;
@property(readonly) NSMutableArray *speed; // @synthesize speed=_speed;
@property(readonly) NSMutableArray *variation; // @synthesize variation=_variation;
@property(readonly) NSMutableArray *intensity; // @synthesize intensity=_intensity;
@property(readonly) NSString *auxAudioFile; // @synthesize auxAudioFile=_auxAudioFile;
@property(readonly) CDStruct_1b6d18a9 outroLength; // @synthesize outroLength=_outroLength;
@property(readonly) CDStruct_1b6d18a9 length; // @synthesize length=_length;
- (void)generateComposition:(id)arg1 composition:(struct SoundtrackComposition *)arg2 error:(id *)arg3;
- (id)reduceSeriesNaive:(id)arg1;
- (void)simplifyKeyframes:(int)arg1 epsilon:(double)arg2;
- (void)clearKeyframes:(CDStruct_1b6d18a9)arg1 end:(CDStruct_1b6d18a9)arg2 parameter:(int)arg3;
- (_Bool)setTimestretchLimits:(double)arg1 max:(double)arg2;
- (id)segments;
- (_Bool)defineSegment:(CDStruct_1b6d18a9)arg1 error:(id *)arg2;
- (id)auxVolumes;
- (_Bool)addAuxVolume:(CDStruct_1b6d18a9)arg1 value:(double)arg2 error:(id *)arg3;
- (id)keyframes:(int)arg1;
- (_Bool)addSpeed:(CDStruct_1b6d18a9)arg1 value:(double)arg2 error:(id *)arg3;
- (_Bool)addVolume:(CDStruct_1b6d18a9)arg1 value:(double)arg2 error:(id *)arg3;
- (_Bool)addVariation:(CDStruct_1b6d18a9)arg1 value:(double)arg2 error:(id *)arg3;
- (_Bool)addIntensity:(CDStruct_1b6d18a9)arg1 value:(double)arg2 error:(id *)arg3;
- (unsigned long long)binarySearchInsertionPosition:(id)arg1 ofKeyframe:(id)arg2 withOptions:(unsigned long long)arg3;
- (unsigned long long)binarySearchInsertionPosition:(id)arg1 ofKeyframe:(id)arg2;
- (unsigned long long)binarySearchInsertionPosition:(id)arg1 ofNumber:(id)arg2 withOptions:(unsigned long long)arg3;
- (unsigned long long)binarySearchInsertionPosition:(id)arg1 ofNumber:(id)arg2;
- (_Bool)addAuxAudio:(id)arg1;
- (_Bool)hasOutro;
- (_Bool)addOutroWithLength:(CDStruct_1b6d18a9)arg1;
- (_Bool)addOutro;
- (id)init:(CDStruct_1b6d18a9)arg1;

@end

