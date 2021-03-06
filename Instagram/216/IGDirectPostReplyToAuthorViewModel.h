//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageViewModelProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class IGDirectMessageCellViewModel, IGDirectPostShare, IGDirectReshareDiffIdentifier, IGDirectTextMessageBubbleViewModel, IGMedia, IGStyledString, NSString;
@protocol IGSponsoredInfoProviding;

@interface IGDirectPostReplyToAuthorViewModel : NSObject <IGDirectMessageViewModelProtocol, IGListDiffable>
{
    IGDirectPostShare *_postMessage;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    IGDirectReshareDiffIdentifier *_diffId;
    IGMedia *_media;
    id <IGSponsoredInfoProviding> _sponsoredInfoProvider;
    IGDirectTextMessageBubbleViewModel *_textBubbleViewModel;
    IGStyledString *_headerString;
    struct CGSize _headerSize;
    struct CGSize _contentSize;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) struct CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(readonly, copy, nonatomic) IGStyledString *headerString; // @synthesize headerString=_headerString;
@property(readonly, nonatomic) IGDirectTextMessageBubbleViewModel *textBubbleViewModel; // @synthesize textBubbleViewModel=_textBubbleViewModel;
@property(readonly, nonatomic) id <IGSponsoredInfoProviding> sponsoredInfoProvider; // @synthesize sponsoredInfoProvider=_sponsoredInfoProvider;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) _Bool displaysShoppingIndicator;
@property(readonly, nonatomic) _Bool displaysSidecarIndicator;
@property(readonly, nonatomic) _Bool displaysVideoIndicator;
@property(readonly, nonatomic) long long videoIndicatorState;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)contentType;
- (id)messageCellViewModel;
- (id)messageMetadata;
- (double)contentHeight;
- (id)initWithPostMessage:(id)arg1 messageCellViewModel:(id)arg2 launcherSetProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

