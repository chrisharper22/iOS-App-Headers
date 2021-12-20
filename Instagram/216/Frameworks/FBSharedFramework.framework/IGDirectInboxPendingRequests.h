//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGDirectInboxPendingRequests : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _hasTopRequests;
    long long _count;
    long long _spamRequestsCount;
    long long _unreadRequestsCount;
}

@property(readonly, nonatomic) long long unreadRequestsCount; // @synthesize unreadRequestsCount=_unreadRequestsCount;
@property(readonly, nonatomic) long long spamRequestsCount; // @synthesize spamRequestsCount=_spamRequestsCount;
@property(readonly, nonatomic) _Bool hasTopRequests; // @synthesize hasTopRequests=_hasTopRequests;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithCount:(long long)arg1 hasTopRequests:(_Bool)arg2 spamRequestsCount:(long long)arg3 unreadRequestsCount:(long long)arg4;
- (id)initWithCoder:(id)arg1;

@end
