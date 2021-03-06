//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SRSecurityPolicy : NSObject
{
    _Bool _certificateChainValidationEnabled;
}

+ (id)pinnningPolicyWithCertificates:(id)arg1;
+ (id)defaultPolicy;
@property(readonly, nonatomic) _Bool certificateChainValidationEnabled; // @synthesize certificateChainValidationEnabled=_certificateChainValidationEnabled;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (void)updateSecurityOptionsInStream:(id)arg1;
- (id)init;
- (id)initWithCertificateChainValidationEnabled:(_Bool)arg1;

@end

