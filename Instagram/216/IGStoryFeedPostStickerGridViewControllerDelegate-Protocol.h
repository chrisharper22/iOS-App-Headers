//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMedia, IGPostItem, IGStoryFeedPostStickerGridViewController, UIView;

@protocol IGStoryFeedPostStickerGridViewControllerDelegate <NSObject>
- (void)feedPostStickerGridViewControllerDidFinishLoadingFeedPosts:(IGStoryFeedPostStickerGridViewController *)arg1;
- (void)feedPostStickerGridViewController:(IGStoryFeedPostStickerGridViewController *)arg1 didSelectCarouselMedia:(IGMedia *)arg2 feedPostCell:(UIView *)arg3;
- (void)feedPostStickerGridViewController:(IGStoryFeedPostStickerGridViewController *)arg1 didSelectMedia:(IGMedia *)arg2 selectedPost:(IGPostItem *)arg3;
@end

