//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGFeedItemPreviewingControllerProtocol-Protocol.h"

@class IGFeedItemPreviewingHandler, IGMedia, NSArray, UIImage, UIView;

@protocol FeedItemPreviewing <IGFeedItemPreviewingControllerProtocol>
- (NSArray *)feedItemPreviewingHandler:(IGFeedItemPreviewingHandler *)arg1 actionsForPoint:(struct CGPoint)arg2;
- (UIImage *)feedItemPreviewingHandler:(IGFeedItemPreviewingHandler *)arg1 imageForItemAtPoint:(struct CGPoint)arg2;
- (struct CGRect)feedItemPreviewingHandler:(IGFeedItemPreviewingHandler *)arg1 rectForItemAtPoint:(struct CGPoint)arg2;
- (IGMedia *)feedItemPreviewingHandler:(IGFeedItemPreviewingHandler *)arg1 feedItemInPoint:(struct CGPoint)arg2;
- (UIView *)feedItemPreviewingHandlerInView:(IGFeedItemPreviewingHandler *)arg1;
@end

