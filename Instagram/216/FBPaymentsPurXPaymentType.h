//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBPaymentsPurXPaymentType : NSObject <NSCopying>
{
    long long _paymentTypeIdentifier;
}

@property(readonly, nonatomic) long long paymentTypeIdentifier; // @synthesize paymentTypeIdentifier=_paymentTypeIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *value;
- (id)initWithPaymentType:(id)arg1;
- (id)initWithPaymentTypeIdentifier:(long long)arg1;

@end
