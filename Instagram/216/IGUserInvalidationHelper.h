//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGUserInvalidationHelper : NSObject
{
}

+ (long long)reasonForBeingInvalid:(id)arg1 userDefaults:(id)arg2;
+ (void)validateUser:(id)arg1 userDefaults:(id)arg2;
+ (void)invalidateUser:(id)arg1 userDefaults:(id)arg2 reason:(long long)arg3;
+ (_Bool)shouldUserDisplay:(id)arg1 userDefaults:(id)arg2;

@end
