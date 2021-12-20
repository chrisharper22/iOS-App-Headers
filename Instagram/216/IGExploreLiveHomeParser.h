//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNetworkParser-Protocol.h"

@class IGUser, IGUserSession, NSString;

@interface IGExploreLiveHomeParser : NSObject <IGNetworkParser>
{
    IGUser *_currentUser;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)parsedObjectFromResponse:(id)arg1;
- (id)initWithCurrentUser:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

