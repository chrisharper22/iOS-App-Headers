//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPayIAWPaymentAddress, FBPayIAWPaymentItem, NSArray, NSString;

@interface FBPayIAWPaymentDetails : FBValueObject <NSCopying, NSCoding>
{
    FBPayIAWPaymentItem *_total;
    NSArray *_displayItems;
    NSArray *_summaryItems;
    NSArray *_shippingOptions;
    NSString *_shippingOptionId;
    FBPayIAWPaymentAddress *_shippingAddress;
    NSArray *_offerCodes;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *offerCodes; // @synthesize offerCodes=_offerCodes;
@property(readonly, copy, nonatomic) FBPayIAWPaymentAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(readonly, copy, nonatomic) NSString *shippingOptionId; // @synthesize shippingOptionId=_shippingOptionId;
@property(readonly, copy, nonatomic) NSArray *shippingOptions; // @synthesize shippingOptions=_shippingOptions;
@property(readonly, copy, nonatomic) NSArray *summaryItems; // @synthesize summaryItems=_summaryItems;
@property(readonly, copy, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property(readonly, copy, nonatomic) FBPayIAWPaymentItem *total; // @synthesize total=_total;
- (id)initWithTotal:(id)arg1 displayItems:(id)arg2 summaryItems:(id)arg3 shippingOptions:(id)arg4 shippingOptionId:(id)arg5 shippingAddress:(id)arg6 offerCodes:(id)arg7;

@end
