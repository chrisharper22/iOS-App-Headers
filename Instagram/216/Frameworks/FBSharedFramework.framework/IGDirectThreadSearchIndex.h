//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IGDirectThreadSearchIndex : NSObject
{
    NSMutableDictionary *_buckets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableDictionary *buckets; // @synthesize buckets=_buckets;
- (id)_bucketsForThread:(id)arg1;
- (void)_addThreads:(id)arg1;
- (id)threadsInBucket:(id)arg1;
- (id)initWithThreads:(id)arg1;

@end

