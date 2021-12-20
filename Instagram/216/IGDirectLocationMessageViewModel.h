//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageViewModelProtocol-Protocol.h"
#import "IGDirectReshareMessageHeaderViewModel-Protocol.h"
#import "IGDirectReshareMessageMediaViewModel-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class IGDirectMessageCellViewModel, IGDirectUIMessageMetadata, IGLocation, NSArray, NSString;

@interface IGDirectLocationMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGDirectReshareMessageHeaderViewModel, IGDirectReshareMessageMediaViewModel, IGListDiffable>
{
    struct CGSize _contentSize;
    NSString *_locationName;
    NSString *_streetAddress;
    NSArray *_previewMedia;
    IGDirectUIMessageMetadata *_messageMetadata;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    NSString *_contentType;
    IGLocation *_location;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *previewMedia; // @synthesize previewMedia=_previewMedia;
@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
@property(readonly, nonatomic) IGDirectUIMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (double)thumbnailSize;
- (id)resharePreviewMediaUrls;
- (id)module;
- (unsigned long long)headerImageBadgeImageAsset;
- (id)usersInHeaderFacepile;
- (id)headerImageSpecifier;
- (id)reshareSubtitle;
- (id)reshareTitle;
- (long long)layoutType;
- (id)bubbleStyle;
- (_Bool)isChevronHidden;
- (_Bool)senderIsCurrentUser;
@property(readonly, nonatomic) struct CGSize contentSize;
- (double)contentHeight;
- (id)initWithLocationMessage:(id)arg1 messageCellViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

