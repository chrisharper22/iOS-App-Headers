//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPaymentsW3CClientPaymentItem : FBValueObject <NSCopying, NSCoding>
{
    NSString *_label;
    NSString *_currency;
    NSString *_currencyValue;
    NSString *_imageURI;
    long long _type;
    long long _quantity;
    NSString *_secondaryLabel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *imageURI; // @synthesize imageURI=_imageURI;
@property(readonly, copy, nonatomic) NSString *currencyValue; // @synthesize currencyValue=_currencyValue;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)initWithLabel:(id)arg1 currency:(id)arg2 currencyValue:(id)arg3 imageURI:(id)arg4 type:(long long)arg5 quantity:(long long)arg6 secondaryLabel:(id)arg7;

@end

