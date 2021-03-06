//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDirectBusinessWelcomeMessage, IGDirectThreadGroupMetadata, IGDirectThreadShhModeMetadata, IGDirectThreadThemeMetadata, IGDirectVideoCallInfo, IGDirectViolationReview, IGUser, NSArray, NSDictionary, NSSet, NSString;

@interface IGDirectThreadMetadata : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isCanonical;
    _Bool _isGroup;
    _Bool _isPending;
    _Bool _isSpam;
    _Bool _isSelfThread;
    _Bool _isMuted;
    _Bool _isVideoCallMuted;
    _Bool _isFlagged;
    _Bool _isMarkedAsUnread;
    _Bool _isArchived;
    _Bool _isCloseFriendThread;
    _Bool _isVerifiedThread;
    _Bool _hasFilteredMessages;
    _Bool _hasRestrictedUser;
    _Bool _hasGroupsXacIneligibleUser;
    _Bool _isXacThread;
    _Bool _isFanClubSubscriberThread;
    _Bool _isTranslationEnabled;
    NSArray *_users;
    NSArray *_leftUsers;
    NSSet *_pendingUserIds;
    NSString *_socialContext;
    IGDirectVideoCallInfo *_videoCallInfo;
    IGUser *_inviter;
    NSDictionary *_lastSeenMessageIdsForUserIds;
    IGDirectThreadGroupMetadata *_groupMetadata;
    long long _inputMode;
    long long _folderType;
    IGDirectThreadShhModeMetadata *_shhModeMetadata;
    IGDirectViolationReview *_violationReview;
    long long _messageRequestType;
    IGDirectThreadThemeMetadata *_themeMetadata;
    NSArray *_contextLines;
    NSArray *_icebreakers;
    IGDirectBusinessWelcomeMessage *_welcomeMessage;
    unsigned long long _senderReachabilityStatus;
    unsigned long long _recipientReachabilityStatus;
    unsigned long long _bizThreadThrottlingState;
    NSArray *_labels;
    NSDictionary *_threadLanguages;
    unsigned long long _translationBannerImpressionCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long translationBannerImpressionCount; // @synthesize translationBannerImpressionCount=_translationBannerImpressionCount;
