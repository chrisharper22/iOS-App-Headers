//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGAvatarGridSticker, IGAvatarGridStoryViewController, IGStaticStickerModel, NSString;

@protocol IGAvatarGridStoryViewControllerDelegate <NSObject>
- (void)avatarStoryGrid:(IGAvatarGridStoryViewController *)arg1 willHitImpression:(NSString *)arg2;
- (void)avatarStoryGridDidTapSelect:(IGAvatarGridStoryViewController *)arg1 avatar:(IGAvatarGridSticker *)arg2 staticSticker:(IGStaticStickerModel *)arg3;
- (void)avatarStoryGridDidTapEdit:(IGAvatarGridStoryViewController *)arg1;
- (void)avatarStoryGridDidTapClose:(IGAvatarGridStoryViewController *)arg1;
@end

