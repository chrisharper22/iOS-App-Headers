//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSet.h>

@interface NSSet (FBCollectionAdditions)
- (id)deepImmutableCopy;
@property(readonly, nonatomic) id onlyObject;
- (id)firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)allObjectsPassTest:(CDUnknownBlockType)arg1;
- (_Bool)containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)dictionaryByGroupingWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlockWithKey:(CDUnknownBlockType)arg2;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlock:(CDUnknownBlockType)arg2;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryWithKeyPath:(id)arg1;
- (id)dictionaryWithKey:(id)arg1;
- (id)arrayByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)arrayByPerformingSelector:(SEL)arg1;
- (id)setByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)setByPerformingSelector:(SEL)arg1;
@end
