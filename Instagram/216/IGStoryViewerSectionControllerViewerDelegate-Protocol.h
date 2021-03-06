//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMedia, IGStoryReel, IGStoryViewerCell, IGStoryViewerSectionController, IGStoryViewerSource, UIView;

@protocol IGStoryViewerSectionControllerViewerDelegate <NSObject>
- (void)storyViewerSectionController:(IGStoryViewerSectionController *)arg1 willDisplayViewerSource:(IGStoryViewerSource *)arg2 position:(long long)arg3;
- (void)storyViewerSectionController:(IGStoryViewerSectionController *)arg1 presentStoryForReel:(IGStoryReel *)arg2 media:(IGMedia *)arg3 fromView:(UIView *)arg4 profilePictureView:(UIView *)arg5;
- (void)storyViewerSectionController:(IGStoryViewerSectionController *)arg1 didTapProductThumbnailInViewerCell:(IGStoryViewerCell *)arg2;
- (void)storyViewerSectionController:(IGStoryViewerSectionController *)arg1 didTapCheckmarkButtonInViewerCell:(IGStoryViewerCell *)arg2;
- (void)storyViewerSectionController:(IGStoryViewerSectionController *)arg1 didTapMoreButtonInViewerCell:(IGStoryViewerCell *)arg2;
- (void)storyViewerSectionController:(IGStoryViewerSectionController *)arg1 didHideViewerSource:(IGStoryViewerSource *)arg2;
- (void)storyViewerSectionController:(IGStoryViewerSectionController *)arg1 didTapViewerSource:(IGStoryViewerSource *)arg2;
@end

