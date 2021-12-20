//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPaymentsContactInfoPhoneNumberDataModel;

@interface FBPayComponentDataMutatingPhoneRequest : FBValueObject <NSCopying, NSCoding>
{
    long long _mutationType;
    FBPaymentsContactInfoPhoneNumberDataModel *_phone;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBPaymentsContactInfoPhoneNumberDataModel *phone; // @synthesize phone=_phone;
@property(readonly, nonatomic) long long mutationType; // @synthesize mutationType=_mutationType;
- (id)initWithMutationType:(long long)arg1 phone:(id)arg2;

@end

