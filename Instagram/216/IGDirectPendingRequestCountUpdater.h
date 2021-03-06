//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRestrictedUserControllerListener-Protocol.h"

@class IGDirectInboxService, NSString;
@protocol IGRestrictedUserControllerAnnouncer;

@interface IGDirectPendingRequestCountUpdater : NSObject <IGRestrictedUserControllerListener>
{
    IGDirectInboxService *_inboxService;
    id <IGRestrictedUserControllerAnnouncer> _restrictedUserControllerAnnouncer;
}

- (void).cxx_destruct;
- (void)_executeEmptyInboxFetch;
- (void)didUnrestrictUser:(id)arg1;
- (void)didRestrictUser:(id)arg1;
- (id)initWithInboxService:(id)arg1 restrictedUserAnnouncer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

