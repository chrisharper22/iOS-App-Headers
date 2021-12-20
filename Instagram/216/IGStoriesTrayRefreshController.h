//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStoryDataController, NSDate;

@interface IGStoriesTrayRefreshController : NSObject
{
    _Bool _isListeningFeedVisiblityChange;
    NSDate *_lastTimeOnFeedSurface;
    _Bool _isVisitingProfileFromStoriesTray;
    IGStoryDataController *_storyDataController;
}

- (void).cxx_destruct;
- (void)_triggerLocalResort;
- (void)notifyWarmStartWithTimeIntervalSinceBackground:(double)arg1;
- (void)notifyMainFeedDidDisappear;
- (void)notifyMainFeedDidAppear;
- (void)notifyStoriesPostingDismissToFeed;
- (void)notifyVisitingProfileFromStoriesTray;
- (void)updateIsListeningFeedVisibilityChange:(_Bool)arg1;
- (id)initWithStoryDataController:(id)arg1;

@end
