//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, SNAnalyticsData, SNPlaybackItem;
@protocol NSObject, OS_dispatch_queue;

@protocol SNAnimationDownloading <NSObject>
- (void)cancelAnimationDownload:(id <NSObject>)arg1;
- (id <NSObject>)downloadAnimationWithPlaybackItem:(SNPlaybackItem *)arg1 analyticsData:(SNAnalyticsData *)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(SNAnimationDownloadingResponseModel *, NSError *, NSString *))arg4;
@end

