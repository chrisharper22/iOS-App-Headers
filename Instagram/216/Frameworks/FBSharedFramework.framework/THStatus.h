//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface THStatus : FBValueObject <NSCopying, NSCoding>
{
    NSString *_emoji;
    NSString *_text;
    NSDate *_expiration;
    NSDate *_createdAt;
    NSString *_type;
    NSString *_authorPk;
    NSNumber *_key;
    NSString *_pk;
    NSString *_dedupeId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *dedupeId; // @synthesize dedupeId=_dedupeId;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, copy, nonatomic) NSNumber *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *authorPk; // @synthesize authorPk=_authorPk;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithEmoji:(id)arg1 text:(id)arg2 expiration:(id)arg3 createdAt:(id)arg4 type:(id)arg5 authorPk:(id)arg6 key:(id)arg7 pk:(id)arg8 dedupeId:(id)arg9;
- (id)initWithCoder:(id)arg1;

@end
