//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGDirectUIMessage-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGCameraEffectPreview, IGDirectEmbeddedPublishedMessage, IGDirectForwardMetadata, IGDirectPowerupsMetadata, IGDirectUIMessageMetadata, NSArray, NSString;

@interface IGDirectCameraEffectMessage : FBValueObject <IGDirectUIMessage, NSCopying, NSCoding>
{
    _Bool _isShhMode;
    IGDirectUIMessageMetadata *_metadata;
    IGCameraEffectPreview *_content;
    IGDirectEmbeddedPublishedMessage *_quotedMessage;
    NSArray *_likers;
    NSArray *_reactions;
    IGDirectForwardMetadata *_forwardMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isShhMode; // @synthesize isShhMode=_isShhMode;
@property(readonly, copy, nonatomic) IGDirectForwardMetadata *forwardMetadata; // @synthesize forwardMetadata=_forwardMetadata;
@property(readonly, copy, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(readonly, copy, nonatomic) NSArray *likers; // @synthesize likers=_likers;
@property(readonly, copy, nonatomic) IGDirectEmbeddedPublishedMessage *quotedMessage; // @synthesize quotedMessage=_quotedMessage;
@property(readonly, copy, nonatomic) IGCameraEffectPreview *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) IGDirectUIMessageMetadata *metadata; // @synthesize metadata=_metadata;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1 content:(id)arg2 quotedMessage:(id)arg3 likers:(id)arg4 reactions:(id)arg5 forwardMetadata:(id)arg6 isShhMode:(_Bool)arg7;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) IGDirectPowerupsMetadata *powerupsMetadata;
- (_Bool)hideInThread;
- (id)actionSummaryProvider;
- (id)replyable;
- (id)messageId;
- (id)contentTypeString;
- (unsigned long long)messageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
