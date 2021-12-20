//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectScrollingTabChildViewControllerProtocol-Protocol.h"
#import "IGExploreDataControllerListener-Protocol.h"
#import "IGExploreGridViewControllerDelegate-Protocol.h"

@class IGDirectShareRecipient, IGExploreGridViewController, IGExploreViewControllerConfig, IGUserSession, NSString;
@protocol IGReshareHubDelegate;

@interface IGExploreContainerViewController : IGViewController <IGExploreGridViewControllerDelegate, IGExploreDataControllerListener, IGDirectScrollingTabChildViewControllerProtocol>
{
    IGUserSession *_userSession;
    IGExploreGridViewController *_exploreGridViewController;
    struct UIEdgeInsets _edgeInsets;
    IGDirectShareRecipient *_directShareRecipient;
    id <IGReshareHubDelegate> _delegate;
    IGExploreViewControllerConfig *_configuration;
}

- (void).cxx_destruct;
- (void)exploreDataController:(id)arg1 didUpdateTopicsFetchState:(id)arg2;
- (void)exploreDataController:(id)arg1 didUpdateTopicStore:(id)arg2 previousTopicStore:(id)arg3;
- (id)exploreGridViewController:(id)arg1 gridLoggingProvider:(id)arg2;
- (void)exploreGridViewController:(id)arg1 didSelectInterestKeyword:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)containerDidTapSend;
- (void)containerDidUpdateBottomInset:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_setupSubviews;
- (id)initWithUserSession:(id)arg1 directShareRecipient:(id)arg2 delegate:(id)arg3 analyticsModule:(id)arg4;
- (id)_createExploreGridViewControllerIfPossible:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

