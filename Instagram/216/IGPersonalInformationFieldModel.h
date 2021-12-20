//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import "IGListDiffable-Protocol.h"

@class NSDate, NSString;

@interface IGPersonalInformationFieldModel : FBIvarBasedEqualityObject <IGListDiffable>
{
    unsigned long long _subtype;
    NSString *_emailField_email;
    _Bool _emailField_needEmailConfirm;
    NSString *_phoneField_phoneNumber;
    _Bool _phoneField_needPhoneConfirm;
    long long _genderField_selectedGender;
    NSString *_genderField_customGenderString;
    NSDate *_birthdayField_dateOfBirth;
    _Bool _birthdayField_isUserOverEighteen;
}

+ (id)phoneFieldWithPhoneNumber:(id)arg1 needPhoneConfirm:(_Bool)arg2;
+ (id)genderFieldWithSelectedGender:(long long)arg1 customGenderString:(id)arg2;
+ (id)emailFieldWithEmail:(id)arg1 needEmailConfirm:(_Bool)arg2;
+ (id)birthdayFieldWithDateOfBirth:(id)arg1 isUserOverEighteen:(_Bool)arg2;
- (void).cxx_destruct;
- (void)matchEmailField:(CDUnknownBlockType)arg1 phoneField:(CDUnknownBlockType)arg2 genderField:(CDUnknownBlockType)arg3 birthdayField:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanEmailField:(CDUnknownBlockType)arg1 phoneField:(CDUnknownBlockType)arg2 genderField:(CDUnknownBlockType)arg3 birthdayField:(CDUnknownBlockType)arg4;
- (id)diffIdentifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;

@end
