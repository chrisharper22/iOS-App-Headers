//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface FBPayFormFieldsForCountry : FBValueObject <NSCopying, NSCoding>
{
    NSString *_countryCode;
    NSDictionary *_formFields;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *formFields; // @synthesize formFields=_formFields;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)initWithCountryCode:(id)arg1 formFields:(id)arg2;

@end

