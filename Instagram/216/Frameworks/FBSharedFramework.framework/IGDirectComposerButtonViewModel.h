//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGDirectComposerButtonViewModel : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)storyReshareButton;
+ (id)storyReplyGifButton;
+ (id)storyReplyGifSearchButton;
+ (id)storyReplyStickerSearchButton;
+ (id)selfieStickerButton;
+ (id)orderManagementButtonWithComposerTheme:(id)arg1;
+ (id)businessToolsButtonWithComposerTheme:(id)arg1;
+ (id)productPickerButtonWithComposerTheme:(id)arg1;
+ (id)stickerSearchButtonWithBackgroundCircleWithGradientImageGenerator:(id)arg1 composerTheme:(id)arg2 useSearchIcon:(_Bool)arg3;
+ (id)cameraButtonWithBackgroundCircleWithGradientImageGenerator:(id)arg1 composerTheme:(id)arg2;
+ (id)stickerButtonWithComposerTheme:(id)arg1;
+ (id)plusButtonWithComposerTheme:(id)arg1;
+ (id)moreButton;
+ (id)voiceMessageButtonWithComposerTheme:(id)arg1;
+ (id)emphasizedSendButtonInThreadWithGradientImageGenerator:(id)arg1 composerTheme:(id)arg2;
+ (id)emphasizedSendButton;
+ (id)whiteSendButton;
+ (id)animatedMediaButton;
+ (id)emojiReactionEntrypoint;
+ (id)likeButton;
+ (id)galleryButtonNeueWithComposerTheme:(id)arg1;
+ (id)galleryButtonWithComposerTheme:(id)arg1;
+ (id)reshareHubButtonWithComposerTheme:(id)arg1;
+ (id)quickReplyHighlightedButtonWithLauncherSet:(id)arg1;
+ (id)quickReplyButtonWithComposerTheme:(id)arg1 launcherSet:(id)arg2;
+ (id)unifiedComposerStoryCameraButton;
+ (id)storyCameraButton;
- (double)minimumLongPressDuration;
- (id)buttonIdentifier;

@end

