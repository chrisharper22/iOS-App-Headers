//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class AVAsset, PHAsset;

@protocol IGDirectGalleryMediaRequesting <NSObject>
- (void)requestVideoWithAVAsset:(AVAsset *)arg1 successBlock:(void (^)(IGVideoComposition *, IGImageEncoding *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)requestVideoWithAsset:(PHAsset *)arg1 successBlock:(void (^)(IGVideoComposition *, IGImageEncoding *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)requestPhotoWithAsset:(PHAsset *)arg1 successBlock:(void (^)(IGImageEncoding *))arg2 failureBlock:(void (^)(NSError *))arg3;
@end
