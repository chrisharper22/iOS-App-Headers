//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface IGSeenStateObject : NSObject
{
    NSObject *_lock;
    NSMutableDictionary *_viewInfoKeyToViewInfosMutable;
    NSMutableSet *_seenIDsMutable;
}

- (void).cxx_destruct;
- (void)_appendSeenIDs:(id)arg1;
- (void)removeSeenIDs:(id)arg1;
- (void)removeSeenID:(id)arg1;
- (void)appendSeenID:(id)arg1;
- (void)removeViewInfoForKey:(id)arg1;
- (void)addViewInfo:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *viewInfoKeyToViewInfos;
@property(readonly, nonatomic) NSSet *seenIDs;
- (id)seenStateObjectData;
- (id)_initWithSeenIDs:(id)arg1 seenStateViewInfos:(id)arg2;
- (id)initWithSeenStateObjectData:(id)arg1 analyticsLogger:(id)arg2;
- (id)init;

@end

