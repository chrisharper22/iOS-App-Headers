//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMediaAsset-Protocol.h>

@class IGAsyncTask, IGGLKBackgroundRenderer, IGGLKCanvas, IGGLKSession, IGGLKTexture2D, NSArray, NSMutableArray, NSString, UIColor;

@interface IGGLKNode : NSObject <IGMediaAsset>
{
    _Bool _needsLayout;
    _Bool _needsUpdatedTransformationMatrices;
    NSMutableArray *_children;
    union _GLKMatrix4 _modelViewMatrix;
    IGGLKBackgroundRenderer *_backgroundRenderer;
    _Bool _hidden;
    _Bool _clipsToBounds;
    _Bool _userInteractionEnabled;
    double _alpha;
    UIColor *_backgroundColor;
    double _cornerRadius;
    IGGLKCanvas *_canvas;
    IGGLKNode *_parent;
    IGGLKTexture2D *_sampleTexture;
    IGGLKSession *_session;
    struct CGPoint _position;
    struct CGPoint _anchorPoint;
    struct CGRect _bounds;
    union _GLKMatrix4 _modelViewProjectionMatrix;
    struct CATransform3D _transform3D;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGGLKSession *session; // @synthesize session=_session;
@property(retain, nonatomic) IGGLKTexture2D *sampleTexture; // @synthesize sampleTexture=_sampleTexture;
@property(readonly, nonatomic) union _GLKMatrix4 modelViewProjectionMatrix; // @synthesize modelViewProjectionMatrix=_modelViewProjectionMatrix;
@property(nonatomic) __weak IGGLKNode *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak IGGLKCanvas *canvas; // @synthesize canvas=_canvas;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) _Bool clipsToBounds; // @synthesize clipsToBounds=_clipsToBounds;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CATransform3D transform3D; // @synthesize transform3D=_transform3D;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void)_updateModelViewProjectionMatrix;
- (void)_updateModelViewMatrix;
- (union _GLKMatrix4)_projectionMatrix;
- (union _GLKMatrix4)_localToParentTransform;
- (void)_setNeedsUpdatedTransformationMatrices;
- (union _GLKVector4)_convertVector:(union _GLKVector4)arg1 withMatrix:(union _GLKMatrix4)arg2;
- (struct CGPoint)_localPosition;
- (void)drawInContext:(id)arg1;
- (void)drawBackgroundInContext:(id)arg1;
- (void)setNeedsDisplay;
- (_Bool)requiresSampleTexture;
- (void)modelViewProjectionMatrixDidUpdate;
- (void)updateTransformationMatricesIfNeeded;
- (_Bool)pointInside:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGPoint)convertTranslation:(struct CGPoint)arg1 withEndPoint:(struct CGPoint)arg2 toNode:(id)arg3;
- (struct CGPoint)convertTranslation:(struct CGPoint)arg1 withEndPoint:(struct CGPoint)arg2 fromNode:(id)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 toNode:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromNode:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toNode:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromNode:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutChildren;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (void)didMoveToView;
- (void)willMoveToView:(id)arg1;
- (void)removeFromParent;
- (void)sendChildToBack:(id)arg1;
- (void)bringChildToFront:(id)arg1;
- (void)insertChild:(id)arg1 belowSibling:(id)arg2;
- (void)insertChild:(id)arg1 aboveSibling:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (void)addChild:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic) struct CGPoint center;
@property(nonatomic) struct CGRect frame;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;
- (id)initWithSession:(id)arg1;
- (id)renderer;
@property(readonly, nonatomic) IGAsyncTask *ig_preferredTransform;
@property(readonly, nonatomic) _Bool ig_isLoopable;
@property(readonly, nonatomic) double ig_mediaDuration;
@property(readonly, nonatomic) struct CGSize ig_mediaSize;
@property(readonly, nonatomic) IGAsyncTask *hasAudio;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
