//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGPhoneNumber : NSObject
{
    NSString *_countryCode;
    NSString *_countryNumber;
    NSString *_phoneNumber;
    NSString *_fullPhoneNumber;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fullPhoneNumber; // @synthesize fullPhoneNumber=_fullPhoneNumber;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *countryNumber; // @synthesize countryNumber=_countryNumber;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)initWithFullPhoneNumber:(id)arg1;

@end
