//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol FNFDrmLicenseHandler <NSObject>
- (void)fetchCertificateWithCompletionHandler:(void (^)(NSString *))arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)didUpdateLicense:(NSError *)arg1;
- (void)generateLicense:(NSString *)arg1 request:(NSString *)arg2 videoId:(NSString *)arg3 keyId:(NSString *)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (void)generateLicense:(NSString *)arg1 request:(NSString *)arg2 videoId:(NSString *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
@end

