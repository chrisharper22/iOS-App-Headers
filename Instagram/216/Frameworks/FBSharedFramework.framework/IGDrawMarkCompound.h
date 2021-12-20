//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDrawBrushMark-Protocol.h>

@class NSArray, NSString;
@protocol IGDrawBrushCommon;

@interface IGDrawMarkCompound : NSObject <IGDrawBrushMark>
{
    _Bool _supportsIncrementalDrawing;
    _Bool _hadToStopDueToFullBuffer;
    id <IGDrawBrushCommon> _brush;
    NSArray *_innerMarks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *innerMarks; // @synthesize innerMarks=_innerMarks;
@property(nonatomic) _Bool hadToStopDueToFullBuffer; // @synthesize hadToStopDueToFullBuffer=_hadToStopDueToFullBuffer;
@property(readonly, nonatomic) _Bool supportsIncrementalDrawing; // @synthesize supportsIncrementalDrawing=_supportsIncrementalDrawing;
@property(readonly, nonatomic) id <IGDrawBrushCommon> brush; // @synthesize brush=_brush;
- (void)idle;
- (void)endWith:(struct _IGDrawTouchSample)arg1;
- (void)addSample:(struct _IGDrawTouchSample)arg1;
- (void)startWith:(struct _IGDrawTouchSample)arg1;
- (void)drawIncremental;
- (void)draw;
- (void)prepareToDraw;
- (void)setColor:(id)arg1;
- (id)initWithBrush:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
