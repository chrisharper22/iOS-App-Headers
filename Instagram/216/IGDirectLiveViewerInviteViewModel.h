//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectExpiringReshareMessageViewModelProtocol-Protocol.h"
#import "IGDirectMessageViewModelProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"
#import "IGMediaViewerSpecifierProvider-Protocol.h"

@class IGDirectArchivedStoryViewModel, IGDirectLiveVideoDiffIdentifier, IGDirectMessageCellViewModel, IGDirectTextMessageBubbleViewModel, IGDirectUIMessageMetadata, IGImageSpecifier, IGStyledString, IGUser, NSAttributedString, NSDate, NSString;

@interface IGDirectLiveViewerInviteViewModel : NSObject <IGDirectExpiringReshareMessageViewModelProtocol, IGDirectMessageViewModelProtocol, IGListDiffable, IGMediaViewerSpecifierProvider>
{
    double _contentHeight;
    double _cellWidth;
    IGDirectLiveVideoDiffIdentifier *_diffId;
    _Bool _broadcastHasEnded;
    _Bool _broadcastHasEndedWithoutIGTV;
    NSDate *_broadcastStartDate;
    IGDirectArchivedStoryViewModel *_archivedStoryViewModel;
    _Bool _isExpired;
    _Bool _shouldPersistInThread;
    _Bool _liveViewExpiredDMEnabled;
    NSString *_CTALabelText;
    IGDirectUIMessageMetadata *_messageMetadata;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    IGDirectTextMessageBubbleViewModel *_textBubbleViewModel;
    IGImageSpecifier *_imageSpecifier;
    NSString *_mediaId;
    NSAttributedString *_headerText;
    IGStyledString *_placeholderText;
    IGUser *_liveBroadcaster;
    long long _liveViewerCount;
    NSString *_contentType;
    NSString *_currentUserPk;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool liveViewExpiredDMEnabled; // @synthesize liveViewExpiredDMEnabled=_liveViewExpiredDMEnabled;
@property(readonly, copy, nonatomic) NSString *currentUserPk; // @synthesize currentUserPk=_currentUserPk;
@property(readonly, nonatomic) _Bool shouldPersistInThread; // @synthesize shouldPersistInThread=_shouldPersistInThread;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(readonly, nonatomic) long long liveViewerCount; // @synthesize liveViewerCount=_liveViewerCount;
@property(readonly, nonatomic) IGUser *liveBroadcaster; // @synthesize liveBroadcaster=_liveBroadcaster;
@property(readonly, nonatomic) IGStyledString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(readonly, copy, nonatomic) NSAttributedString *headerText; // @synthesize headerText=_headerText;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) IGImageSpecifier *imageSpecifier; // @synthesize imageSpecifier=_imageSpecifier;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) IGDirectTextMessageBubbleViewModel *textBubbleViewModel; // @synthesize textBubbleViewModel=_textBubbleViewModel;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
@property(readonly, nonatomic) IGDirectUIMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
- (id)mediaViewerSpecifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)media;
- (id)reelSender;
- (id)addToStoryInThumbnailBackgroundGradient;
- (id)animatedMediaMessageViewModel;
- (id)giphyModel;
- (id)archivedStoryViewModel;
- (double)imageCornerRadius;
- (_Bool)showFalseInformationView;
- (_Bool)showSensitivityView;
@property(readonly, nonatomic) struct CGSize headerSize;
- (id)startDate;
- (_Bool)hasEndedWithoutIGTV;
- (_Bool)hasEnded;
- (_Bool)canRepostOnMention;
@property(readonly, copy, nonatomic) NSString *CTALabelText; // @synthesize CTALabelText=_CTALabelText;
- (id)quickReaction;
- (double)contentHeight;
- (double)cellWidth;
- (id)initWithLiveViewerInvite:(id)arg1 messageCellViewModel:(id)arg2 currentUserPk:(id)arg3 liveViewExpiredDMEnabled:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

