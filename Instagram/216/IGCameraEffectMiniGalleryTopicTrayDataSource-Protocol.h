//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCameraEffectMiniGalleryTopicTray, NSString, UIImage;

@protocol IGCameraEffectMiniGalleryTopicTrayDataSource <NSObject>
- (_Bool)miniGalleryTopicTray:(IGCameraEffectMiniGalleryTopicTray *)arg1 isItemAtIndexLoading:(long long)arg2;
- (UIImage *)miniGalleryTopicTray:(IGCameraEffectMiniGalleryTopicTray *)arg1 imageForItemAtIndex:(long long)arg2;
- (NSString *)miniGalleryTopicTray:(IGCameraEffectMiniGalleryTopicTray *)arg1 accessibilityTextForItemAtIndex:(long long)arg2;
- (NSString *)miniGalleryTopicTray:(IGCameraEffectMiniGalleryTopicTray *)arg1 titleForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInMiniGalleryTopicTray:(IGCameraEffectMiniGalleryTopicTray *)arg1;
@end

