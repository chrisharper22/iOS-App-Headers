//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStoryViewerViewModel, NSArray, NSDictionary, NSString;
@protocol IGStoryItemType;

@protocol IGStoryFullscreenSectionLoggingContextType <NSObject>
- (NSDictionary *)finalStateFieldsForStoryItem:(id <IGStoryItemType>)arg1;
- (NSString *)videoPlayerStateForStoryItem:(id <IGStoryItemType>)arg1;
- (_Bool)hasMediaLoaded:(id <IGStoryItemType>)arg1;
- (_Bool)loadedOnImpressionForStoryItem:(id <IGStoryItemType>)arg1;
- (long long)totalProfileTapCountForStoryItem:(id <IGStoryItemType>)arg1;
- (NSArray *)storyTapActionsForStoryItem:(id <IGStoryItemType>)arg1;
- (NSDictionary *)urlTapCountForStoryItem:(id <IGStoryItemType>)arg1;
- (NSDictionary *)commonFieldsForStoryItem:(id <IGStoryItemType>)arg1;
- (double)mediaSecondsElapsed:(id <IGStoryItemType>)arg1;
- (double)totalPauseDurationFromTrayInViewerForStoryItem:(id <IGStoryItemType>)arg1;
- (double)totalPauseDurationForStoryItem:(id <IGStoryItemType>)arg1;
- (double)startTimeForStoryItem:(id <IGStoryItemType>)arg1;
- (double)totalPauseDurationForStory:(IGStoryViewerViewModel *)arg1;
- (double)startTimeForStory:(IGStoryViewerViewModel *)arg1;
@end
