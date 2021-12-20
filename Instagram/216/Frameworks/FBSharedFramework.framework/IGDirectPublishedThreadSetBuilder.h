//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface IGDirectPublishedThreadSetBuilder : NSObject
{
    NSMutableArray *_threadsToAdd;
    NSMutableSet *_threadsIdsToRemove;
}

+ (id)builderWithThreadsSet:(id)arg1;
+ (id)builder;
- (void).cxx_destruct;
- (id)build;
- (id)removeThreadsWithIds:(id)arg1;
- (id)removeThreadWithId:(id)arg1;
- (id)addThreadsFromThreadSet:(id)arg1;
- (id)addThreads:(id)arg1;
- (id)addThread:(id)arg1;
- (id)init;

@end
