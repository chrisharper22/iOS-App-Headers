//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStoryFullscreenSectionLoggingContext, IGStoryViewerViewModel, NSString, UIViewController;
@protocol IGStoryItemType, IGStoryOverviewDelegate;

@protocol IGStoryOverviewPresentationControllerProtocol <NSObject>
- (void)didDismissOverview;
- (void)updateStoryViewModel:(IGStoryViewerViewModel *)arg1 currentStoryItem:(id <IGStoryItemType>)arg2;
- (void)presentOverviewWithShouldShowInsights:(_Bool)arg1 analyticsModule:(NSString *)arg2 loggingContext:(IGStoryFullscreenSectionLoggingContext *)arg3 storyViewerViewModel:(IGStoryViewerViewModel *)arg4 currentStoryItem:(id <IGStoryItemType>)arg5 storyOverviewDelegate:(id <IGStoryOverviewDelegate>)arg6 viewController:(UIViewController *)arg7 mediaViewCenter:(struct CGPoint)arg8;
@end

