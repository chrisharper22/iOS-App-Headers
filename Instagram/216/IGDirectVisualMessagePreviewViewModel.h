//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectVisualMessageDisplayViewModelProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class IGDirectMessageCellViewModel, IGDirectVisualMessage, IGDirectVisualMessagePreviewBubbleViewModel, IGDirectVisualMessagePreviewThumbnailViewModel, IGDirectVisualMessageViewModel, NSOrderedSet, NSString;

@interface IGDirectVisualMessagePreviewViewModel : NSObject <IGListDiffable, IGDirectVisualMessageDisplayViewModelProtocol>
{
    IGDirectVisualMessage *_visualMessage;
    NSOrderedSet *_unseenVisualMessages;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    IGDirectVisualMessageViewModel *_visualMessageViewModel;
    IGDirectVisualMessagePreviewThumbnailViewModel *_previewThumbnailViewModel;
    IGDirectVisualMessagePreviewBubbleViewModel *_visualMessagePreviewBubbleViewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectVisualMessagePreviewBubbleViewModel *visualMessagePreviewBubbleViewModel; // @synthesize visualMessagePreviewBubbleViewModel=_visualMessagePreviewBubbleViewModel;
@property(readonly, nonatomic) IGDirectVisualMessagePreviewThumbnailViewModel *previewThumbnailViewModel; // @synthesize previewThumbnailViewModel=_previewThumbnailViewModel;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)visualMessageViewModel;
- (id)unseenVisualMessages;
- (id)visualMessage;
- (id)contentType;
- (double)contentHeight;
- (id)messageCellViewModel;
- (id)messageMetadata;
@property(readonly, nonatomic) long long mediaType;
- (id)initWithVisualMessage:(id)arg1 unseenVisualMessages:(id)arg2 messageCellViewModel:(id)arg3 visualMessageViewModel:(id)arg4 previewThumbnailViewModel:(id)arg5 displayPlayButton:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

