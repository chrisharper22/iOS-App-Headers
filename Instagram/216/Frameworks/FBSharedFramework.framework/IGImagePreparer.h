//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IGImagePreparer : NSObject
{
    NSMutableSet *_decodedImagePrefetchUrlsSet;
}

- (void).cxx_destruct;
- (void)decodeCachedImageForURL:(id)arg1 module:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)decodeCachedImageForURL:(id)arg1 module:(id)arg2;
- (id)init;

@end
