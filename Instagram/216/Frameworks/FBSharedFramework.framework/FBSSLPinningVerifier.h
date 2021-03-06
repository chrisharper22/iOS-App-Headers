//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSSLPinningVerifier : NSObject
{
    struct unique_ptr<proxygen::httpclient::CertificatePinner, std::default_delete<proxygen::httpclient::CertificatePinner>> _pinner;
    struct unique_ptr<proxygen::httpclient::CertificatePinner, std::default_delete<proxygen::httpclient::CertificatePinner>> _sandboxPinner;
}

+ (id)sharedVerifier;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)checkPinning:(struct __SecTrust *)arg1 host:(id)arg2;
- (_Bool)checkPinning:(id)arg1;
- (id)init;

@end

