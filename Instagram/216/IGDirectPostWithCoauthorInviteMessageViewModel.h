//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageViewModelProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class IGDirectGradient, IGDirectMessageCellViewModel, IGDirectPostShare, IGDirectReshareDiffIdentifier, IGMedia, IGStyledString, NSString;

@interface IGDirectPostWithCoauthorInviteMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGListDiffable>
{
    IGDirectPostShare *_postMessage;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    IGDirectReshareDiffIdentifier *_diffId;
    _Bool _showViewRequestFooter;
    IGMedia *_media;
    IGStyledString *_headerString;
    IGDirectGradient *_footerBackgroundGradient;
    struct CGSize _headerSize;
    struct CGSize _footerSize;
    struct CGSize _contentSize;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showViewRequestFooter; // @synthesize showViewRequestFooter=_showViewRequestFooter;
@property(readonly, nonatomic) IGDirectGradient *footerBackgroundGradient; // @synthesize footerBackgroundGradient=_footerBackgroundGradient;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) struct CGSize footerSize; // @synthesize footerSize=_footerSize;
@property(readonly, nonatomic) struct CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(readonly, copy, nonatomic) IGStyledString *headerString; // @synthesize headerString=_headerString;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)contentType;
- (id)messageCellViewModel;
- (id)messageMetadata;
- (double)contentHeight;
- (id)initWithPostMessage:(id)arg1 messageCellViewModel:(id)arg2 otherUser:(id)arg3 showViewRequestFooter:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

