//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGContact : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSArray *_phoneNumbers;
    NSArray *_emailAddresses;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (id)asDictionary;
- (id)initWithContactRef:(void *)arg1;

@end

