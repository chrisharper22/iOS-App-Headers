//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGFollowLogger : NSObject
{
}

+ (void)logFollowFrictionEvent:(id)arg1 user:(id)arg2 isNeutral:(_Bool)arg3 module:(id)arg4 event:(int)arg5;
+ (void)logFollowButtonTapFailureForHashtag:(id)arg1 userSession:(id)arg2 follow:(_Bool)arg3 error:(id)arg4;
+ (void)logFollowButtonTappedForHashtag:(id)arg1 userSession:(id)arg2 follow:(_Bool)arg3 clickPoint:(id)arg4 extras:(id)arg5;
+ (void)logFollowButtonTappedForUser:(id)arg1 clickPoint:(id)arg2 extras:(id)arg3 module:(id)arg4 userSession:(id)arg5 analyticsLogger:(id)arg6;
+ (id)_eventForFollowButtonTappedWithClickPoint:(id)arg1 followEntityType:(long long)arg2 module:(id)arg3 extras:(id)arg4;
+ (void)logFollowButtonTapWithAction:(long long)arg1 targetID:(id)arg2 module:(id)arg3 clickPoint:(id)arg4 navState:(id)arg5 analyticsLogger:(id)arg6;

@end
