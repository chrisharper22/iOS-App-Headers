//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectThreadGroupPhotoIdentifier, NSSet, NSString;

@interface IGDirectThreadGroupMetadataBuilder : NSObject
{
    _Bool _isMentionsMuted;
    NSString *_lastMentionedMessageId;
    IGDirectThreadGroupPhotoIdentifier *_groupPhotoIdentifier;
    NSString *_customName;
    NSSet *_adminUserIds;
    _Bool _adminApprovalRequired;
}

+ (id)directThreadGroupMetadataFromExistingDirectThreadGroupMetadata:(id)arg1;
+ (id)directThreadGroupMetadata;
- (void).cxx_destruct;
- (id)withAdminApprovalRequired:(_Bool)arg1;
- (id)withAdminUserIds:(id)arg1;
- (id)withCustomName:(id)arg1;
- (id)withGroupPhotoIdentifier:(id)arg1;
- (id)withLastMentionedMessageId:(id)arg1;
- (id)withIsMentionsMuted:(_Bool)arg1;
- (id)build;

@end

