//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/KFComponent.h>

@class CALayer, KFCAShapeLayer, NSMutableSet;
@protocol KFCALayerProtocol;

@interface KFCALayerComponent : KFComponent
{
    NSMutableSet *_auxiliaryLayers;
    CALayer<KFCALayerProtocol> *_topAttachmentLayer;
    CALayer<KFCALayerProtocol> *_topAttachmentLayerCompatibility;
    CALayer<KFCALayerProtocol> *_transformLayerFrame;
    CALayer<KFCALayerProtocol> *_bottomAttachmentLayer;
    KFCAShapeLayer *_strokeLayer;
    KFCAShapeLayer *_fillLayer;
    KFCAShapeLayer *_shapeLayer;
}

+ (unsigned short)componentClassIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) KFCAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) KFCAShapeLayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(retain, nonatomic) KFCAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) CALayer<KFCALayerProtocol> *bottomAttachmentLayer; // @synthesize bottomAttachmentLayer=_bottomAttachmentLayer;
@property(retain, nonatomic) CALayer<KFCALayerProtocol> *transformLayerFrame; // @synthesize transformLayerFrame=_transformLayerFrame;
@property(retain, nonatomic) CALayer<KFCALayerProtocol> *topAttachmentLayerCompatibility; // @synthesize topAttachmentLayerCompatibility=_topAttachmentLayerCompatibility;
@property(retain, nonatomic) CALayer<KFCALayerProtocol> *topAttachmentLayer; // @synthesize topAttachmentLayer=_topAttachmentLayer;
- (id)layersWithTag:(id)arg1;
- (void)enumerateLayersWithBlock:(CDUnknownBlockType)arg1;
- (void)addAuxiliaryLayer:(id)arg1;

@end

