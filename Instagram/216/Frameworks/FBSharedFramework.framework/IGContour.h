//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IGContour : NSObject
{
    NSMutableDictionary *_vertexToNeighborsMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *vertexToNeighborsMap; // @synthesize vertexToNeighborsMap=_vertexToNeighborsMap;
- (void)addEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)init;

@end

