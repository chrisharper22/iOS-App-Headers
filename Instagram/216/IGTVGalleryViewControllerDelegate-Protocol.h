//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTVGalleryViewController, PHAsset, UIImage, UIView;

@protocol IGTVGalleryViewControllerDelegate <NSObject>
- (void)galleryViewController:(IGTVGalleryViewController *)arg1 didSelectAsset:(PHAsset *)arg2 withThumbnail:(UIImage *)arg3 fromView:(UIView *)arg4;
- (void)galleryViewControllerDidTapClose:(IGTVGalleryViewController *)arg1;
@end

