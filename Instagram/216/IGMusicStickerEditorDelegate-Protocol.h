//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAudioMusicTrackClip, IGMusicStickerEditor, UIView;

@protocol IGMusicStickerEditorDelegate <NSObject>
- (void)musicStickerEditor:(IGMusicStickerEditor *)arg1 didFinishEditingMusicSticker:(UIView *)arg2 musicTrackClip:(IGAudioMusicTrackClip *)arg3;
- (void)musicStickerEditorDidSelectCancel:(IGMusicStickerEditor *)arg1 musicStickerView:(UIView *)arg2;
@end

