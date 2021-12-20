//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectInteropReachabilityBusinessSettings, IGDirectReachabilityLinkedPageIGDMAccessSettings;

@interface IGDirectInteropReachabilitySettingsBuilder : NSObject
{
    long long _igFollowers;
    long long _fbFriends;
    long long _fbFriendsOfFriends;
    long long _peopleWithYourPhoneNumber;
    long long _othersOnIG;
    long long _othersOnFB;
    IGDirectReachabilityLinkedPageIGDMAccessSettings *_linkedPageIGDMAccessSetting;
    IGDirectInteropReachabilityBusinessSettings *_businessSettings;
    long long _groupSetting;
}

+ (id)directInteropReachabilitySettingsFromExistingDirectInteropReachabilitySettings:(id)arg1;
+ (id)directInteropReachabilitySettings;
- (void).cxx_destruct;
- (id)withGroupSetting:(long long)arg1;
- (id)withBusinessSettings:(id)arg1;
- (id)withLinkedPageIGDMAccessSetting:(id)arg1;
- (id)withOthersOnFB:(long long)arg1;
- (id)withOthersOnIG:(long long)arg1;
- (id)withPeopleWithYourPhoneNumber:(long long)arg1;
- (id)withFbFriendsOfFriends:(long long)arg1;
- (id)withFbFriends:(long long)arg1;
- (id)withIgFollowers:(long long)arg1;
- (id)build;

@end
