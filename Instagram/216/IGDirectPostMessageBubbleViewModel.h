//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGDirectReshareMessageHeaderViewModel-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGDirectMessageBlurredImageViewModel, IGDirectMessageBubbleLayoutSpec, IGDirectMessageBubbleStyle, IGDirectMessageCellViewModel, IGDirectTextMessageBubbleViewModel, IGImageURL, IGMedia, NSString;
@protocol IGSponsoredInfoProviding;

@interface IGDirectPostMessageBubbleViewModel : FBValueObject <IGDirectReshareMessageHeaderViewModel, NSCopying, NSCoding>
{
    _Bool _displaysChevron;
    IGMedia *_media;
    id <IGSponsoredInfoProviding> _sponsoredInfoProvider;
    IGImageURL *_imageURL;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    IGDirectMessageBubbleStyle *_bubbleStyle;
    IGDirectMessageBubbleLayoutSpec *_bubbleLayoutSpec;
    IGDirectTextMessageBubbleViewModel *_captionTextModel;
    IGDirectMessageBubbleStyle *_captionBubbleStyle;
    IGDirectMessageBlurredImageViewModel *_blurredImageViewModel;
    NSString *_sentPostItemPk;
    long long _tagIndicator;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool displaysChevron; // @synthesize displaysChevron=_displaysChevron;
@property(readonly, nonatomic) long long tagIndicator; // @synthesize tagIndicator=_tagIndicator;
@property(readonly, copy, nonatomic) NSString *sentPostItemPk; // @synthesize sentPostItemPk=_sentPostItemPk;
@property(readonly, copy, nonatomic) IGDirectMessageBlurredImageViewModel *blurredImageViewModel; // @synthesize blurredImageViewModel=_blurredImageViewModel;
@property(readonly, copy, nonatomic) IGDirectMessageBubbleStyle *captionBubbleStyle; // @synthesize captionBubbleStyle=_captionBubbleStyle;
@property(readonly, copy, nonatomic) IGDirectTextMessageBubbleViewModel *captionTextModel; // @synthesize captionTextModel=_captionTextModel;
@property(readonly, copy, nonatomic) IGDirectMessageBubbleLayoutSpec *bubbleLayoutSpec; // @synthesize bubbleLayoutSpec=_bubbleLayoutSpec;
@property(readonly, copy, nonatomic) IGDirectMessageBubbleStyle *bubbleStyle; // @synthesize bubbleStyle=_bubbleStyle;
@property(readonly, copy, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
@property(readonly, copy, nonatomic) IGImageURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) id <IGSponsoredInfoProviding> sponsoredInfoProvider; // @synthesize sponsoredInfoProvider=_sponsoredInfoProvider;
@property(readonly, copy, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (id)initWithContentSize:(struct CGSize)arg1 media:(id)arg2 sponsoredInfoProvider:(id)arg3 imageURL:(id)arg4 messageCellViewModel:(id)arg5 bubbleStyle:(id)arg6 bubbleLayoutSpec:(id)arg7 captionTextModel:(id)arg8 captionBubbleStyle:(id)arg9 blurredImageViewModel:(id)arg10 sentPostItemPk:(id)arg11 tagIndicator:(long long)arg12 displaysChevron:(_Bool)arg13;
- (id)module;
- (unsigned long long)headerImageBadgeImageAsset;
- (id)usersInHeaderFacepile;
- (id)headerImageSpecifier;
- (id)reshareSubtitle;
- (id)reshareTitle;
- (long long)layoutType;
- (id)theme;
- (_Bool)isChevronHidden;
- (_Bool)senderIsCurrentUser;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

