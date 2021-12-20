//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARServiceConfiguration-Protocol.h>
#import <FBSharedFramework/FBARServiceConfigurationCxx-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class FBARSegmentationModelConfiguration, NSString;
@protocol FBARSegmentationDataProviderDelegate, FBARSegmentationDataProviderEffectDescriptor;

@interface FBARBaseSegmentationDataProviderConfiguration : NSObject <FBARServiceConfigurationCxx, FBARServiceConfiguration, NSSecureCoding>
{
    FBARSegmentationModelConfiguration *_modelConfiguration;
    id <FBARSegmentationDataProviderEffectDescriptor> _effectDescriptor;
    id <FBARSegmentationDataProviderDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
+ (id)newConfigurationWithSegmentationModelConfiguration:(id)arg1 effectDescriptor:(id)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <FBARSegmentationDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <FBARSegmentationDataProviderEffectDescriptor> effectDescriptor; // @synthesize effectDescriptor=_effectDescriptor;
@property(readonly, nonatomic) FBARSegmentationModelConfiguration *modelConfiguration; // @synthesize modelConfiguration=_modelConfiguration;
@property(readonly, nonatomic) shared_ptr_e7d8ca2a engineServiceConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) struct ServiceType serviceType;
@property(readonly, nonatomic) long long providerType;
- (id)initWithSegmentationModelConfiguration:(id)arg1 effectDescriptor:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
