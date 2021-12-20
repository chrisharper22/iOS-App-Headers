//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGStoryOverviewPresentationControllerProtocol-Protocol.h"

@class IGMediaOverviewAnimationController, IGStoryOverviewViewController, IGStoryViewerViewModel, IGUserSession, NSString;

@interface IGStoryOverviewPresentationController : NSObject <IGStoryOverviewPresentationControllerProtocol>
{
    IGUserSession *_userSession;
    IGStoryOverviewViewController *_overviewViewController;
    IGMediaOverviewAnimationController *_overviewAnimationController;
    IGStoryViewerViewModel *_currentPresentingViewModel;
}

- (void).cxx_destruct;
- (void)didDismissOverview;
- (void)updateStoryViewModel:(id)arg1 currentStoryItem:(id)arg2;
- (void)presentOverviewWithShouldShowInsights:(_Bool)arg1 analyticsModule:(id)arg2 loggingContext:(id)arg3 storyViewerViewModel:(id)arg4 currentStoryItem:(id)arg5 storyOverviewDelegate:(id)arg6 viewController:(id)arg7 mediaViewCenter:(struct CGPoint)arg8;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
