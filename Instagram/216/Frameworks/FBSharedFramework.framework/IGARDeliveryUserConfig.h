//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;
@protocol IGAuthHeaderManaging;

@interface IGARDeliveryUserConfig : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_loggedInUser_userPK;
    id <IGAuthHeaderManaging> _loggedInUser_authHeaderManager;
}

+ (id)loggedOutUser;
+ (id)loggedInUserWithUserPK:(id)arg1 authHeaderManager:(id)arg2;
- (void).cxx_destruct;
- (void)matchLoggedInUser:(CDUnknownBlockType)arg1 loggedOutUser:(CDUnknownBlockType)arg2;

@end

