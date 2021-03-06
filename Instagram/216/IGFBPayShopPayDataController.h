//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayShopPayNetworking-Protocol.h"

@class IGUserSession, NSString;

@interface IGFBPayShopPayDataController : NSObject <FBPayShopPayNetworking>
{
    IGUserSession *_session;
}

- (void).cxx_destruct;
- (void)removeShopPayWithLoggingId:(id)arg1 paymentType:(unsigned int)arg2 shopPayId:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)finalizeAccountLinkingWithLoggingId:(id)arg1 paymentType:(unsigned int)arg2 state:(id)arg3 code:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)fetchBottomSheetWithLoggingSessionID:(id)arg1 paymentType:(id)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)authenticationLinkMutationWithLoggingId:(id)arg1 paymentType:(unsigned int)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)_logWarningForAuthenticationLinkMutationInputIfNeeded:(id)arg1;
- (id)initWithIGUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

