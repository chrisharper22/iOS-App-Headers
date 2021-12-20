//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayDynamicAutheticationProcedure-Protocol.h"

@class NSString;

@interface FBPayDynamicAutheticationPlaygroundProcedure : NSObject <FBPayDynamicAutheticationProcedure>
{
    _Bool _isAuthErrorPassedOnce;
}

- (void)presentAuthTransitionDialogFromController:(id)arg1 authResponse:(id)arg2 continueDynamicAuthAction:(CDUnknownBlockType)arg3 cancelDynamicAuthAction:(CDUnknownBlockType)arg4;
- (void)executeProcedureWithPTT:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)pttData;
- (unsigned int)otcType;
- (id)otcSessionID;
- (id)targetAccountID;
- (id)operation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

