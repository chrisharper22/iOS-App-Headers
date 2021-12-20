//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSObject;
@protocol FBDepthDataManager, OS_dispatch_queue;

@protocol FBDepthCameraCaptureManaging <NSObject>
- (_Bool)isDepthCameraSupported;
- (void)stopDepthDataOutputCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(void))arg2;
- (void)startDepthDataOutputCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(void))arg2;

@optional
- (void)injectDepthDataManager:(id <FBDepthDataManager>)arg1;
- (_Bool)isDepthCameraEnabled;
@end

