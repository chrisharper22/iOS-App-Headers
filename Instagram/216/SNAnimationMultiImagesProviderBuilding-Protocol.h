//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSOrderedSet, NSString, SNAnimationMultiImagesProvider;
@protocol OS_dispatch_queue;

@protocol SNAnimationMultiImagesProviderBuilding <NSObject>
- (SNAnimationMultiImagesProvider *)buildAnimationMultiImagesProviderWithImageURLs:(NSOrderedSet *)arg1 contextID:(NSString *)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3;
@end

