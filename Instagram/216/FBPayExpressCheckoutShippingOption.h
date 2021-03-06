//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPayExpressCheckoutCurrencyAmount, NSString;

@interface FBPayExpressCheckoutShippingOption : FBValueObject <NSCopying, NSCoding>
{
    NSString *_id;
    long long _type;
    NSString *_title;
    NSString *_subtitle;
    FBPayExpressCheckoutCurrencyAmount *_amount;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBPayExpressCheckoutCurrencyAmount *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (id)initWithId:(id)arg1 type:(long long)arg2 title:(id)arg3 subtitle:(id)arg4 amount:(id)arg5;

@end

