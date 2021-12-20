//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGProInviteFollowersViewControllerDelegate-Protocol.h"

@class IG4BLogger, IGProFlowNavigationPresenter, IGUserSession, NSArray, NSString;
@protocol IGProInviteFollowersShareAccountFlowDelegate;

@interface IGProInviteFollowersShareAccountFlow : NSObject <IGProInviteFollowersViewControllerDelegate>
{
    IGUserSession *_userSession;
    IG4BLogger *_logger;
    IGProFlowNavigationPresenter *_flowPresenter;
    NSArray *_additionalItems;
    id <IGProInviteFollowersShareAccountFlowDelegate> _delegate;
    NSString *_title;
    NSString *_subtitle;
}

- (void).cxx_destruct;
- (void)_accountForSharingWasSelected:(CDUnknownBlockType)arg1;
- (void)_completedSharingAccount:(_Bool)arg1;
- (void)proInviteFollowersDidTapShareActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)proInviteFollowersDidComplete:(_Bool)arg1;
- (void)startAndShouldDropAllPrevious:(_Bool)arg1;
- (id)initWithFlowPresenter:(id)arg1 userSession:(id)arg2 title:(id)arg3 subtitle:(id)arg4 additionalItems:(id)arg5 delegate:(id)arg6 logger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
