//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGImageStickerView, NSError;

@protocol IGImageStickerViewDelegate <NSObject>
- (void)imageStickerViewFailedToLoadImage:(IGImageStickerView *)arg1 error:(NSError *)arg2;
- (void)imageStickerViewDidLoadImage:(IGImageStickerView *)arg1;
- (void)imageStickerView:(IGImageStickerView *)arg1 didUpdateDownloadProgress:(double)arg2;
@end
