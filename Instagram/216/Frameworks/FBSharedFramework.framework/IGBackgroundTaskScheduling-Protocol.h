//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString;

@protocol IGBackgroundTaskScheduling <NSObject>
- (void)lockSchedulerThatWillBeUnclockedOnWillEnterForeground_I_KNOW_WHAT_IM_DOING;
- (void)endIGBackgroundTask:(unsigned long long)arg1;
- (unsigned long long)beginIGBackgroundTaskWithName:(NSString *)arg1 expirationHandler:(void (^)(void))arg2;
@end
