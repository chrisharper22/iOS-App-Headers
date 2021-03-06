//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACSClientConforming-Protocol.h"

@class ACSClientLogger, NSString;
@protocol ACSClientConforming, ACSServerProvider, ACSStorageManager, FBAnalyticsLogging, NativeVOPRF;

@interface AnonCredProvider : NSObject <ACSClientConforming>
{
    id <ACSClientConforming> _acsClient;
    NSString *_projectName;
    id <ACSServerProvider> _serverProvider;
    id <ACSStorageManager> _storageManager;
    id <NativeVOPRF> _nativeVOPRF;
    ACSClientLogger *_acsClientLogger;
    id <FBAnalyticsLogging> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ACSClientLogger *acsClientLogger; // @synthesize acsClientLogger=_acsClientLogger;
@property(readonly, nonatomic) id <NativeVOPRF> nativeVOPRF; // @synthesize nativeVOPRF=_nativeVOPRF;
@property(readonly, nonatomic) NSString *projectName; // @synthesize projectName=_projectName;
@property(readonly, nonatomic) id <ACSStorageManager> storageManager; // @synthesize storageManager=_storageManager;
@property(readonly, nonatomic) id <ACSServerProvider> serverProvider; // @synthesize serverProvider=_serverProvider;
- (void)_createAcsClientPlugin;
- (id)loadServerConfigFromStorageWithId:(id)arg1;
- (void)loadServerConfigAndGetNewTokensWithNumTokens:(long long)arg1 withProofRequested:(_Bool)arg2 withSuccessBlock:(CDUnknownBlockType)arg3 withFailureBlock:(CDUnknownBlockType)arg4;
- (void)loadACSServerConfigWithSuccessBlock:(CDUnknownBlockType)arg1 withFailureBlock:(CDUnknownBlockType)arg2;
- (void)retrieveNewTokensWithServerConfig:(id)arg1 withNumTokens:(long long)arg2 withProofRequested:(_Bool)arg3 withSucessBlock:(CDUnknownBlockType)arg4 withFailureBlock:(CDUnknownBlockType)arg5;
- (void)fetchAndRedeemWithData:(id)arg1 withProofRequested:(_Bool)arg2 withDelegate:(id)arg3;
- (id)initWithProjectName:(id)arg1 serverProvider:(id)arg2 storageManager:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

