//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGActivityCenterNavigationHelper : NSObject
{
}

+ (void)_navigateToBloksScreen:(id)arg1 navigationController:(id)arg2 origin:(id)arg3 appId:(id)arg4 title:(id)arg5;
+ (void)navigateToRecentlyDeleted:(id)arg1 navigationController:(id)arg2 origin:(id)arg3;
+ (void)navigateToVideos:(id)arg1 navigationController:(id)arg2 origin:(id)arg3;
+ (void)navigateToReels:(id)arg1 navigationController:(id)arg2 origin:(id)arg3;
+ (void)navigateToPosts:(id)arg1 navigationController:(id)arg2 origin:(id)arg3;
+ (void)navigateToLikes:(id)arg1 navigationController:(id)arg2 origin:(id)arg3;
+ (void)navigateToComments:(id)arg1 navigationController:(id)arg2 origin:(id)arg3;
+ (void)navigateToAccountHistory:(id)arg1 navigationController:(id)arg2 origin:(id)arg3;
+ (_Bool)nameIsYourActivity:(id)arg1;
+ (id)getActivityCenterName:(id)arg1;
+ (void)navigateToActivityCenterEntry:(id)arg1 navigationController:(id)arg2 origin:(id)arg3;
+ (_Bool)userCanSeeActivityCenter:(id)arg1;

@end

