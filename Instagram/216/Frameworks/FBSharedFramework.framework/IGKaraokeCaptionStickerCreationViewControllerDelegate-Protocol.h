//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGKaraokeCaptionStickerCreationViewController, IGKaraokeCaptionStickerView, NSArray, NSString;

@protocol IGKaraokeCaptionStickerCreationViewControllerDelegate <NSObject>
- (void)karaokeCaptionStickerCreationViewController:(IGKaraokeCaptionStickerCreationViewController *)arg1 didFailToLoadCaptionsWithMessage:(NSString *)arg2;
- (void)karaokeCaptionStickerCreationViewController:(IGKaraokeCaptionStickerCreationViewController *)arg1 didLoadCaptionTokens:(NSArray *)arg2;
- (void)karaokeCaptionStickerCreationViewController:(IGKaraokeCaptionStickerCreationViewController *)arg1 didEditCaptionTokens:(NSArray *)arg2 forKaraokeCaptionsSticker:(IGKaraokeCaptionStickerView *)arg3;
- (void)karaokeCaptionStickerCreationViewController:(IGKaraokeCaptionStickerCreationViewController *)arg1 didFinishEditingKaraokeCaptionStickerView:(IGKaraokeCaptionStickerView *)arg2 withDismissalSource:(long long)arg3;
- (void)karaokeCaptionStickerCreationViewController:(IGKaraokeCaptionStickerCreationViewController *)arg1 willFinishEditingKaraokeCaptionStickerView:(IGKaraokeCaptionStickerView *)arg2 withDismissalSource:(long long)arg3;
@end

