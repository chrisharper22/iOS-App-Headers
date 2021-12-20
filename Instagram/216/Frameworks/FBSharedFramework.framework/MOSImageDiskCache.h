//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/MOSDiskCaching-Protocol.h>

@class FBIGBasedDiskCache, NSString;

@interface MOSImageDiskCache : NSObject <MOSDiskCaching>
{
    FBIGBasedDiskCache *_diskCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBIGBasedDiskCache *diskCache; // @synthesize diskCache=_diskCache;
- (void)_sessionDidInvalidate:(id)arg1;
- (id)getAllKeys;
- (void)deleteCachedDataForKey:(id)arg1;
- (_Bool)containsImageDataForKey:(id)arg1;
- (void)clear:(CDUnknownBlockType)arg1;
- (void)setImageData:(id)arg1 forKey:(id)arg2;
- (id)imageDataForKey:(id)arg1;
- (id)initWithDiskCache:(id)arg1 experimentConfig:(CDStruct_b31ca263)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

