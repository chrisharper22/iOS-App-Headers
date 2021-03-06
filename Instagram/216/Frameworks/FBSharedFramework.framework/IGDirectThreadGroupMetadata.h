//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDirectThreadGroupPhotoIdentifier, NSSet, NSString;

@interface IGDirectThreadGroupMetadata : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isMentionsMuted;
    _Bool _adminApprovalRequired;
    NSString *_lastMentionedMessageId;
    IGDirectThreadGroupPhotoIdentifier *_groupPhotoIdentifier;
    NSString *_customName;
    NSSet *_adminUserIds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool adminApprovalRequired; // @synthesize adminApprovalRequired=_adminApprovalRequired;
@property(readonly, copy, nonatomic) NSSet *adminUserIds; // @synthesize adminUserIds=_adminUserIds;
@property(readonly, copy, nonatomic) NSString *customName; // @synthesize customName=_customName;
@property(readonly, copy, nonatomic) IGDirectThreadGroupPhotoIdentifier *groupPhotoIdentifier; // @synthesize groupPhotoIdentifier=_groupPhotoIdentifier;
@property(readonly, copy, nonatomic) NSString *lastMentionedMessageId; // @synthesize lastMentionedMessageId=_lastMentionedMessageId;
@property(readonly, nonatomic) _Bool isMentionsMuted; // @synthesize isMentionsMuted=_isMentionsMuted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithIsMentionsMuted:(_Bool)arg1 lastMentionedMessageId:(id)arg2 groupPhotoIdentifier:(id)arg3 customName:(id)arg4 adminUserIds:(id)arg5 adminApprovalRequired:(_Bool)arg6;
- (id)initWithCoder:(id)arg1;

@end

