//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStoryAddToStoryNuxModel, IGStoryTrayController, IGStoryTrayViewModel;

@protocol IGStoryTraySectionControllerViewerDelegate <NSObject>
- (void)storyTraySectionControllerDidShowShimmer:(IGStoryTrayController *)arg1;
- (void)storyTraySectionControllerScrollViewWillScrollNearRight:(IGStoryTrayController *)arg1;
- (void)storyTraySectionController:(IGStoryTrayController *)arg1 didPublishHighlightNavigationAction:(long long)arg2;
- (void)storyTraySectionController:(IGStoryTrayController *)arg1 willShowViewerWithItem:(IGStoryTrayViewModel *)arg2;
- (void)storyTraySectionController:(IGStoryTrayController *)arg1 didDismissViewerWithAddToStoryNUXModel:(IGStoryAddToStoryNuxModel *)arg2;
@end

