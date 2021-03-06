//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

#import <FBSharedFramework/KFAnimationLayerProtocol-Protocol.h>

@class CALayer, KFAnimationBuilder, KFAnimationBuilderContext, KFDecodedAsset, NSMutableArray, NSString;

@interface KFAnimationLayer : CAShapeLayer <KFAnimationLayerProtocol>
{
    KFDecodedAsset *_decodedAsset;
    KFAnimationBuilder *_animationBuilder;
    KFAnimationBuilderContext *_animationBuilderContext;
    const struct Document *_document;
    const struct Layer *_layer;
    NSMutableArray *_animations;
    double _width;
    double _height;
    double _progressOffset;
    unsigned long long _options;
}

- (void).cxx_destruct;
- (id)_applyMatte:(id)arg1 toLayer:(id)arg2;
- (id)_subdocumentAsset;
- (void)resetAnimations;
- (void)setRepeatCount:(float)arg1;
@property(readonly, nonatomic) int layerID;
@property(readonly, nonatomic) KFAnimationBuilderContext *animationBuilderContext;
- (void)addAnimations:(id)arg1;
@property(readonly, nonatomic) CALayer *caLayer;
- (struct CGRect)hitRegionBounds;
- (_Bool)hitTestPoint:(struct CGPoint)arg1 allowHitTransparentLayer:(_Bool)arg2 outHitRegionBounds:(out struct CGRect *)arg3;
- (void)_enumerateAnimationLayersWithBlock:(CDUnknownBlockType)arg1 currentCALayer:(id)arg2 stop:(out _Bool *)arg3;
- (void)enumerateAnimationLayersWithBlock:(CDUnknownBlockType)arg1;
- (id)_createSublayer:(const struct Layer *)arg1;
- (id)initWithDecodedAsset:(id)arg1 layer:(const struct Layer *)arg2;
- (void)_applySublayers;
- (void)_applyMasks;
- (void)_applySubdocument;
- (void)_applyContent;
- (void)_applyCommonLayerAnimations;
- (void)_applyDimensions;
- (id)initWithDecodedAsset:(id)arg1 layer:(const struct Layer *)arg2 progressOffset:(double)arg3 options:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

