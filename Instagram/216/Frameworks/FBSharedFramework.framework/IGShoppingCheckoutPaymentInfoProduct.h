//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGShoppingCheckoutPaymentInfoPrice, NSString;

@interface IGShoppingCheckoutPaymentInfoProduct : NSObject
{
    NSString *_productId;
    unsigned long long _quantity;
    IGShoppingCheckoutPaymentInfoPrice *_price;
    NSString *_launchDateUnixTimestamp;
}

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithId:(id)arg1 quantity:(unsigned long long)arg2 price:(id)arg3 launchDateUnixTimestamp:(id)arg4;

@end

