//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAAnimation, NSArray, NSString, UIBezierPath, UIColor;

@interface FBShapeView : UIView
{
    UIBezierPath *_path;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    NSString *_lineJoin;
    CDUnknownBlockType _pathFunction;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType pathFunction; // @synthesize pathFunction=_pathFunction;
@property(copy, nonatomic) NSString *lineJoin; // @synthesize lineJoin=_lineJoin;
@property(copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updatePath;
- (void)layoutSubviews;
@property(copy, nonatomic) CAAnimation *templatePathAnimation;
@property(copy, nonatomic) NSArray *lineDashPattern;
@property(nonatomic) double lineDashPhase;
@property(copy, nonatomic) NSString *lineCap;
@property(nonatomic) double miterLimit;
@property(nonatomic) double lineWidth;
@property(nonatomic) double strokeEnd;
@property(nonatomic) double strokeStart;
@property(copy, nonatomic) NSString *fillRule;
- (void)setFillColor:(id)arg1 animated:(_Bool)arg2;
- (id)shapeLayer;

@end

