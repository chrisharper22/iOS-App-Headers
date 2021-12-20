//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface FBPayComponentPayButtonCellViewModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_formattedAmount;
    long long _payButtonCTAType;
    long long _status;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) long long payButtonCTAType; // @synthesize payButtonCTAType=_payButtonCTAType;
@property(readonly, copy, nonatomic) NSString *formattedAmount; // @synthesize formattedAmount=_formattedAmount;
- (id)initWithFormattedAmount:(id)arg1 payButtonCTAType:(long long)arg2 status:(long long)arg3;

@end

