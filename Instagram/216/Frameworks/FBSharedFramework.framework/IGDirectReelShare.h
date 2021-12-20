//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectUIMessage-Protocol.h>

@class IGDirectEmbeddedPublishedMessage, IGDirectForwardMetadata, IGDirectPowerupsMetadata, IGDirectStoryInteraction, IGDirectUIMessageMetadata, IGGiphyGIFModel, IGUser, NSArray, NSString;
@protocol IGExpiringMediaPosting;

@interface IGDirectReelShare : NSObject <IGDirectUIMessage>
{
    IGDirectUIMessageMetadata *_metadata;
    long long _textType;
    _Bool _isShhMode;
    _Bool _shouldPersistInThread;
    _Bool _canRepost;
    IGDirectEmbeddedPublishedMessage *_quotedMessage;
    NSArray *_reactions;
    IGDirectForwardMetadata *_forwardMetadata;
    IGDirectPowerupsMetadata *_powerupsMetadata;
    NSString *_text;
    id <IGExpiringMediaPosting> _media;
    NSArray *_mentionedUsers;
    IGUser *_locationTaggedUser;
    NSArray *_brandedContentSponsors;
    IGUser *_sponsorUser;
    NSString *_reelID;
    NSString *_reelTypeString;
    IGDirectStoryInteraction *_storyInteraction;
    NSString *_countdownID;
    IGGiphyGIFModel *_giphyModel;
    NSString *_smbSupportStickerType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *smbSupportStickerType; // @synthesize smbSupportStickerType=_smbSupportStickerType;
@property(readonly, copy, nonatomic) IGGiphyGIFModel *giphyModel; // @synthesize giphyModel=_giphyModel;
@property(readonly, copy, nonatomic) NSString *countdownID; // @synthesize countdownID=_countdownID;
@property(readonly, copy, nonatomic) IGDirectStoryInteraction *storyInteraction; // @synthesize storyInteraction=_storyInteraction;
@property(readonly, copy, nonatomic) NSString *reelTypeString; // @synthesize reelTypeString=_reelTypeString;
@property(readonly, nonatomic) _Bool canRepost; // @synthesize canRepost=_canRepost;
@property(readonly, copy, nonatomic) NSString *reelID; // @synthesize reelID=_reelID;
@property(readonly, nonatomic) _Bool shouldPersistInThread; // @synthesize shouldPersistInThread=_shouldPersistInThread;
@property(readonly, nonatomic) IGUser *sponsorUser; // @synthesize sponsorUser=_sponsorUser;
@property(readonly, copy, nonatomic) NSArray *brandedContentSponsors; // @synthesize brandedContentSponsors=_brandedContentSponsors;
@property(readonly, nonatomic) IGUser *locationTaggedUser; // @synthesize locationTaggedUser=_locationTaggedUser;
@property(readonly, nonatomic) NSArray *mentionedUsers; // @synthesize mentionedUsers=_mentionedUsers;
@property(readonly, nonatomic) id <IGExpiringMediaPosting> media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
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
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)messageId;
- (id)contentTypeString;
@property(readonly, nonatomic) long long textType;
- (id)initWithMetadata:(id)arg1 comment:(id)arg2 textType:(long long)arg3 media:(id)arg4 mentionedUsers:(id)arg5 locationTaggedUser:(id)arg6 brandedContentSponsors:(id)arg7 sponsorUser:(id)arg8 reelID:(id)arg9 reelTypeString:(id)arg10 canRepost:(_Bool)arg11 shouldPersistInThread:(_Bool)arg12 storyInteraction:(id)arg13 reactions:(id)arg14 countdownID:(id)arg15 giphyModel:(id)arg16 smbSupportStickerType:(id)arg17 isShhMode:(_Bool)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

