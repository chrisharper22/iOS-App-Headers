//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBQPLLoggingPolicyModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_version;
    NSString *_checksum;
    NSString *_ownerUserID;
    NSString *_JSONEncodedSamplingConfig;
    NSString *_JSONEncodedSamplingPoliciesConfig;
    NSString *_JSONEncodedMetadataProviderConfig;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *JSONEncodedMetadataProviderConfig; // @synthesize JSONEncodedMetadataProviderConfig=_JSONEncodedMetadataProviderConfig;
@property(readonly, copy, nonatomic) NSString *JSONEncodedSamplingPoliciesConfig; // @synthesize JSONEncodedSamplingPoliciesConfig=_JSONEncodedSamplingPoliciesConfig;
@property(readonly, copy, nonatomic) NSString *JSONEncodedSamplingConfig; // @synthesize JSONEncodedSamplingConfig=_JSONEncodedSamplingConfig;
@property(readonly, copy, nonatomic) NSString *ownerUserID; // @synthesize ownerUserID=_ownerUserID;
@property(readonly, copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1 checksum:(id)arg2 ownerUserID:(id)arg3 JSONEncodedSamplingConfig:(id)arg4 JSONEncodedSamplingPoliciesConfig:(id)arg5 JSONEncodedMetadataProviderConfig:(id)arg6;
- (id)initWithCoder:(id)arg1;

@end

