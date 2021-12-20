//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageViewModelProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class IGDirectMessageCellViewModel, IGDirectReactionsCellLayoutSpec, IGDirectUIMessageMetadata, NSString, UIImage;

@interface IGDirectReactionMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGListDiffable>
{
    IGDirectUIMessageMetadata *_messageMetadata;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    IGDirectReactionsCellLayoutSpec *_layoutSpec;
    NSString *_contentType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) IGDirectReactionsCellLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
@property(readonly, nonatomic) IGDirectUIMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) UIImage *image;
- (double)contentHeight;
- (id)initWithReactionMessage:(id)arg1 messageCellViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
