//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IABPCMAdConversionBuilder : NSObject
{
    NSString *_adDestination;
    NSString *_advertiserID;
    long long _campaignID;
    long long _conversionID;
    long long _priority;
    NSString *_securityToken;
    NSDate *_consumptionDate;
    NSString *_conversionDomain;
    _Bool _isSynced;
}

+ (id)adConversionFromExistingAdConversion:(id)arg1;
+ (id)adConversion;
- (void).cxx_destruct;
- (id)withIsSynced:(_Bool)arg1;
- (id)withConversionDomain:(id)arg1;
- (id)withConsumptionDate:(id)arg1;
- (id)withSecurityToken:(id)arg1;
- (id)withPriority:(long long)arg1;
- (id)withConversionID:(long long)arg1;
- (id)withCampaignID:(long long)arg1;
- (id)withAdvertiserID:(id)arg1;
- (id)withAdDestination:(id)arg1;
- (id)build;

@end

