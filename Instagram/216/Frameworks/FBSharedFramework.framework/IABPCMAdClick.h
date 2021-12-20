//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface IABPCMAdClick : FBValueObject <NSCopying, NSCoding>
{
    _Bool _userIsInScopeOfCCPA;
    NSString *_adDestination;
    long long _campaignID;
    NSString *_advertiserID;
    NSNumber *_optimizedConversionBit;
    NSString *_securityToken;
    NSDate *_adClickExpirationDate;
    NSString *_encryptedAEMPayload;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *encryptedAEMPayload; // @synthesize encryptedAEMPayload=_encryptedAEMPayload;
@property(readonly, nonatomic) _Bool userIsInScopeOfCCPA; // @synthesize userIsInScopeOfCCPA=_userIsInScopeOfCCPA;
@property(readonly, copy, nonatomic) NSDate *adClickExpirationDate; // @synthesize adClickExpirationDate=_adClickExpirationDate;
@property(readonly, copy, nonatomic) NSString *securityToken; // @synthesize securityToken=_securityToken;
@property(readonly, copy, nonatomic) NSNumber *optimizedConversionBit; // @synthesize optimizedConversionBit=_optimizedConversionBit;
@property(readonly, copy, nonatomic) NSString *advertiserID; // @synthesize advertiserID=_advertiserID;
@property(readonly, nonatomic) long long campaignID; // @synthesize campaignID=_campaignID;
@property(readonly, copy, nonatomic) NSString *adDestination; // @synthesize adDestination=_adDestination;
- (id)initWithAdDestination:(id)arg1 campaignID:(long long)arg2 advertiserID:(id)arg3 optimizedConversionBit:(id)arg4 securityToken:(id)arg5 adClickExpirationDate:(id)arg6 userIsInScopeOfCCPA:(_Bool)arg7 encryptedAEMPayload:(id)arg8;

@end

