//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCameraEffectMiniGalleryFeedView;

@protocol IGCameraEffectMiniGalleryFeedViewDelegate <NSObject>
- (void)miniGalleryFeedViewCellDidFinishLoading:(IGCameraEffectMiniGalleryFeedView *)arg1;
- (void)miniGalleryFeedViewDidAlmostReachBottom:(IGCameraEffectMiniGalleryFeedView *)arg1;
- (void)miniGalleryFeedViewDidClearSelection:(IGCameraEffectMiniGalleryFeedView *)arg1;
- (void)miniGalleryFeedView:(IGCameraEffectMiniGalleryFeedView *)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)miniGalleryFeedView:(IGCameraEffectMiniGalleryFeedView *)arg1 shouldSelectItemAtIndex:(long long)arg2;
@end

