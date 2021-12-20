//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString, UIColor;
@protocol IGDrawBrushMark, IGDrawDynamics;

@protocol IGDrawBrushCommon <NSObject>
@property(nonatomic) double spacing;
@property(retain, nonatomic) id <IGDrawDynamics> brushDynamics;
@property(nonatomic) struct _GLKMatrix4 projection;
@property(nonatomic) struct CGSize backingSize;
@property(readonly, nonatomic) _Bool isInternal;
@property(readonly, nonatomic) _Bool ignoresColor;
@property(readonly, nonatomic) double defaultSize;
@property(readonly, nonatomic) double maxSize;
@property(readonly, nonatomic) double minSize;
@property(nonatomic) double size;
@property(readonly, nonatomic) NSString *name;
@property(retain, nonatomic) UIColor *color;
- (void)prepareToDraw;
- (id <IGDrawBrushMark>)createMark;
@end

