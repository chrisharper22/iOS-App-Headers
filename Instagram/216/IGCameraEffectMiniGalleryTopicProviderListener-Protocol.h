//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCameraEffectMiniGalleryTopicProvider, NSError;

@protocol IGCameraEffectMiniGalleryTopicProviderListener <NSObject>
- (void)cameraEffectTopicProvider:(IGCameraEffectMiniGalleryTopicProvider *)arg1 didFailWithError:(NSError *)arg2;
- (void)cameraEffectTopicProviderDidUpdate:(IGCameraEffectMiniGalleryTopicProvider *)arg1;
@end
