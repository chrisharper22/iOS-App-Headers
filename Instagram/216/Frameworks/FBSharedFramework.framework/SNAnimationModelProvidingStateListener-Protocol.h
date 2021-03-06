//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSError, NSString, SNAnalyticsError, SNAnimationModelProvidingLoggingInfo;
@protocol SNAnimationModelProviding;

@protocol SNAnimationModelProvidingStateListener <NSObject>

@optional
- (void)modelProvider:(id <SNAnimationModelProviding>)arg1 detectError:(SNAnalyticsError *)arg2;
- (void)modelProviderDidCancelAllRequests:(id <SNAnimationModelProviding>)arg1;
- (void)modelProviderFinishFetchAllExtraAssets:(id <SNAnimationModelProviding>)arg1 error:(NSError *)arg2 loadSource:(NSString *)arg3 loggingInfo:(SNAnimationModelProvidingLoggingInfo *)arg4;
- (void)modelProviderStartFetchAllExtraAssets:(id <SNAnimationModelProviding>)arg1;
- (void)modelProviderFinishFetchAllAssets:(id <SNAnimationModelProviding>)arg1 error:(NSError *)arg2 loadSource:(NSString *)arg3 loggingInfo:(SNAnimationModelProvidingLoggingInfo *)arg4;
- (void)modelProviderStartFetchAllAssets:(id <SNAnimationModelProviding>)arg1;
- (void)modelProviderFinishFetchAnimation:(id <SNAnimationModelProviding>)arg1 error:(NSError *)arg2 loadSource:(NSString *)arg3 loggingInfo:(SNAnimationModelProvidingLoggingInfo *)arg4;
- (void)modelProviderStartFetchAnimation:(id <SNAnimationModelProviding>)arg1;
@end

