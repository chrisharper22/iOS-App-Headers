//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectUIMessage-Protocol.h>

@class IGDirectEmbeddedPublishedMessage, IGDirectForwardMetadata, IGDirectPowerupsMetadata, IGDirectUIMessageMetadata, NSArray, NSString;

@interface IGDirectText : NSObject <IGDirectUIMessage>
{
    long long _textType;
    _Bool _isShhMode;
    _Bool _sendSilently;
    IGDirectEmbeddedPublishedMessage *_quotedMessage;
    NSArray *_reactions;
    IGDirectForwardMetadata *_forwardMetadata;
    IGDirectPowerupsMetadata *_powerupsMetadata;
    IGDirectUIMessageMetadata *_metadata;
    NSString *_text;
    NSString *_translatedText;
    NSArray *_mentionedUserPks;
    NSArray *_mentionedUsers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool sendSilently; // @synthesize sendSilently=_sendSilently;
@property(readonly, copy, nonatomic) NSArray *mentionedUsers; // @synthesize mentionedUsers=_mentionedUsers;
@property(readonly, copy, nonatomic) NSArray *mentionedUserPks; // @synthesize mentionedUserPks=_mentionedUserPks;
@property(readonly, copy, nonatomic) NSString *translatedText; // @synthesize translatedText=_translatedText;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) IGDirectUIMessageMetadata *metadata; // @synthesize metadata=_metadata;
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
- (id)messageId;
- (id)contentTypeString;
- (unsigned long long)messageType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long textType;
- (id)initWithMetadata:(id)arg1 text:(id)arg2 translatedText:(id)arg3 mentionedUserPks:(id)arg4 mentionedUsers:(id)arg5 sendSilently:(_Bool)arg6 reactions:(id)arg7 quotedMessage:(id)arg8 forwardMetadata:(id)arg9 powerupsMetadata:(id)arg10 isShhMode:(_Bool)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

