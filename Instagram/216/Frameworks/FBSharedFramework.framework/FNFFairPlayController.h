//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/AVContentKeySessionDelegate-Protocol.h>
#import <FBSharedFramework/FNFFairPlayControlling-Protocol.h>

@class AVContentKeySession, NSArray, NSMutableArray, NSString;
@protocol AVContentKeyRecipient, FNFDrmLicenseHandler;

@interface FNFFairPlayController : NSObject <AVContentKeySessionDelegate, FNFFairPlayControlling>
{
    CDUnknownBlockType _completionHandler;
    AVContentKeySession *_keySession;
    NSString *_certificate;
    NSMutableArray *_keyRequests;
    int _keyIndex;
    NSArray *_keyIds;
    id <FNFDrmLicenseHandler> _licenseLoader;
    id <AVContentKeyRecipient> _urlAsset;
}

- (void).cxx_destruct;
- (void)_requestContentKeyFromKeySecurityModuleWithRequestData:(id)arg1 identifier:(id)arg2 forKeyRequest:(id)arg3;
- (void)_handleContentKeyRequest:(id)arg1;
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (_Bool)isKeySessionPrepared;
- (void)_processContentKeyRequest:(int)arg1;
- (void)_setupKeySessionForAsset:(id)arg1;
- (void)prepareWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithKeyIds:(id)arg1 licenseLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

