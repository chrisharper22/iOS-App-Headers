//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFriendStatusChangedListener-Protocol.h"

@class IGFollowListViewController, IGUserSession, NSString, UIViewController;

@interface IGPendingFollowRequestsViewController : IGViewController <IGFriendStatusChangedListener>
{
    IGFollowListViewController *_followListViewController;
    UIViewController *_parentViewController;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_removeUserFromList:(id)arg1;
- (void)friendStatusChangedForUser:(id)arg1 withUserAction:(long long)arg2;
- (_Bool)_isInModalNavigationController;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 forcedUserId:(id)arg2 disclaimerString:(id)arg3 deleteModeEnabled:(_Bool)arg4 disableListTruncation:(_Bool)arg5 parentViewController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
