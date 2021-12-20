//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNavigationCustomTransitionDelegate-Protocol.h"
#import "IGPromoteAudienceViewControllerDelegate-Protocol.h"

@class IGBoostPostLogger, IGNavigationController, IGPromoteDataStore, IGUserSession, NSString;

@interface IGPromoteHECAppealFlowManager : NSObject <IGNavigationCustomTransitionDelegate, IGPromoteAudienceViewControllerDelegate>
{
    IGBoostPostLogger *_logger;
    IGUserSession *_userSession;
    IGNavigationController *_navigationController;
    IGPromoteDataStore *_dataStore;
}

- (void).cxx_destruct;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)promoteAudienceViewController:(id)arg1 didExitCreateAndEditAudienceFlowWithManager:(id)arg2;
- (void)promoteAudienceViewController:(id)arg1 willLaunchCreateAndEditAudienceFlowWithManager:(id)arg2;
- (void)promoteAudienceViewControllerDidTapNextBarButton:(id)arg1;
- (void)promoteAudienceViewControllerDidTapSaveBarButton:(id)arg1;
- (void)promoteAudienceViewControllerDidTapBackBarButton:(id)arg1;
- (void)promoteAudienceViewControllerDidTapDoneBarButton:(id)arg1;
- (void)launchAudienceViewController;
- (id)initWithController:(id)arg1 userFbId:(id)arg2 mediaId:(id)arg3 mediaUrl:(id)arg4 audienceId:(id)arg5 adAccountId:(id)arg6 userSession:(id)arg7 logger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

