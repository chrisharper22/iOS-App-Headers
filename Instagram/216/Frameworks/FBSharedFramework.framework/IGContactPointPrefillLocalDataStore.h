//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGContactPointPrefill, NSString;

@interface IGContactPointPrefillLocalDataStore : NSObject
{
}

- (id)_contactPointForPrefillKey:(id)arg1;
- (void)updateFullName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *fullName;
- (void)updateEmail:(id)arg1 withSource:(id)arg2;
@property(readonly, copy, nonatomic) IGContactPointPrefill *email;
- (void)updateFullPhoneNumber:(id)arg1 withSource:(id)arg2;
@property(readonly, copy, nonatomic) NSString *fullPhoneNumber;
- (void)updatePhoneNumber:(id)arg1 withSource:(id)arg2;
@property(readonly, copy, nonatomic) IGContactPointPrefill *phoneNumber;
@property(readonly, copy, nonatomic) NSString *fbEmail;
@property(readonly, copy, nonatomic) NSString *fbFullPhoneNumber;
@property(readonly, copy, nonatomic) NSString *fbPhoneNumber;

@end
