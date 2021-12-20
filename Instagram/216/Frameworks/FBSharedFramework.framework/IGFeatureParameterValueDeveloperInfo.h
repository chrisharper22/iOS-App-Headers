//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSArray, NSString;

@interface IGFeatureParameterValueDeveloperInfo : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    _Bool _bool_defaultValue;
    double _double_defaultValue;
    NSArray *_double_values;
    long long _integer_defaultValue;
    NSArray *_integer_values;
    NSString *_string_defaultValue;
    NSArray *_string_values;
}

+ (id)stringWithDefaultValue:(id)arg1 values:(id)arg2;
+ (id)integerWithDefaultValue:(long long)arg1 values:(id)arg2;
+ (id)doubleWithDefaultValue:(double)arg1 values:(id)arg2;
+ (id)boolWithDefaultValue:(_Bool)arg1;
- (void).cxx_destruct;
- (_Bool)matchBooleanBool:(CDUnknownBlockType)arg1 double:(CDUnknownBlockType)arg2 integer:(CDUnknownBlockType)arg3 string:(CDUnknownBlockType)arg4;
- (void)matchBool:(CDUnknownBlockType)arg1 double:(CDUnknownBlockType)arg2 integer:(CDUnknownBlockType)arg3 string:(CDUnknownBlockType)arg4;
- (id)typeDescription;
- (id)stringValues;
- (id)values;
- (id)defaultStringValue;
- (id)defaultValue;

@end

