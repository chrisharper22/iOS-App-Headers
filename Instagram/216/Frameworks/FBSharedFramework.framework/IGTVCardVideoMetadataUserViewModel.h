//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGTVCardVideoMetadataUserViewModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_user_username;
    _Bool _user_verified;
}

+ (id)userWithUsername:(id)arg1 verified:(_Bool)arg2;
+ (id)none;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 user:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanNone:(CDUnknownBlockType)arg1 user:(CDUnknownBlockType)arg2;

@end

