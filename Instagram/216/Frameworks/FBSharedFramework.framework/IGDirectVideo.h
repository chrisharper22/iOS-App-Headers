//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMediaContent-Protocol.h>
#import <FBSharedFramework/IGDirectMessageReplyable-Protocol.h>
#import <FBSharedFramework/IGDirectUIMessage-Protocol.h>
#import <FBSharedFramework/IGMediaViewerSpecifierProvider-Protocol.h>

@class IGDirectEmbeddedPublishedMessage, IGDirectForwardMetadata, IGDirectItemIdBasedImageURLProcessor, IGDirectPowerupsMetadata, IGDirectUIMessageMetadata, IGPhoto, IGVideo, NSArray, NSData, NSNumber, NSString, NSURL;

@interface IGDirectVideo : NSObject <IGDirectUIMessage, IGDirectMessageReplyable, IGDirectMediaContent, IGMediaViewerSpecifierProvider>
{
    IGDirectUIMessageMetadata *_metadata;
    _Bool _isShhMode;
    IGDirectEmbeddedPublishedMessage *_quotedMessage;
    NSArray *_reactions;
    IGDirectItemIdBasedImageURLProcessor *_previewImageURLProcessor;
    IGDirectForwardMetadata *_forwardMetadata;
    IGDirectPowerupsMetadata *_powerupsMetadata;
    IGVideo *_video;
    NSString *_videoResult;
    IGPhoto *_photo;
    NSData *_previewImageData;
    NSURL *_localPlaybackURL;
    NSNumber *_isFilmstripSeen;
    struct CGSize _previewImageSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *isFilmstripSeen; // @synthesize isFilmstripSeen=_isFilmstripSeen;
@property(readonly, nonatomic) struct CGSize previewImageSize; // @synthesize previewImageSize=_previewImageSize;
@property(readonly, copy, nonatomic) NSURL *localPlaybackURL; // @synthesize localPlaybackURL=_localPlaybackURL;
@property(readonly, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(retain, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
@property(readonly, copy, nonatomic) NSString *videoResult; // @synthesize videoResult=_videoResult;
@property(retain, nonatomic) IGVideo *video; // @synthesize video=_video;
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
- (id)mediaViewerSpecifier;
@property(readonly, nonatomic) IGDirectItemIdBasedImageURLProcessor *previewImageURLProcessor; // @synthesize previewImageURLProcessor=_previewImageURLProcessor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)messageId;
- (id)contentTypeString;
- (id)initWithMetadata:(id)arg1 video:(id)arg2 photo:(id)arg3 imageData:(id)arg4 localPlaybackURL:(id)arg5 size:(struct CGSize)arg6 reactions:(id)arg7 forwardMetadata:(id)arg8 isShhMode:(_Bool)arg9 isFilmstripSeen:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

