//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "IGListDiffable-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface IGDirectInboxThreadCellViewModel : IGValueObject <IGListDiffable, NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)_digestTextForDigestType:(unsigned long long)arg1 contentTheme:(id)arg2 message:(id)arg3 sender:(id)arg4 outgoingMessageStatus:(id)arg5 thread:(id)arg6 userPk:(id)arg7 featureSets:(id)arg8 presenceDigest:(id)arg9 typingDigest:(id)arg10 nicknameManager:(id)arg11 messageStateDateFormatter:(id)arg12;
+ (id)_accessoryButtonConfigForDigestType:(unsigned long long)arg1 thread:(id)arg2 shouldShowPlayButtonWithText:(_Bool)arg3 interViewPadding:(double)arg4 featureSetProvider:(id)arg5;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithThread:(id)arg1 messageForDigest:(id)arg2 sender:(id)arg3 currentUser:(id)arg4 featureSetProvider:(id)arg5 shouldShowPlayButtonWithText:(_Bool)arg6 userIsActiveNow:(_Bool)arg7 lastActiveTime:(id)arg8 presenceDigest:(id)arg9 typingDigest:(id)arg10 isLoadingMedia:(_Bool)arg11 isSwipeEnabled:(_Bool)arg12 isMultiSelectable:(_Bool)arg13 isSelected:(_Bool)arg14 didViewNewVisualMessages:(_Bool)arg15 hasReplayableVisualMessages:(_Bool)arg16 hasUnseenVisualMessages:(_Bool)arg17 isEligibleForUnseenMessages:(_Bool)arg18 restrictStatusEnabled:(_Bool)arg19 moveToFolderEnabled:(_Bool)arg20 threadIndex:(unsigned long long)arg21 contentTheme:(id)arg22 avatarState:(id)arg23 storyStatus:(unsigned long long)arg24 threadsAppStatuses:(id)arg25 avatarViewSpec:(id)arg26 tableLayoutSpec:(id)arg27 accessibilityIdentifier:(id)arg28 module:(id)arg29 activeVideoCall:(_Bool)arg30 isAudioCall:(_Bool)arg31 nicknameManager:(id)arg32 showSeenStatesInInbox:(_Bool)arg33 messageStateDateFormatter:(id)arg34 loggingInfo:(id)arg35 disabledContextButtonsForInteropThread:(id)arg36 closeFriendsAttributionEnabled:(_Bool)arg37 isBusinessMessagingHighVolumeRateLimit:(_Bool)arg38 lastVisibleMessageId:(id)arg39;

@end
