//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGSponsoredFeedItemTrackerUtil : NSObject
{
}

+ (void)_reportEvent:(id)arg1 immediately:(_Bool)arg2 analyticsLogger:(id)arg3;
+ (void)_addEntriesForEvent:(id)arg1 trackingToken:(id)arg2 reason:(id)arg3 extra:(id)arg4;
+ (void)logEventWithFeedItemTracker:(id)arg1 eventName:(id)arg2 extraDict:(id)arg3 module:(id)arg4 user:(id)arg5 analyticsLogger:(id)arg6;
+ (void)trackHideReasonForFeedItemTracker:(id)arg1 FeedItem:(id)arg2 withReason:(id)arg3 withExtraDictionary:(id)arg4 analyticsLogger:(id)arg5 sponsoredInfoProvider:(id)arg6;
+ (void)trackInvalidationForFeedItemTracker:(id)arg1 media:(id)arg2 withReason:(id)arg3 extra:(id)arg4 analyticsLogger:(id)arg5 sponsoredSupportConfiguration:(id)arg6;

@end
