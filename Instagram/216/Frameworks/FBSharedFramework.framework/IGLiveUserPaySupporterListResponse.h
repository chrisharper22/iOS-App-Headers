//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IGLiveUserPaySupporterListResponse : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _canCreateThankYouStory;
    NSArray *_supporters;
    NSString *_maxID;
    long long _numberOfSupporters;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfSupporters; // @synthesize numberOfSupporters=_numberOfSupporters;
@property(readonly, nonatomic) _Bool canCreateThankYouStory; // @synthesize canCreateThankYouStory=_canCreateThankYouStory;
@property(readonly, copy, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(readonly, copy, nonatomic) NSArray *supporters; // @synthesize supporters=_supporters;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithSupporters:(id)arg1 maxID:(id)arg2 canCreateThankYouStory:(_Bool)arg3 numberOfSupporters:(long long)arg4;
- (id)initWithCoder:(id)arg1;

@end
