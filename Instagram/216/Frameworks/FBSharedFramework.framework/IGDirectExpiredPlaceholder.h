//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGDirectUIMessage-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGDirectEmbeddedPublishedMessage, IGDirectForwardMetadata, IGDirectPowerupsMetadata, IGDirectUIMessageMetadata, NSArray, NSString;

@interface IGDirectExpiredPlaceholder : FBValueObject <IGDirectUIMessage, NSCopying, NSCoding>
{
    _Bool _isShhMode;
    IGDirectUIMessageMetadata *_metadata;
    NSString *_title;
    NSString *_message;
    IGDirectEmbeddedPublishedMessage *_quotedMessage;
    NSArray *_reactions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isShhMode; // @synthesize isShhMode=_isShhMode;
@property(readonly, copy, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(readonly, copy, nonatomic) IGDirectEmbeddedPublishedMessage *quotedMessage; // @synthesize quotedMessage=_quotedMessage;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) IGDirectUIMessageMetadata *metadata; // @synthesize metadata=_metadata;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1 title:(id)arg2 message:(id)arg3 quotedMessage:(id)arg4 reactions:(id)arg5 isShhMode:(_Bool)arg6;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) IGDirectPowerupsMetadata *powerupsMetadata;
@property(readonly, nonatomic) IGDirectForwardMetadata *forwardMetadata;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
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

