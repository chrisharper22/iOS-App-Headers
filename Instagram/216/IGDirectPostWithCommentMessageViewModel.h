//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageViewModelProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class IGCommentModel, IGDirectMessageBlurredImageViewModel, IGDirectMessageCellViewModel, IGDirectReshareDiffIdentifier, IGDirectTextMessageBubbleViewModel, IGDirectUIMessageMetadata, IGImageSpecifier, IGMedia, NSString;

@interface IGDirectPostWithCommentMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGListDiffable>
{
    IGDirectUIMessageMetadata *_messageMetadata;
    NSString *_contentType;
    IGDirectReshareDiffIdentifier *_diffId;
    double _contentHeight;
    IGDirectMessageCellViewModel *_directMessageCellViewModel;
    IGMedia *_media;
    IGCommentModel *_sharedComment;
    IGDirectTextMessageBubbleViewModel *_messageTitleTextModel;
    IGImageSpecifier *_imageSpecifier;
    IGDirectTextMessageBubbleViewModel *_sharedCommentTextModel;
    IGDirectMessageBlurredImageViewModel *_blurredImageViewModel;
    struct CGSize _contentSize;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGDirectMessageBlurredImageViewModel *blurredImageViewModel; // @synthesize blurredImageViewModel=_blurredImageViewModel;
@property(readonly, nonatomic) IGDirectTextMessageBubbleViewModel *sharedCommentTextModel; // @synthesize sharedCommentTextModel=_sharedCommentTextModel;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) IGImageSpecifier *imageSpecifier; // @synthesize imageSpecifier=_imageSpecifier;
@property(readonly, nonatomic) IGDirectTextMessageBubbleViewModel *messageTitleTextModel; // @synthesize messageTitleTextModel=_messageTitleTextModel;
@property(readonly, nonatomic) IGCommentModel *sharedComment; // @synthesize sharedComment=_sharedComment;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *directMessageCellViewModel; // @synthesize directMessageCellViewModel=_directMessageCellViewModel;
- (id)_messageTitleStyledString;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)contentType;
- (id)messageCellViewModel;
- (id)messageMetadata;
- (double)contentHeight;
- (id)initWithPostMessage:(id)arg1 messageCellViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

