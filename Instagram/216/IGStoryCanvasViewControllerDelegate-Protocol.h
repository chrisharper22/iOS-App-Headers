//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStoryCanvasViewController, NSArray, NSSet, NSString;

@protocol IGStoryCanvasViewControllerDelegate <NSObject>
- (void)storyCanvasViewController:(IGStoryCanvasViewController *)arg1 shouldRemoveBadgeOnItemAtIndex:(long long)arg2;
- (void)storyCanvasViewController:(IGStoryCanvasViewController *)arg1 didSelectItemWithTitle:(NSString *)arg2;
- (void)storyCanvasViewControllerWillEndEditing:(IGStoryCanvasViewController *)arg1;
- (void)storyCanvasViewControllerDidStartEditing:(IGStoryCanvasViewController *)arg1;
- (_Bool)storyCanvasViewControllerDidTapBack:(IGStoryCanvasViewController *)arg1;
- (void)storyCanvasViewControllerDidUpdateGalleryPermissions:(IGStoryCanvasViewController *)arg1;
- (void)storyCanvasViewController:(IGStoryCanvasViewController *)arg1 configureVariantSelectorCloseButtonVisibility:(_Bool)arg2;
- (void)storyCanvasViewController:(IGStoryCanvasViewController *)arg1 configureGalleryButtonVisibility:(_Bool)arg2 animated:(_Bool)arg3;
- (void)storyCanvasViewController:(IGStoryCanvasViewController *)arg1 configureGradientButtonVisibility:(_Bool)arg2 animated:(_Bool)arg3;
- (void)storyCanvasViewController:(IGStoryCanvasViewController *)arg1 showOverlayControls:(_Bool)arg2 animated:(_Bool)arg3;
- (void)storyCanvasViewController:(IGStoryCanvasViewController *)arg1 updateGradientColor:(NSArray *)arg2 gradientAngle:(double)arg3;
- (void)storyCanvasViewController:(IGStoryCanvasViewController *)arg1 showModeSwitcher:(_Bool)arg2;
- (void)storyCanvasViewController:(IGStoryCanvasViewController *)arg1 selectDialIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)storyCanvasViewControllerReloadDial:(IGStoryCanvasViewController *)arg1;
- (void)storyCanvasViewControllerShowDial:(IGStoryCanvasViewController *)arg1 withDialIndex:(long long)arg2;
- (void)storyCanvasViewControllerDidTapClose:(IGStoryCanvasViewController *)arg1;
- (void)storyCanvasViewController:(IGStoryCanvasViewController *)arg1 didTransitionToPostCapture:(_Bool)arg2 mediaCompositions:(NSArray *)arg3;
- (void)storyCanvasViewController:(IGStoryCanvasViewController *)arg1 didShareToStory:(long long)arg2 andDirectRecipients:(NSSet *)arg3;
@end

