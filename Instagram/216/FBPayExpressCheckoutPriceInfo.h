//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPayExpressCheckoutCurrencyAmount, NSString;

@interface FBPayExpressCheckoutPriceInfo : NSObject
{
    FBPayExpressCheckoutCurrencyAmount *_amount;
    NSString *_primaryLabel;
    NSString *_secondaryLabel;
    long long _quantity;
    NSString *_iconURI;
    long long _type;
    long long _status;
    NSString *_metadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *iconURI; // @synthesize iconURI=_iconURI;
@property(readonly, nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(readonly, nonatomic) NSString *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) NSString *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(readonly, nonatomic) FBPayExpressCheckoutCurrencyAmount *amount; // @synthesize amount=_amount;
- (id)initWithAmount:(id)arg1 primaryLabel:(id)arg2 secondaryLabel:(id)arg3 quantity:(long long)arg4 iconURI:(id)arg5 type:(long long)arg6 status:(long long)arg7 metadata:(id)arg8;

@end

