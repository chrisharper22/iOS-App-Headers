//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGAvatarEffectManager;

@protocol IGAvatarEffectManagerListener <NSObject>
- (void)avatarEffectManager:(IGAvatarEffectManager *)arg1 didUpdateAvatarStatus:(long long)arg2;
- (void)avatarEffectManager:(IGAvatarEffectManager *)arg1 didUpdateAvatarEffectDownloadState:(long long)arg2;
@end

