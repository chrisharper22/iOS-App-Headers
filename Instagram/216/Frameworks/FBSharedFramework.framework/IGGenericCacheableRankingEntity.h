//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGDirectShareRecipient, IGUser;

@interface IGGenericCacheableRankingEntity : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGUser *_user;
    IGDirectShareRecipient *_recipient;
}

+ (id)user:(id)arg1;
+ (id)recipient:(id)arg1;
- (void).cxx_destruct;
- (void)matchUser:(CDUnknownBlockType)arg1 recipient:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanUser:(CDUnknownBlockType)arg1 recipient:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)entityId;
- (id)entityTypeName;

@end
