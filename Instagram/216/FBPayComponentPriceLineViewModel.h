//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface FBPayComponentPriceLineViewModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_formattedAmount;
    NSString *_priceDescription;
    long long _type;
    long long _status;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *priceDescription; // @synthesize priceDescription=_priceDescription;
@property(readonly, copy, nonatomic) NSString *formattedAmount; // @synthesize formattedAmount=_formattedAmount;
- (id)initWithFormattedAmount:(id)arg1 priceDescription:(id)arg2 type:(long long)arg3 status:(long long)arg4;

@end
