//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface IGRankingMetadataAndScores : FBValueObject <NSCopying, NSCoding>
{
    long long _viewIdentifier;
    NSDate *_expiration;
    NSString *_rankingRequestId;
    NSDictionary *_entityIdsToScores;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *entityIdsToScores; // @synthesize entityIdsToScores=_entityIdsToScores;
@property(readonly, copy, nonatomic) NSString *rankingRequestId; // @synthesize rankingRequestId=_rankingRequestId;
@property(readonly, copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(readonly, nonatomic) long long viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithViewIdentifier:(long long)arg1 expiration:(id)arg2 rankingRequestId:(id)arg3 entityIdsToScores:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end

