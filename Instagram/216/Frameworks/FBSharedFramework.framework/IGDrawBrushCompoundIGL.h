//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDrawBrushBaseIGL.h>

@class NSArray;

@interface IGDrawBrushCompoundIGL : IGDrawBrushBaseIGL
{
    NSArray *_brushes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *brushes; // @synthesize brushes=_brushes;
- (id)createMark;
- (void)setProjection:(struct _GLKMatrix4)arg1;
- (void)prepareToDraw;
- (void)setBackingSize:(struct CGSize)arg1;
- (shared_ptr_8b9aca12)material;
- (shared_ptr_9261a1f4)vertexInputState;
- (id)canvasRenderer;
- (id)initWithBrushes:(id)arg1;

@end

