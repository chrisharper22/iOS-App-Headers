//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGQPActionHandlerProtocol-Protocol.h"

@class IGUserSession, NSString;

@interface IGQPReAuthFacebookActionHandler : NSObject <IGQPActionHandlerProtocol>
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)handleActionURL:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

