//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface FBSDKErrorRecoveryConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_localizedRecoveryDescription;
    NSArray *_localizedRecoveryOptionDescriptions;
    unsigned long long _errorCategory;
    NSString *_recoveryActionName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *recoveryActionName; // @synthesize recoveryActionName=_recoveryActionName;
@property(readonly, nonatomic) unsigned long long errorCategory; // @synthesize errorCategory=_errorCategory;
@property(readonly, nonatomic) NSArray *localizedRecoveryOptionDescriptions; // @synthesize localizedRecoveryOptionDescriptions=_localizedRecoveryOptionDescriptions;
@property(readonly, nonatomic) NSString *localizedRecoveryDescription; // @synthesize localizedRecoveryDescription=_localizedRecoveryDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecoveryDescription:(id)arg1 optionDescriptions:(id)arg2 category:(unsigned long long)arg3 recoveryActionName:(id)arg4;

@end

