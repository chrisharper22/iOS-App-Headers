//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveImageFetcher, NSDictionary, NSURL, UIImage;

@protocol IGLiveImageFetcherDelegate <NSObject>
- (void)imageFetcher:(IGLiveImageFetcher *)arg1 didFailToLoadImageForUrl:(NSURL *)arg2 userInfo:(NSDictionary *)arg3;
- (void)imageFetcher:(IGLiveImageFetcher *)arg1 didLoadImage:(UIImage *)arg2 forUrl:(NSURL *)arg3 userInfo:(NSDictionary *)arg4 supportTier:(long long)arg5;
@end
