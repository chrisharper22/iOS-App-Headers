//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMessageReplyable-Protocol.h>
#import <FBSharedFramework/IGDirectUIMessage-Protocol.h>

@class IGCommentModel, IGDirectEmbeddedPublishedMessage, IGDirectForwardMetadata, IGDirectHScrollXMA, IGDirectPowerupsMetadata, IGDirectUIMessageMetadata, IGMedia, NSArray, NSString;
@protocol IGSponsoredInfoProviding;

@interface IGDirectPostShare : NSObject <IGDirectUIMessage, IGDirectMessageReplyable>
{
    IGDirectUIMessageMetadata *_metadata;
    _Bool _isShhMode;
    IGDirectEmbeddedPublishedMessage *_quotedMessage;
    NSArray *_reactions;
    IGDirectForwardMetadata *_forwardMetadata;
    IGDirectPowerupsMetadata *_powerupsMetadata;
    IGMedia *_media;
    NSString *_postItemPk;
    unsigned long long _postShareType;
    unsigned long long _postShareSource;
    IGDirectHScrollXMA *_xma;
    IGCommentModel *_previewComment;
    id <IGSponsoredInfoProviding> _sponsoredInfoProvider;
    NSString *_comment;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) id <IGSponsoredInfoProviding> sponsoredInfoProvider; // @synthesize sponsoredInfoProvider=_sponsoredInfoProvider;
@property(readonly, nonatomic) IGCommentModel *previewComment; // @synthesize previewComment=_previewComment;
@property(readonly, nonatomic) IGDirectHScrollXMA *xma; // @synthesize xma=_xma;
@property(readonly, nonatomic) unsigned long long postShareSource; // @synthesize postShareSource=_postShareSource;
@property(readonly, nonatomic) unsigned long long postShareType; // @synthesize postShareType=_postShareType;
@property(readonly, nonatomic) NSString *postItemPk; // @synthesize postItemPk=_postItemPk;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) _Bool isShhMode; // @synthesize isShhMode=_isShhMode;
@property(readonly, nonatomic) IGDirectPowerupsMetadata *powerupsMetadata; // @synthesize powerupsMetadata=_powerupsMetadata;
@property(readonly, nonatomic) IGDirectForwardMetadata *forwardMetadata; // @synthesize forwardMetadata=_forwardMetadata;
@property(readonly, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(readonly, nonatomic) IGDirectEmbeddedPublishedMessage *quotedMessage; // @synthesize quotedMessage=_quotedMessage;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (long long)replyType;
- (long long)replyableConfigurationMediaViewMode;
- (id)replyableConfigurationMedia;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
- (id)replyable;
- (id)metadata;
- (unsigned long long)messageType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadata:(id)arg1 comment:(id)arg2 media:(id)arg3 sponsoredInfoProvider:(id)arg4 postItemPk:(id)arg5 postShareSource:(unsigned long long)arg6 postShareType:(unsigned long long)arg7 previewComment:(id)arg8 reactions:(id)arg9 forwardMetadata:(id)arg10 isShhMode:(_Bool)arg11 xma:(id)arg12;
- (id)messageId;
- (id)contentTypeString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

