//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, UIColor;

@interface IGCoreGraphicsNode : NSObject <NSSecureCoding>
{
    NSMutableArray *_children;
    _Bool _masksToBounds;
    IGCoreGraphicsNode *_parent;
    IGCoreGraphicsNode *_maskNode;
    double _contentScaleFactor;
    double _cornerRadius;
    double _alpha;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    double _borderWidth;
    UIColor *_shadowColor;
    double _shadowOpacity;
    double _shadowRadius;
    struct CGPoint _position;
    struct CGPoint _anchorPoint;
    struct CGSize _shadowOffset;
    struct CGRect _bounds;
    struct CATransform3D _transform;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool masksToBounds; // @synthesize masksToBounds=_masksToBounds;
@property(nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor=_contentScaleFactor;
@property(nonatomic) struct CATransform3D transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) IGCoreGraphicsNode *maskNode; // @synthesize maskNode=_maskNode;
@property(nonatomic) __weak IGCoreGraphicsNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) struct CGPoint bottomRightCorner;
@property(readonly, nonatomic) struct CGPoint bottomLeftCorner;
@property(readonly, nonatomic) struct CGPoint upperRightCorner;
@property(readonly, nonatomic) struct CGPoint upperLeftCorner;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)removeFromParent;
- (void)addChild:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
@property(nonatomic) struct CGRect frame;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

