//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFOAPollStickerView, IGPollStickerCreationViewController, IGPollStickerView;

@protocol IGPollStickerCreationViewControllerDelegate <NSObject>
- (_Bool)pollStickerCreationViewController:(IGPollStickerCreationViewController *)arg1 shouldKeepPlaceholderForDismissalSource:(long long)arg2;
- (void)pollStickerCreationViewController:(IGPollStickerCreationViewController *)arg1 didFinishEditingFOAPollStickerView:(IGFOAPollStickerView *)arg2 withDismissalSource:(long long)arg3;
- (void)pollStickerCreationViewController:(IGPollStickerCreationViewController *)arg1 willEndEditingFOAPollStickerView:(IGFOAPollStickerView *)arg2 withDismissalSource:(long long)arg3;
- (void)pollStickerCreationViewController:(IGPollStickerCreationViewController *)arg1 didBeginEditingFOAPollStickerView:(IGFOAPollStickerView *)arg2;
- (void)pollStickerCreationViewController:(IGPollStickerCreationViewController *)arg1 didFinishEditingPollStickerView:(IGPollStickerView *)arg2 withDismissalSource:(long long)arg3;
- (void)pollStickerCreationViewController:(IGPollStickerCreationViewController *)arg1 willEndEditingPollStickerView:(IGPollStickerView *)arg2 withDismissalSource:(long long)arg3;
- (void)pollStickerCreationViewController:(IGPollStickerCreationViewController *)arg1 didBeginEditingPollStickerView:(IGPollStickerView *)arg2;
@end

