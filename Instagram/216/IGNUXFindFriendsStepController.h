//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNUXStepControllerProtocol-Protocol.h"
#import "IGRegistrationFindFriendsViewControllerDelegate-Protocol.h"

@class IGNUXFlowContext, NSString, UIViewController;
@protocol IGNUXFlowCoordinatorProtocol, IGRegistrationFindFriendsViewControllerConfiguring;

@interface IGNUXFindFriendsStepController : NSObject <IGNUXStepControllerProtocol, IGRegistrationFindFriendsViewControllerDelegate>
{
    UIViewController<IGRegistrationFindFriendsViewControllerConfiguring> *_viewController;
    id <IGNUXFlowCoordinatorProtocol> coordinator;
    IGNUXFlowContext *_context;
    long long _mode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) IGNUXFlowContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <IGNUXFlowCoordinatorProtocol> coordinator; // @synthesize coordinator;
- (void)findFriendsControllerDidTakePrimaryAction:(id)arg1;
- (void)findFriendsController:(id)arg1 didFailToLoadUsersWithError:(id)arg2;
- (void)findFriendsController:(id)arg1 didLoadUsers:(id)arg2;
- (void)findFriendsControllerDidStartUserListFetch:(id)arg1;
- (id)regStepForFindFriendsViewController:(id)arg1;
- (void)findFriendsController:(id)arg1 wasTappedOnURL:(id)arg2;
- (void)findFriendsControllerDidAutoAdvanceToNextStep:(id)arg1;
- (void)findFriendsControllerDidFollowTopAccounts:(id)arg1;
- (void)findFriendsController:(id)arg1 didTapNextWithFollowCount:(unsigned long long)arg2;
- (void)findFriendsControllerSkipButtonTapped:(id)arg1;
- (void)findFriendsControllerDidLoad:(id)arg1;
- (id)stepName;
- (void)cancelUserFetch;
- (void)showUserListWithRequest:(id)arg1;
- (id)findFriendsViewController;
- (id)viewController;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

