//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayAuthenticationLocalContentProviding-Protocol.h"

@class NSString;

@interface IGFBPayAuthenticationLocalContentProvider : NSObject <FBPayAuthenticationLocalContentProviding>
{
}

- (id)getScreenContentWithPrimaryFlowType:(id)arg1 subFlowType:(id)arg2 stepType:(id)arg3 biometricType:(int)arg4 isFBPayEnabled:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
