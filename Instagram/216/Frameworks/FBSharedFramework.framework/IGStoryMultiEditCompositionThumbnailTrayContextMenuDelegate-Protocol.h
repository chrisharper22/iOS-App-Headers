//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGStoryMultiEditCompositionThumbnailTray, UIContextMenuConfiguration, UITargetedPreview;
@protocol UIContextMenuInteractionCommitAnimating;

@protocol IGStoryMultiEditCompositionThumbnailTrayContextMenuDelegate <NSObject>
- (void)multiEditCompositionThumbnailTray:(IGStoryMultiEditCompositionThumbnailTray *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (UITargetedPreview *)multiEditCompositionThumbnailTray:(IGStoryMultiEditCompositionThumbnailTray *)arg1 previewForDismissingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)multiEditCompositionThumbnailTray:(IGStoryMultiEditCompositionThumbnailTray *)arg1 previewForHighlightingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UIContextMenuConfiguration *)multiEditCompositionThumbnailTray:(IGStoryMultiEditCompositionThumbnailTray *)arg1 contextMenuConfigurationForItemAtIndex:(long long)arg2;
@end
