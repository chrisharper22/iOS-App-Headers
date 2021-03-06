//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkLayer-Protocol.h>

@class IGDiskCache, NSString;
@protocol IGNetworkLayer;

@interface IGNetworkCacheLayer : NSObject <IGNetworkLayer>
{
    id <IGNetworkLayer> _nextLayer;
    IGDiskCache *_diskCache;
}

- (void).cxx_destruct;
- (void)clearCache;
- (void)_write:(id)arg1 toKey:(id)arg2;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbacks:(id)arg3;
- (id)initWithNextLayer:(id)arg1 diskCache:(id)arg2 queueExecutor:(CDUnknownBlockType)arg3;
- (id)initWithNextLayer:(id)arg1 diskCapacityInMB:(unsigned long long)arg2 diskCacheName:(id)arg3 useLenientFileCountLimit:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

