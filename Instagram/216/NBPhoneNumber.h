//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface NBPhoneNumber : NSObject <NSCopying>
{
    _Bool italianLeadingZero;
    unsigned int countryCode;
    unsigned long long nationalNumber;
    NSString *extension;
    NSString *rawInput;
    NSNumber *countryCodeSource;
    NSString *preferredDomesticCarrierCode;
    NSString *pauseComponent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pauseComponent; // @synthesize pauseComponent;
@property(retain, nonatomic) NSString *preferredDomesticCarrierCode; // @synthesize preferredDomesticCarrierCode;
@property(retain, nonatomic) NSNumber *countryCodeSource; // @synthesize countryCodeSource;
@property(retain, nonatomic) NSString *rawInput; // @synthesize rawInput;
@property(nonatomic) _Bool italianLeadingZero; // @synthesize italianLeadingZero;
@property(retain, nonatomic) NSString *extension; // @synthesize extension;
@property(nonatomic) unsigned long long nationalNumber; // @synthesize nationalNumber;
@property(nonatomic) unsigned int countryCode; // @synthesize countryCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToObject:(id)arg1;
- (int)getCountryCodeSourceOrDefault;
- (void)clearCountryCodeSource;
- (id)init;

@end
