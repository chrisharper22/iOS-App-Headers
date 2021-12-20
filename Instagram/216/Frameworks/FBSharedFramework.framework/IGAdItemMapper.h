//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSCache, NSMapTable;
@protocol OS_dispatch_queue;

@interface IGAdItemMapper : NSObject <NSSecureCoding, NSCopying>
{
    NSMapTable *_mapper;
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_clear;
- (void)_mapAdItem:(id)arg1 toObject:(id)arg2;
- (id)getAdItemObjectForObject:(id)arg1;
- (void)mapAdItemObject:(id)arg1 toObject:(id)arg2;
- (void)dealloc;
- (id)initWithCache:(_Bool)arg1;
- (id)init;

@end

