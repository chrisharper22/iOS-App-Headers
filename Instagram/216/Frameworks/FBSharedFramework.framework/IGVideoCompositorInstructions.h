//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class AVVideoComposition, IGAudioMix, NSArray;

@interface IGVideoCompositorInstructions : NSObject <NSCopying, NSSecureCoding>
{
    AVVideoComposition *_avVideoComposition;
    _Bool _isInvalidVideoComposition;
    float _renderScale;
    NSArray *_instructions;
    IGAudioMix *_audioMix;
    struct CGSize _renderSize;
    CDStruct_1b6d18a9 _frameDuration;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithAVVideoComposition:(id)arg1 audioMix:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(readonly, copy, nonatomic) NSArray *instructions; // @synthesize instructions=_instructions;
@property(readonly, nonatomic) float renderScale; // @synthesize renderScale=_renderScale;
@property(readonly, nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 frameDuration; // @synthesize frameDuration=_frameDuration;
@property(readonly, nonatomic) AVVideoComposition *avVideoComposition;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

