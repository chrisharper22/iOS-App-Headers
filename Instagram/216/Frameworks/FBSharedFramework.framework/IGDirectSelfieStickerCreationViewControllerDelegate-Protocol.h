//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGAREffectModel, IGDirectSelfieStickerModel, IGVideoComposition, UIViewController;

@protocol IGDirectSelfieStickerCreationViewControllerDelegate <NSObject>
- (void)selfieStickerViewController:(UIViewController *)arg1 didTapSelfieSticker:(IGDirectSelfieStickerModel *)arg2;
- (void)selfieStickerViewController:(UIViewController *)arg1 didTapSendWithVideo:(IGVideoComposition *)arg2 capturedEffect:(IGAREffectModel *)arg3;
@end

