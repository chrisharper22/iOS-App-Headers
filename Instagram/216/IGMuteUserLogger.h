//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGMuteUserLogger : NSObject
{
}

+ (void)logPostsUnmuted:(_Bool)arg1 storyUnmuted:(_Bool)arg2 user:(id)arg3 source:(long long)arg4 module:(id)arg5 analyticsLogger:(id)arg6;
+ (void)logPostsMuted:(_Bool)arg1 storyMuted:(_Bool)arg2 user:(id)arg3 media:(id)arg4 source:(long long)arg5 module:(id)arg6 analyticsLogger:(id)arg7;
+ (void)logMuteOrUnmuteSelectedForUser:(id)arg1 media:(id)arg2 source:(long long)arg3 module:(id)arg4 analyticsLogger:(id)arg5;

@end
