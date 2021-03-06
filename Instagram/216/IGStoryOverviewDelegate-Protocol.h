//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGUser, UIViewController;
@protocol IGStoryItemType;

@protocol IGStoryOverviewDelegate <NSObject>
- (void)storyOverviewControllerDidReplaceSponsorPartner:(UIViewController *)arg1 previousUser:(IGUser *)arg2 newUser:(IGUser *)arg3;
- (void)storyOverviewControllerDidAddSponsorPartner:(UIViewController *)arg1 withUser:(IGUser *)arg2;
- (void)storyOverviewControllerDidRemoveSponsorPartner:(UIViewController *)arg1 withUser:(IGUser *)arg2;
- (void)storyOverviewDidFinish:(UIViewController *)arg1 withExitPoint:(unsigned long long)arg2 currentOverviewStoryItem:(id <IGStoryItemType>)arg3;
- (void)storyOverviewControllerWillSFSLTPost:(UIViewController *)arg1;
- (void)storyOverviewControllerWillReportPost:(UIViewController *)arg1;
- (void)storyOverviewControllerWillSharePost:(UIViewController *)arg1;
- (void)storyOverviewControllerWillDeletePost:(UIViewController *)arg1;
- (void)storyOverviewControllerWillSavePost:(UIViewController *)arg1;
- (void)storyOverviewControllerWillSaveWholeStory:(UIViewController *)arg1;
@end

