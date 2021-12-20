//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FBAnalyticsLogging;

@interface ACSClientLogger : NSObject
{
    NSString *_projectName;
    id <FBAnalyticsLogging> _logger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FBAnalyticsLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSString *projectName; // @synthesize projectName=_projectName;
- (_Bool)isCryptoDebugEnabled;
- (_Bool)isLoggerAvailable;
- (void)logCryptoDebugEventWithMethodName:(id)arg1 withConfigId:(id)arg2 withConfigPublicKey:(id)arg3 withConfigCipherSuite:(long long)arg4 withConfigExpiration:(id)arg5 withNonce:(id)arg6 withBlindedNonce:(id)arg7 withBlindingFactor:(id)arg8 withSignedBlindedNonce:(id)arg9 withUnblindedSignature:(id)arg10 withComputedSharedSecret:(id)arg11 withTokenExpiration:(id)arg12;
- (void)logCryptoDebugEventWithMethodName:(id)arg1 withConfigId:(id)arg2 withConfigPublicKey:(id)arg3 withConfigCipherSuite:(long long)arg4 withConfigExpiration:(id)arg5 withNonce:(id)arg6 withBlindedNonce:(id)arg7 withBlindingFactor:(id)arg8 withSignedBlindedNonce:(id)arg9 withUnblindedSignature:(id)arg10 withComputedSharedSecret:(id)arg11 withTokenExpiration:(id)arg12 withAdditionalData:(id)arg13;
- (void)logTimingEventWithMethodName:(id)arg1 withTotalTimeInMs:(long long)arg2;
- (void)logTimingEventWithMethodName:(id)arg1 withTotalTimeInMs:(long long)arg2 withAdditionalData:(id)arg3;
- (id)initWithProjectName:(id)arg1 withLogger:(id)arg2;

@end
