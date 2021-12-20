//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMediaUploadCache-Protocol.h>

@class IGCache, NSString;

@interface IGMediaUploadCacheWrapper : NSObject <FBMediaUploadCache>
{
    IGCache *_cache;
}

- (void).cxx_destruct;
- (void)removeItemForKey:(id)arg1;
- (void)cacheItem:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (void)fetchUploadJobDetailForKey:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchSegmentStreamDetailForKey:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

