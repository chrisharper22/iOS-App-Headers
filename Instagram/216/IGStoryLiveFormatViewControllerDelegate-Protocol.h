//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGStoryFormatViewControllerProtocolDelegate-Protocol.h"

@class IGStoryLiveFormatViewController, IGUpcomingEvent;

@protocol IGStoryLiveFormatViewControllerDelegate <IGStoryFormatViewControllerProtocolDelegate>
- (void)storyLiveFormatViewController:(IGStoryLiveFormatViewController *)arg1 didSelectShareUpcomingEvent:(IGUpcomingEvent *)arg2;
- (void)storyLiveFormatViewController:(IGStoryLiveFormatViewController *)arg1 didEndLiveSuccessfully:(_Bool)arg2 sharedToIGTV:(_Bool)arg3 startNewLive:(_Bool)arg4;
- (void)storyLiveFormatViewControllerDidGoLive:(IGStoryLiveFormatViewController *)arg1;
- (void)storyLiveFormatViewControllerWillGoLive:(IGStoryLiveFormatViewController *)arg1;
@end

