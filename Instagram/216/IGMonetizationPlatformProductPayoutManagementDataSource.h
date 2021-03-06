//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMonetizationPlatformFinancialEntityDataModel, IGMonetizationPlatformProductPayoutManagementViewModel, IGUserSession, NSArray, NSString;

@interface IGMonetizationPlatformProductPayoutManagementDataSource : NSObject
{
    IGUserSession *_userSession;
    NSString *_savedCredentialId;
    _Bool _isSecurityChallengeEnabled;
    NSArray *_payoutInfoDataModelCollection;
    long long _productType;
    long long _origin;
    NSString *_onboardingType;
    NSString *_subtype;
    IGMonetizationPlatformFinancialEntityDataModel *_financialEntity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGMonetizationPlatformFinancialEntityDataModel *financialEntity; // @synthesize financialEntity=_financialEntity;
@property(readonly, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) NSString *onboardingType; // @synthesize onboardingType=_onboardingType;
@property(readonly, nonatomic) long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) _Bool isSecurityChallengeEnabled; // @synthesize isSecurityChallengeEnabled=_isSecurityChallengeEnabled;
@property(readonly, nonatomic) long long productType; // @synthesize productType=_productType;
- (void)triggerSecurityChallengeWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWithPayoutInfoCredentials:(id)arg1 payoutMethod:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithPayoutInfoDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long businessType;
@property(readonly, nonatomic) IGMonetizationPlatformProductPayoutManagementViewModel *viewModel;
- (id)initWithUserSession:(id)arg1 origin:(long long)arg2 productType:(long long)arg3 onboardingType:(id)arg4 savedCredentialId:(id)arg5 financialEntity:(id)arg6 isSecurityChallengeEnabled:(_Bool)arg7 payoutInfoDataModelCollection:(id)arg8;

@end

