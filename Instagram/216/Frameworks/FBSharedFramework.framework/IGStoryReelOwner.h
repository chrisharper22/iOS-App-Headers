//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGMultiAuthorReelOwner, IGUser;

@interface IGStoryReelOwner : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGUser *_userReelOwner_user;
    IGMultiAuthorReelOwner *_multiAuthorReelOwner_multiAuthorReelOwner;
}

+ (id)userReelOwnerWithUser:(id)arg1;
+ (id)multiAuthorReelOwnerWithMultiAuthorReelOwner:(id)arg1;
+ (id)reelOwnerWithReelOwnerType:(id)arg1;
- (void).cxx_destruct;
- (void)matchUserReelOwner:(CDUnknownBlockType)arg1 multiAuthorReelOwner:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reelOwnerType;

@end
