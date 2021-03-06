//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARServiceConfiguration-Protocol.h>
#import <FBSharedFramework/FBARServiceConfigurationCxx-Protocol.h>

@class NSString;
@protocol FBARExternalAssetProviderEffectDescriptor, FBARExternalAssetProviderLocalDataSource;

@interface FBARExternalAssetProviderConfiguration : NSObject <FBARServiceConfiguration, FBARServiceConfigurationCxx>
{
    id <FBARExternalAssetProviderLocalDataSource> _localDataSource;
    id <FBARExternalAssetProviderEffectDescriptor> _effectDescriptor;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithLocalDataSource:(id)arg1 effectDescriptor:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBARExternalAssetProviderEffectDescriptor> effectDescriptor; // @synthesize effectDescriptor=_effectDescriptor;
@property(readonly, nonatomic) id <FBARExternalAssetProviderLocalDataSource> localDataSource; // @synthesize localDataSource=_localDataSource;
@property(readonly, nonatomic) shared_ptr_e7d8ca2a engineServiceConfiguration;
@property(readonly, nonatomic) struct ServiceType serviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalDataSource:(id)arg1 effectDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

