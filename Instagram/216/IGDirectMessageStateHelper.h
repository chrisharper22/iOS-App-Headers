//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDirectMessageStateHelper : NSObject
{
}

+ (id)messageStatesForMessageKeysDictionaryForMessages:(id)arg1 thread:(id)arg2 currentUserPK:(id)arg3 mostRecentActiveTypingStatus:(id)arg4 shouldSortByTimestamp:(_Bool)arg5 shouldShowSeenTime:(_Bool)arg6 shouldUseInboxContextForSeenTime:(_Bool)arg7 shouldShowOnlyOneSeenUser:(_Bool)arg8 shouldUseDeliveredFailedStates:(_Bool)arg9 shouldUseMessageLevelSeenStatesForGroups:(_Bool)arg10 userInterfaceStyle:(unsigned long long)arg11 nicknameManager:(id)arg12 messagesClientState:(id)arg13 featureSetProvider:(id)arg14 analyticsModule:(id)arg15;
+ (id)seenUsersForMessageServerId:(id)arg1 messageSenderId:(id)arg2 threadUsers:(id)arg3 lastSeenMessageIdsForUserIds:(id)arg4 currentUserPK:(id)arg5 shouldIncludeMessageSender:(_Bool)arg6 shouldSortByTimestamp:(_Bool)arg7 messages:(id)arg8 currentMessageIndex:(long long)arg9;
+ (id)seenUsersForMessage:(id)arg1 threadUsers:(id)arg2 lastSeenMessageIdsForUserIds:(id)arg3 currentUserPK:(id)arg4 shouldIncludeMessageSender:(_Bool)arg5 shouldSortByTimestamp:(_Bool)arg6;
+ (id)usernamesForSeenUsers:(id)arg1 nicknameManager:(id)arg2 featureSetProvider:(id)arg3;

@end
