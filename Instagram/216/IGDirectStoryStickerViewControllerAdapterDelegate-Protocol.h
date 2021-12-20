//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAREffectModel, IGAvatarGridSticker, IGDirectMessageEffect, IGDirectSelfieStickerModel, IGDirectStoryStickerViewControllerAdapter, IGGiphyGIFModel, IGStaticStickerModel, IGVideoComposition, NSArray, NSString, UIImage;

@protocol IGDirectStoryStickerViewControllerAdapterDelegate <NSObject>
- (void)storyStickerViewControllerAdapter:(IGDirectStoryStickerViewControllerAdapter *)arg1 didSelectAvatarSticker:(IGAvatarGridSticker *)arg2;
- (void)storyStickerViewControllerAdapter:(IGDirectStoryStickerViewControllerAdapter *)arg1 didSelectAvatarImage:(UIImage *)arg2;
- (void)storyStickerViewControllerAdapter:(IGDirectStoryStickerViewControllerAdapter *)arg1 didCreateNewPollMessageWithQuestion:(NSString *)arg2 options:(NSArray *)arg3;
- (void)storyStickerViewControllerAdapter:(IGDirectStoryStickerViewControllerAdapter *)arg1 didSelectMessageEffect:(IGDirectMessageEffect *)arg2 text:(NSString *)arg3;
- (void)storyStickerViewControllerAdapterDidSelectLike:(IGDirectStoryStickerViewControllerAdapter *)arg1;
- (void)storyStickerViewControllerAdapter:(IGDirectStoryStickerViewControllerAdapter *)arg1 didSelectStaticSticker:(IGStaticStickerModel *)arg2;
- (void)storyStickerViewControllerAdapter:(IGDirectStoryStickerViewControllerAdapter *)arg1 didSelectAnimatedMedia:(IGGiphyGIFModel *)arg2;
- (void)storyStickerViewControllerAdapterDidSelectPollSticker:(IGDirectStoryStickerViewControllerAdapter *)arg1;
- (void)storyStickerViewControllerAdapterDidSelectInteropUpSellPollSticker:(IGDirectStoryStickerViewControllerAdapter *)arg1;
- (void)storyStickerViewControllerAdapterDidSelectInteropUpSellSelfieSticker:(IGDirectStoryStickerViewControllerAdapter *)arg1;
- (void)storyStickerViewControllerAdapter:(IGDirectStoryStickerViewControllerAdapter *)arg1 didSelectSelfieSticker:(IGDirectSelfieStickerModel *)arg2;
- (void)storyStickerViewControllerAdapter:(IGDirectStoryStickerViewControllerAdapter *)arg1 didRecordVideo:(IGVideoComposition *)arg2 capturedEffect:(IGAREffectModel *)arg3;
@end

