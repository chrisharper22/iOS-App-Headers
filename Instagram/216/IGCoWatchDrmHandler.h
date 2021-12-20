//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFDashVideoDrmHandler-Protocol.h"

@class FBGraphQLService, IGCoWatchDrmLicenseLoader, NSArray, NSString;
@protocol FNFFairPlayControlling;

@interface IGCoWatchDrmHandler : NSObject <FNFDashVideoDrmHandler>
{
    FBGraphQLService *_graphqlService;
    NSString *_videoId;
    CDUnknownBlockType _errorHandler;
    IGCoWatchDrmLicenseLoader *_licenseLoader;
    long long _encryptionMode;
    NSArray *_keyIds;
    id <FNFFairPlayControlling> _fairPlayController;
}

- (void).cxx_destruct;
- (_Bool)isKeySessionPrepared;
- (long long)encryptionMode;
- (id)keyIds;
- (id)getLicenseInfoWithPssh:(id)arg1 expiration:(double *)arg2;
- (void)connectWithKeyRecipient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)decrypt:(id)arg1 keyId:(id)arg2 iv:(char *)arg3 error:(id *)arg4;
- (void)prepareWithPssh:(id)arg1 keyIds:(id)arg2 mode:(long long)arg3 playbackStarted:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithGraphqlService:(id)arg1 videoId:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
