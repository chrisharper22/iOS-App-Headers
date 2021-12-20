//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGLKNode.h>

@class IGGLKRenderer;

@interface IGBoomerangVCRRewindFilterNode : IGGLKNode
{
    IGGLKRenderer *_programRenderer;
    _Bool _attributesNeedUpdate;
    _Bool _amplitudeNeedsUpdate;
    _Bool _frequencyNeedsUpdate;
    double _amplitude;
    double _frequency;
}

- (void).cxx_destruct;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
- (id)_positionAttributeWithPoint:(struct CGPoint)arg1;
- (void)_updateAttributes;
- (void)drawInContext:(id)arg1;
- (void)modelViewProjectionMatrixDidUpdate;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)requiresSampleTexture;
- (id)init;

@end

