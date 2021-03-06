//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCPDocAuthCreditCardResult : NSObject <NSCopying>
{
    NSString *_number;
    NSString *_name;
    NSString *_validTo;
    NSString *_validFrom;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *validFrom; // @synthesize validFrom=_validFrom;
@property(readonly, copy, nonatomic) NSString *validTo; // @synthesize validTo=_validTo;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *number; // @synthesize number=_number;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNumber:(id)arg1 name:(id)arg2 validTo:(id)arg3 validFrom:(id)arg4;

@end

