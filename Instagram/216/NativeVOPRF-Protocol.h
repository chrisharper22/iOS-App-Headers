//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol NativeVOPRF <NSObject>
- (NSData *)computeSharedSecret:(NSData *)arg1 withUnblindedSignature:(NSData *)arg2 withErrorUpdatePtr:(id *)arg3;
- (NSData *)unblind:(NSData *)arg1 withSignerPublicKey:(NSData *)arg2 withBlindingFactor:(NSData *)arg3 withBlindedSignature:(NSData *)arg4 shouldVerifyProof:(_Bool)arg5 withDLEQProofC:(NSData *)arg6 withDLEQProofS:(NSData *)arg7 withErrorUpdatePtr:(id *)arg8;
- (NSData *)blind:(NSData *)arg1 withBlindingFactorUpdatePtr:(id *)arg2 withErrorUpdatePtr:(id *)arg3;
@end

