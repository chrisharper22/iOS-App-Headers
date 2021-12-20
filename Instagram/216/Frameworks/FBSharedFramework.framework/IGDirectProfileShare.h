//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectShareProtocol-Protocol.h>
#import <FBSharedFramework/IGDirectUIMessage-Protocol.h>

@class IGDirectEmbeddedPublishedMessage, IGDirectForwardMetadata, IGDirectPowerupsMetadata, IGDirectUIMessageMetadata, IGUser, NSArray, NSString;

@interface IGDirectProfileShare : NSObject <IGDirectUIMessage, IGDirectShareProtocol>
{
    IGDirectUIMessageMetadata *_metadata;
    _Bool _isShhMode;
    IGDirectEmbeddedPublishedMessage *_quotedMessage;
    NSArray *_reactions;
    NSArray *_previewMedia;
    IGDirectForwardMetadata *_forwardMetadata;
    IGDirectPowerupsMetadata *_powerupsMetadata;
    IGUser *_sharedUser;
    NSString *_comment;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) IGUser *sharedUser; // @synthesize sharedUser=_sharedUser;
@property(readonly, nonatomic) _Bool isShhMode; // @synthesize isShhMode=_isShhMode;
@property(readonly, nonatomic) IGDirectPowerupsMetadata *powerupsMetadata; // @synthesize powerupsMetadata=_powerupsMetadata;
@property(readonly, nonatomic) IGDirectForwardMetadata *forwardMetadata; // @synthesize forwardMetadata=_forwardMetadata;
@property(readonly, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(readonly, nonatomic) IGDirectEmbeddedPublishedMessage *quotedMessage; // @synthesize quotedMessage=_quotedMessage;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
- (id)replyable;
- (id)metadata;
- (unsigned long long)messageType;
@property(readonly, nonatomic) NSArray *previewMedia; // @synthesize previewMedia=_previewMedia;
- (id)subtitle;
- (id)title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)messageId;
- (id)contentTypeString;
- (id)initWithMetadata:(id)arg1 sharedUser:(id)arg2 previewMedia:(id)arg3 comment:(id)arg4 reactions:(id)arg5 forwardMetadata:(id)arg6 isShhMode:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

