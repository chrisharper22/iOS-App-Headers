//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCameraEffectMiniGalleryFeedView, IGImageSpecifier, NSString;

@protocol IGCameraEffectMiniGalleryFeedViewDataSource <NSObject>
- (NSString *)miniGalleryFeedView:(IGCameraEffectMiniGalleryFeedView *)arg1 accessibilityLabelForItemAtIndex:(long long)arg2;
- (_Bool)miniGalleryFeedView:(IGCameraEffectMiniGalleryFeedView *)arg1 isItemAtIndexLoading:(long long)arg2;
- (NSString *)miniGalleryFeedView:(IGCameraEffectMiniGalleryFeedView *)arg1 titleForItemAtIndex:(long long)arg2;
- (IGImageSpecifier *)miniGalleryFeedView:(IGCameraEffectMiniGalleryFeedView *)arg1 previewImageSpecifierForItemAtIndex:(long long)arg2;
- (IGImageSpecifier *)miniGalleryFeedView:(IGCameraEffectMiniGalleryFeedView *)arg1 iconImageSpecifierForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInMiniGalleryFeedView:(IGCameraEffectMiniGalleryFeedView *)arg1;
@end

