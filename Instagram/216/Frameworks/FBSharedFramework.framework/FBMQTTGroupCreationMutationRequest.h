//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TBaseStruct.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/TBase-Protocol.h>

@class FBMQTTCreateGroupMutationParams, NSMutableArray, NSMutableDictionary, NSString;

@interface FBMQTTGroupCreationMutationRequest : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_senderId;
    NSMutableArray *__thrift_participants;
    long long __thrift_fbGroupId;
    NSMutableArray *__thrift_coCreatorIds;
    long long __thrift_offlineThreadingId;
    NSString *__thrift_name;
    NSString *__thrift_description;
    int __thrift_approvalMode;
    int __thrift_joinableMode;
    int __thrift_discoverableMode;
    int __thrift_videoRoomMode;
    NSString *__thrift_emoji;
    NSString *__thrift_backgroundColor;
    NSString *__thrift_themeColor;
    NSString *__thrift_outgoingBubbleColor;
    NSString *__thrift_incomingBubbleColor;
    NSString *__thrift_entryPoint;
    _Bool __thrift_shouldFetchThreadInfo;
    FBMQTTCreateGroupMutationParams *__thrift_createGroupMutationParams;
    _Bool __thrift_useExistingGroup;
    long long __thrift_attemptId;
    _Bool __thrift_optInGroupsSync;
    NSMutableDictionary *__thrift_extra;
    _Bool __thrift_senderId_set;
    _Bool __thrift_participants_set;
    _Bool __thrift_fbGroupId_set;
    _Bool __thrift_coCreatorIds_set;
    _Bool __thrift_offlineThreadingId_set;
    _Bool __thrift_name_set;
    _Bool __thrift_description_set;
    _Bool __thrift_approvalMode_set;
    _Bool __thrift_joinableMode_set;
    _Bool __thrift_discoverableMode_set;
    _Bool __thrift_videoRoomMode_set;
    _Bool __thrift_emoji_set;
    _Bool __thrift_backgroundColor_set;
    _Bool __thrift_themeColor_set;
    _Bool __thrift_outgoingBubbleColor_set;
    _Bool __thrift_incomingBubbleColor_set;
    _Bool __thrift_entryPoint_set;
    _Bool __thrift_shouldFetchThreadInfo_set;
    _Bool __thrift_createGroupMutationParams_set;
    _Bool __thrift_useExistingGroup_set;
    _Bool __thrift_attemptId_set;
    _Bool __thrift_optInGroupsSync_set;
    _Bool __thrift_extra_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetExtra;
- (_Bool)extraIsSet;
@property(retain, nonatomic) NSMutableDictionary *extra;
- (void)unsetOptInGroupsSync;
- (_Bool)optInGroupsSyncIsSet;
@property(nonatomic) _Bool optInGroupsSync;
- (void)unsetAttemptId;
- (_Bool)attemptIdIsSet;
@property(nonatomic) long long attemptId;
- (void)unsetUseExistingGroup;
- (_Bool)useExistingGroupIsSet;
@property(nonatomic) _Bool useExistingGroup;
- (void)unsetCreateGroupMutationParams;
- (_Bool)createGroupMutationParamsIsSet;
@property(retain, nonatomic) FBMQTTCreateGroupMutationParams *createGroupMutationParams;
- (void)unsetShouldFetchThreadInfo;
- (_Bool)shouldFetchThreadInfoIsSet;
@property(nonatomic) _Bool shouldFetchThreadInfo;
- (void)unsetEntryPoint;
- (_Bool)entryPointIsSet;
@property(retain, nonatomic) NSString *entryPoint;
- (void)unsetIncomingBubbleColor;
- (_Bool)incomingBubbleColorIsSet;
@property(retain, nonatomic) NSString *incomingBubbleColor;
- (void)unsetOutgoingBubbleColor;
- (_Bool)outgoingBubbleColorIsSet;
@property(retain, nonatomic) NSString *outgoingBubbleColor;
- (void)unsetThemeColor;
- (_Bool)themeColorIsSet;
@property(retain, nonatomic) NSString *themeColor;
- (void)unsetBackgroundColor;
- (_Bool)backgroundColorIsSet;
@property(retain, nonatomic) NSString *backgroundColor;
- (void)unsetEmoji;
- (_Bool)emojiIsSet;
@property(retain, nonatomic) NSString *emoji;
- (void)unsetVideoRoomMode;
- (_Bool)videoRoomModeIsSet;
@property(nonatomic) int videoRoomMode;
- (void)unsetDiscoverableMode;
- (_Bool)discoverableModeIsSet;
@property(nonatomic) int discoverableMode;
- (void)unsetJoinableMode;
- (_Bool)joinableModeIsSet;
@property(nonatomic) int joinableMode;
- (void)unsetApprovalMode;
- (_Bool)approvalModeIsSet;
@property(nonatomic) int approvalMode;
- (void)unsetFb_description;
- (_Bool)descriptionIsSet;
@property(retain, nonatomic) NSString *fb_description;
- (void)unsetName;
- (_Bool)nameIsSet;
@property(retain, nonatomic) NSString *name;
- (void)unsetOfflineThreadingId;
- (_Bool)offlineThreadingIdIsSet;
@property(nonatomic) long long offlineThreadingId;
- (void)unsetCoCreatorIds;
- (_Bool)coCreatorIdsIsSet;
@property(retain, nonatomic) NSMutableArray *coCreatorIds;
- (void)unsetFbGroupId;
- (_Bool)fbGroupIdIsSet;
@property(nonatomic) long long fbGroupId;
- (void)unsetParticipants;
- (_Bool)participantsIsSet;
@property(retain, nonatomic) NSMutableArray *participants;
- (void)unsetSenderId;
- (_Bool)senderIdIsSet;
@property(nonatomic) long long senderId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSenderId:(long long)arg1 participants:(id)arg2 fbGroupId:(long long)arg3 coCreatorIds:(id)arg4 offlineThreadingId:(long long)arg5 name:(id)arg6 description:(id)arg7 approvalMode:(int)arg8 joinableMode:(int)arg9 discoverableMode:(int)arg10 videoRoomMode:(int)arg11 emoji:(id)arg12 backgroundColor:(id)arg13 themeColor:(id)arg14 outgoingBubbleColor:(id)arg15 incomingBubbleColor:(id)arg16 entryPoint:(id)arg17 shouldFetchThreadInfo:(_Bool)arg18 createGroupMutationParams:(id)arg19 useExistingGroup:(_Bool)arg20 attemptId:(long long)arg21 optInGroupsSync:(_Bool)arg22 extra:(id)arg23;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

