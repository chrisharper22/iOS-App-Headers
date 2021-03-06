//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectThreadViewMessageIslandContext, NSDate, NSMutableDictionary, NSMutableSet, NSString;
@protocol IGDirectThreadViewMessagesClientStateAnnouncer, OS_dispatch_queue;

@interface IGDirectThreadViewMessagesClientStateManager : NSObject
{
    NSMutableSet *_expandedActionLogChunkIdentifiers;
    NSMutableSet *_expandedQuotedMessageIds;
    NSMutableSet *_hiddenNuxKeysForMessages;
    NSMutableSet *_revealedMessageIds;
    NSMutableSet *_startingMessageIdsForExpandedSections;
    NSString *_revealedFilteredMessageId;
    NSString *_lastSeenMessageIdForOtherUserWhenExitingShhMode;
    NSString *_lastSeenMessageIdForCurrentUserWhenExitingShhMode;
    NSString *_lastSeenShhMessageIdForOtherUserWhenExitingShhMode;
    NSString *_lastSeenShhMessageIdForCurrentUserWhenExitingShhMode;
    _Bool _shouldCollapseMessagesInOtherModes;
    _Bool _shouldExpandShhModeSwipeToUpgradeNux;
    NSString *_doubleTapEmojiUnicode;
    NSDate *_lastSeenSuperReactTimestamp;
    NSMutableSet *_messageIdsForPlayedPowerupMessages;
    NSMutableSet *_expandedSeenHeadsMessageIds;
    NSMutableDictionary *_messageTranslationStateDictionary;
    IGDirectThreadViewMessageIslandContext *_messageIslandContext;
    id <IGDirectThreadViewMessagesClientStateAnnouncer> _announcer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)clientState;
- (void)setMessageTranslationClientState:(unsigned long long)arg1 forMessageId:(id)arg2;
- (void)setMessageIslandContext:(id)arg1;
- (void)toggleSeenHeadsMessageId:(id)arg1;
- (void)setRevealedFilteredMessageId:(id)arg1;
- (void)addMessageIdForPlayedMessagePowerups:(id)arg1;
- (void)setLastSeenSuperReactTimestamp:(id)arg1;
- (void)revealCoveredMessage:(id)arg1;
- (void)setDoubleTapEmojiUnicode:(id)arg1;
- (void)addHiddenNuxKeyForMessages:(id)arg1;
- (_Bool)shouldDisplayExpandedForQuotedMessageID:(id)arg1;
- (void)setShouldExpandShhModeSwipeToUpgradeNux:(_Bool)arg1;
- (void)setShouldCollapseMessagesInOtherModes:(_Bool)arg1;
- (void)expandSectionStartingWithMessageId:(id)arg1;
- (void)setExpandedStateForQuotedMessageId:(id)arg1 isExpanded:(_Bool)arg2;
- (void)setLastSeenMessageIdForOtherUserWhenExitingShhMode:(id)arg1 lastSeenMessageIdForCurrentUserWhenExitingShhMode:(id)arg2 lastSeenShhMessageIdForOtherUserWhenExitingShhMode:(id)arg3 lastSeenShhMessageIdForCurrentUserWhenExitingShhMode:(id)arg4;
- (_Bool)isActionLogSectionExpandedWithIdentifier:(id)arg1;
- (void)updateExpandableActionLogSectionWithIdentifier:(id)arg1 isExpanded:(_Bool)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

