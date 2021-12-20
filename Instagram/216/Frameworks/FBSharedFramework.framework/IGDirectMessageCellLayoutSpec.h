//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGDirectMessageCellLayoutSpec : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
- (double)avatarSize;
- (id)initWithAlignment:(long long)arg1 parentViewWidth:(double)arg2 displaysAvatar:(_Bool)arg3 displaysHeader:(_Bool)arg4 displaysSendFailed:(_Bool)arg5 displaysSending:(_Bool)arg6 displaysScreenshot:(_Bool)arg7 shouldDisableLongPressOnAvatar:(_Bool)arg8 senderIsActiveNow:(_Bool)arg9 replyMessageLayoutSpec:(id)arg10 contentStringStyles:(id)arg11 bubbleLayoutSpec:(id)arg12 footerLayoutSpec:(id)arg13 reactionsViewLayoutSpec:(id)arg14 bubbleGroupingStyle:(unsigned long long)arg15 quotedMessageBubbleLayoutSpec:(id)arg16 shouldShowForwardShortcut:(_Bool)arg17 userInterfaceStyle:(unsigned long long)arg18 featureSetProvider:(id)arg19;
- (id)initWithAlignment:(long long)arg1 parentViewWidth:(double)arg2 replyMessageLayoutSpec:(id)arg3 contentStringStyles:(id)arg4 bubbleLayoutSpec:(id)arg5 bubbleGroupingStyle:(unsigned long long)arg6 quotedMessageBubbleLayoutSpec:(id)arg7 featureSetProvider:(id)arg8;

@end

