//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPhoneNumber-Protocol.h"
#import "NSCopying-Protocol.h"

@class NBPhoneNumber, NBPhoneNumberUtil, NSError, NSString;

@interface LPPhoneNumber : NSObject <FBPhoneNumber, NSCopying>
{
    NBPhoneNumber *_impl;
    NBPhoneNumberUtil *_phoneNumberUtil;
    NSString *_rawInput;
    NSString *_isoCountryCode;
    NSString *_rawCountryInput;
    int _callingCode;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)_initPhoneNumerUtilsIfNecessary;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int callingCode;
@property(readonly, copy, nonatomic) NSString *isoCountryCode;
@property(readonly, copy) NSString *description;
- (id)formatForCallingFromCountry:(id)arg1;
- (id)rawInput;
- (id)formatWithStyle:(int)arg1;
- (id)asTelUrl;
- (_Bool)isPossible;
- (_Bool)isValid;
- (id)initWithNumber:(id)arg1 defaultCountry:(id)arg2;
- (id)initWithE164Number:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
