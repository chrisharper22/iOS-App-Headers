//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, NSURL, SNAnimationMultiImagesProvider;

@protocol SNAnimationMultiImagesProviderDelegate <NSObject>
- (void)imagesProvider:(SNAnimationMultiImagesProvider *)arg1 didFailWithError:(NSError *)arg2 url:(NSURL *)arg3 loadSource:(NSString *)arg4;
- (void)imagesProvider:(SNAnimationMultiImagesProvider *)arg1 didDownloadImages:(NSDictionary *)arg2 withLatencies:(NSDictionary *)arg3 totalBytes:(NSDictionary *)arg4 loadSource:(NSString *)arg5;
@end