@property(readonly, copy, nonatomic) NSDictionary *threadLanguages; // @synthesize threadLanguages=_threadLanguages;
@property(readonly, nonatomic) _Bool isTranslationEnabled; // @synthesize isTranslationEnabled=_isTranslationEnabled;
@property(readonly, nonatomic) _Bool isFanClubSubscriberThread; // @synthesize isFanClubSubscriberThread=_isFanClubSubscriberThread;
@property(readonly, copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(readonly, nonatomic) _Bool isXacThread; // @synthesize isXacThread=_isXacThread;
@property(readonly, nonatomic) _Bool hasGroupsXacIneligibleUser; // @synthesize hasGroupsXacIneligibleUser=_hasGroupsXacIneligibleUser;
@property(readonly, nonatomic) _Bool hasRestrictedUser; // @synthesize hasRestrictedUser=_hasRestrictedUser;
@property(readonly, nonatomic) unsigned long long bizThreadThrottlingState; // @synthesize bizThreadThrottlingState=_bizThreadThrottlingState;
@property(readonly, nonatomic) unsigned long long recipientReachabilityStatus; // @synthesize recipientReachabilityStatus=_recipientReachabilityStatus;
@property(readonly, nonatomic) unsigned long long senderReachabilityStatus; // @synthesize senderReachabilityStatus=_senderReachabilityStatus;
@property(readonly, copy, nonatomic) IGDirectBusinessWelcomeMessage *welcomeMessage; // @synthesize welcomeMessage=_welcomeMessage;
@property(readonly, copy, nonatomic) NSArray *icebreakers; // @synthesize icebreakers=_icebreakers;
@property(readonly, copy, nonatomic) NSArray *contextLines; // @synthesize contextLines=_contextLines;
@property(readonly, copy, nonatomic) IGDirectThreadThemeMetadata *themeMetadata; // @synthesize themeMetadata=_themeMetadata;
@property(readonly, nonatomic) long long messageRequestType; // @synthesize messageRequestType=_messageRequestType;
@property(readonly, copy, nonatomic) IGDirectViolationReview *violationReview; // @synthesize violationReview=_violationReview;
@property(readonly, nonatomic) _Bool hasFilteredMessages; // @synthesize hasFilteredMessages=_hasFilteredMessages;
@property(readonly, nonatomic) _Bool isVerifiedThread; // @synthesize isVerifiedThread=_isVerifiedThread;
@property(readonly, nonatomic) _Bool isCloseFriendThread; // @synthesize isCloseFriendThread=_isCloseFriendThread;
@property(readonly, copy, nonatomic) IGDirectThreadShhModeMetadata *shhModeMetadata; // @synthesize shhModeMetadata=_shhModeMetadata;
@property(readonly, nonatomic) long long folderType; // @synthesize folderType=_folderType;
@property(readonly, nonatomic) long long inputMode; // @synthesize inputMode=_inputMode;
@property(readonly, copy, nonatomic) IGDirectThreadGroupMetadata *groupMetadata; // @synthesize groupMetadata=_groupMetadata;
@property(readonly, copy, nonatomic) NSDictionary *lastSeenMessageIdsForUserIds; // @synthesize lastSeenMessageIdsForUserIds=_lastSeenMessageIdsForUserIds;
@property(readonly, copy, nonatomic) IGUser *inviter; // @synthesize inviter=_inviter;
@property(readonly, nonatomic) _Bool isArchived; // @synthesize isArchived=_isArchived;
@property(readonly, nonatomic) _Bool isMarkedAsUnread; // @synthesize isMarkedAsUnread=_isMarkedAsUnread;
@property(readonly, nonatomic) _Bool isFlagged; // @synthesize isFlagged=_isFlagged;
@property(readonly, copy, nonatomic) IGDirectVideoCallInfo *videoCallInfo; // @synthesize videoCallInfo=_videoCallInfo;
@property(readonly, nonatomic) _Bool isVideoCallMuted; // @synthesize isVideoCallMuted=_isVideoCallMuted;
@property(readonly, nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(readonly, copy, nonatomic) NSString *socialContext; // @synthesize socialContext=_socialContext;
@property(readonly, copy, nonatomic) NSSet *pendingUserIds; // @synthesize pendingUserIds=_pendingUserIds;
@property(readonly, copy, nonatomic) NSArray *leftUsers; // @synthesize leftUsers=_leftUsers;
@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, nonatomic) _Bool isSelfThread; // @synthesize isSelfThread=_isSelfThread;
@property(readonly, nonatomic) _Bool isSpam; // @synthesize isSpam=_isSpam;
@property(readonly, nonatomic) _Bool isPending; // @synthesize isPending=_isPending;
@property(readonly, nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(readonly, nonatomic) _Bool isCanonical; // @synthesize isCanonical=_isCanonical;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithIsCanonical:(_Bool)arg1 isGroup:(_Bool)arg2 isPending:(_Bool)arg3 isSpam:(_Bool)arg4 isSelfThread:(_Bool)arg5 users:(id)arg6 leftUsers:(id)arg7 pendingUserIds:(id)arg8 socialContext:(id)arg9 isMuted:(_Bool)arg10 isVideoCallMuted:(_Bool)arg11 videoCallInfo:(id)arg12 isFlagged:(_Bool)arg13 isMarkedAsUnread:(_Bool)arg14 isArchived:(_Bool)arg15 inviter:(id)arg16 lastSeenMessageIdsForUserIds:(id)arg17 groupMetadata:(id)arg18 inputMode:(long long)arg19 folderType:(long long)arg20 shhModeMetadata:(id)arg21 isCloseFriendThread:(_Bool)arg22 isVerifiedThread:(_Bool)arg23 hasFilteredMessages:(_Bool)arg24 violationReview:(id)arg25 messageRequestType:(long long)arg26 themeMetadata:(id)arg27 contextLines:(id)arg28 icebreakers:(id)arg29 welcomeMessage:(id)arg30 senderReachabilityStatus:(unsigned long long)arg31 recipientReachabilityStatus:(unsigned long long)arg32 bizThreadThrottlingState:(unsigned long long)arg33 hasRestrictedUser:(_Bool)arg34 hasGroupsXacIneligibleUser:(_Bool)arg35 isXacThread:(_Bool)arg36 labels:(id)arg37 isFanClubSubscriberThread:(_Bool)arg38 isTranslationEnabled:(_Bool)arg39 threadLanguages:(id)arg40 translationBannerImpressionCount:(unsigned long long)arg41;
- (id)initWithCoder:(id)arg1;

@end

