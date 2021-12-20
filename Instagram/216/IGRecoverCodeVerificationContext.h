//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGRecoverCodeVerificationContext : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_contextForUsername_username;
    NSString *_contextForUsername_obfuscatedPhoneNumber;
    _Bool _contextForUsername_tryToRecoverForMultipleUsers;
    NSString *_contextForUsername_accessStep;
    NSString *_contextForPhoneNumber_phoneNumber;
    _Bool _contextForPhoneNumber_tryToRecoverForMultipleUsers;
    NSString *_contextForEmail_email;
    _Bool _contextForEmail_tryToRecoverForMultipleUsers;
}

+ (id)contextForUsernameWithUsername:(id)arg1 obfuscatedPhoneNumber:(id)arg2 tryToRecoverForMultipleUsers:(_Bool)arg3 accessStep:(id)arg4;
+ (id)contextForPhoneNumberWithPhoneNumber:(id)arg1 tryToRecoverForMultipleUsers:(_Bool)arg2;
+ (id)contextForEmailWithEmail:(id)arg1 tryToRecoverForMultipleUsers:(_Bool)arg2;
- (void).cxx_destruct;
- (void)matchContextForUsername:(CDUnknownBlockType)arg1 contextForPhoneNumber:(CDUnknownBlockType)arg2 contextForEmail:(CDUnknownBlockType)arg3;

@end

