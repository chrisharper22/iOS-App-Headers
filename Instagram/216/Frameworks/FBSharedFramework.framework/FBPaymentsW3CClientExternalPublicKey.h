//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBPaymentsW3CClientExternalPublicKey : NSObject
{
    struct __SecKey *_publicKey;
    NSString *_base64x509Der;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *base64x509Der; // @synthesize base64x509Der=_base64x509Der;
@property(readonly, nonatomic) struct __SecKey *publicKey; // @synthesize publicKey=_publicKey;
- (void)dealloc;
- (id)initWithBase64X509Der:(id)arg1;

@end

