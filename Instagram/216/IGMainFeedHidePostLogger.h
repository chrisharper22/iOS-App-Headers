//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGMainFeedHidePostLogger : NSObject
{
}

+ (void)reportDismissExploreItemsOnMainFeed:(id)arg1 userSession:(id)arg2;
+ (void)_reportUserDismissItem:(id)arg1 withEventType:(long long)arg2 userSession:(id)arg3;
+ (void)_logHidingForItem:(id)arg1 withEventType:(long long)arg2 withSourceModule:(id)arg3 extraInfo:(id)arg4 userSession:(id)arg5 sponsoredSupportConfiguration:(id)arg6;
+ (void)reportAndLogHidingForItem:(id)arg1 withEventType:(long long)arg2 withSourceModule:(id)arg3 extraInfo:(id)arg4 userSession:(id)arg5 sponsoredSupportConfiguration:(id)arg6;

@end

