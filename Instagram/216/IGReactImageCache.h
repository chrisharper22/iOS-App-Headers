//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTImageCache-Protocol.h"

@class NSString;

@interface IGReactImageCache : NSObject <RCTImageCache>
{
}

- (void)addImageToCache:(id)arg1 URL:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4 resizeMode:(long long)arg5 response:(id)arg6;
- (id)imageForUrl:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4;
- (void)_clearCache;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

