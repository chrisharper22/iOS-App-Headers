//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKBridgeAPIProtocol-Protocol.h>

@class NSString;
@protocol FBSDKErrorCreating;

@interface FBSDKBridgeAPIProtocolWebV1 : NSObject <FBSDKBridgeAPIProtocol>
{
    id <FBSDKErrorCreating> _errorFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBSDKErrorCreating> errorFactory; // @synthesize errorFactory=_errorFactory;
- (id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(_Bool *)arg3 error:(id *)arg4;
- (id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 parameters:(id)arg4 error:(id *)arg5;
- (id)initWithErrorFactory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

