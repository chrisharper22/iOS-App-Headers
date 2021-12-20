//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGChainingFloatingSendButtonControllerDelegate-Protocol.h"
#import "IGContextualFeedViewControllerDelegate-Protocol.h"

@class IGChainingFloatingSendButtonController, IGContextualFeedViewController, IGDirectShareRecipient, IGFeedNetworkSource, IGMedia, IGUserSession, NSString;
@protocol IGReshareHubDelegate;

@interface IGReshareHubContextualFeedViewController : IGViewController <IGContextualFeedViewControllerDelegate, IGChainingFloatingSendButtonControllerDelegate>
{
    IGUserSession *_userSession;
    IGFeedNetworkSource *_feedNetworkSource;
    IGMedia *_media;
    NSString *_title;
    IGContextualFeedViewController *_contextualFeedViewController;
    IGChainingFloatingSendButtonController *_floatingSendButtonController;
    IGDirectShareRecipient *_directShareRecipient;
    NSString *_analyticsModule;
    id <IGReshareHubDelegate> _reshareHubDelegate;
    _Bool _didFocusInitialFeedItem;
}

- (void).cxx_destruct;
- (void)chainingFloatingSendButtonContainer:(id)arg1 didTapSendButtonForMedia:(id)arg2;
- (void)contextualFeedViewController:(id)arg1 didChangePaginatedFocusToMedia:(id)arg2;
- (void)contextualFeedViewControllerWillDismiss:(id)arg1;
- (void)contextualFeedViewControllerWillShowPill:(id)arg1;
- (_Bool)didShowPillInCurrentSession:(id)arg1;
- (void)_setupFloatingSendButtonIfNeeded;
- (id)_contextualFeedViewControllerWithUserSession:(id)arg1 feedNetworkSource:(id)arg2 media:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 feedNetworkSource:(id)arg2 media:(id)arg3 title:(id)arg4 directShareRecipient:(id)arg5 analyticsModule:(id)arg6 reshareHubDelegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

