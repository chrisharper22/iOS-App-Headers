//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGArchiveStoryPresenter, IGStoryArchiveMapViewController, NSArray, UIViewController;
@protocol IGStoryItemType;

@protocol IGStoryArchiveMapViewControllerDelegate <NSObject>
- (void)storyArchiveMapViewController:(IGStoryArchiveMapViewController *)arg1 didTapViewDayForStoryViewer:(UIViewController *)arg2 storyPresenter:(IGArchiveStoryPresenter *)arg3;
- (void)storyArchiveMapViewController:(IGStoryArchiveMapViewController *)arg1 didNavigateToStoryItem:(id <IGStoryItemType>)arg2;
- (void)storyArchiveMapViewController:(IGStoryArchiveMapViewController *)arg1 didLoadDayReelInfos:(NSArray *)arg2 feedItems:(NSArray *)arg3;
@end

