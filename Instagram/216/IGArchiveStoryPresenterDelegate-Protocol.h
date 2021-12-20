//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGArchiveStoryPresenter, NSString, UIView, UIViewController;
@protocol IGStoryItemType;

@protocol IGArchiveStoryPresenterDelegate <NSObject>
- (void)archiveStoryPresenter:(IGArchiveStoryPresenter *)arg1 didTapViewDayForStoryViewer:(UIViewController *)arg2;
- (UIView *)dismissingToViewForArchiveStoryPresenter:(IGArchiveStoryPresenter *)arg1;
- (void)didDismissArchiveStoryPresenter:(IGArchiveStoryPresenter *)arg1;
- (void)archiveStoryPresenter:(IGArchiveStoryPresenter *)arg1 didNavigateToStoryItem:(id <IGStoryItemType>)arg2;
- (void)archiveStoryPresenter:(IGArchiveStoryPresenter *)arg1 didPresentStoryItem:(id <IGStoryItemType>)arg2;
- (void)archiveStoryPresenter:(IGArchiveStoryPresenter *)arg1 didFocusonReelWithPK:(NSString *)arg2 forStoryViewer:(UIViewController *)arg3;
- (void)archiveStoryPresenter:(IGArchiveStoryPresenter *)arg1 didFinishStoryViewer:(UIViewController *)arg2;
@end

