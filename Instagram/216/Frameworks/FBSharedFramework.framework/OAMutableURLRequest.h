//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSMutableURLRequest.h>

@class NSString, OAConsumer, OAToken;
@protocol OASignatureProviding;

@interface OAMutableURLRequest : NSMutableURLRequest
{
    OAConsumer *consumer;
    OAToken *token;
    NSString *realm;
    NSString *signature;
    id <OASignatureProviding> signatureProvider;
    NSString *nonce;
    NSString *timestamp;
}

@property(readonly) NSString *nonce; // @synthesize nonce;
@property(readonly) NSString *signature; // @synthesize signature;
- (void)dealloc;
- (id)_signatureBaseString;
- (void)_generateNonce;
- (void)_generateTimestamp;
- (void)prepare;
- (id)initWithURL:(id)arg1 consumer:(id)arg2 token:(id)arg3 realm:(id)arg4 signatureProvider:(id)arg5 nonce:(id)arg6 timestamp:(id)arg7;
- (id)initWithURL:(id)arg1 consumer:(id)arg2 token:(id)arg3 realm:(id)arg4 signatureProvider:(id)arg5;

@end
