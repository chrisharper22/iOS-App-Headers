//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBListViewScrollState : NSObject
{
    long long _rowIndex;
    double _scrollOffsetInCell;
    unsigned long long _scrollDirection;
    unsigned long long _preferredScrollPosition;
    struct CGPoint _fixedEdgeOffset;
}

@property(readonly, nonatomic) struct CGPoint fixedEdgeOffset; // @synthesize fixedEdgeOffset=_fixedEdgeOffset;
@property(readonly, nonatomic) unsigned long long preferredScrollPosition; // @synthesize preferredScrollPosition=_preferredScrollPosition;
@property(readonly, nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(readonly, nonatomic) double scrollOffsetInCell; // @synthesize scrollOffsetInCell=_scrollOffsetInCell;
@property(readonly, nonatomic) long long rowIndex; // @synthesize rowIndex=_rowIndex;
- (id)description;
- (id)initWithRowIndex:(long long)arg1 scrollOffsetInCell:(double)arg2 scrollDirection:(unsigned long long)arg3 preferredScrollPosition:(unsigned long long)arg4 fixedEdgeOffset:(struct CGPoint)arg5;

@end
