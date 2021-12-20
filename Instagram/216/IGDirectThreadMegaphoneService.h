//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGDirectThreadMegaphoneCoordinator-Protocol.h"
#import "IGDirectThreadMegaphonePublisherProvider-Protocol.h"
#import "IGMegaphonePresenterDelegate-Protocol.h"

@class IGBloksAsyncActionHandler, IGDirectThreadMegaphone, IGDirectThreadMegaphoneSubscriptionPublisher, IGDirectThreadMegaphoneTheme, IGDirectThreadMegaphoneWrapperView, IGMegaphonePresenterRegistry, IGUserSession, NSDictionary, NSString, UIViewController;
@protocol IGDirectThreadMegaphoneActionHandler, IGGenericMegaphoneLogger, IGMegaphonePresenterProtocol;

@interface IGDirectThreadMegaphoneService : NSObject <IGMegaphonePresenterDelegate, IGCoreTextLinkHandler, IGDirectThreadMegaphonePublisherProvider, IGDirectThreadMegaphoneCoordinator>
{
    IGDirectThreadMegaphoneSubscriptionPublisher *_publisher;
    NSDictionary *_integrations;
    IGUserSession *_userSession;
    IGMegaphonePresenterRegistry *_megaphonePresenterRegistry;
    UIViewController *_hostingViewController;
    IGDirectThreadMegaphone *_megaphone;
    IGDirectThreadMegaphoneTheme *_megaphoneTheme;
    id <IGMegaphonePresenterProtocol> _megaphonePresenter;
    id <IGDirectThreadMegaphoneActionHandler> _actionHandler;
    id <IGGenericMegaphoneLogger> _logger;
    IGDirectThreadMegaphoneWrapperView *_megaphoneWrapperView;
    IGBloksAsyncActionHandler *_bloksAsyncActionHandler;
}

- (void).cxx_destruct;
- (void)_handleDismissEvent;
- (id)_bannerViewForMegaphone;
- (void)_setupMegaphoneView;
- (void)_handleUpdatedMegaphone:(id)arg1 withIntegration:(id)arg2 context:(id)arg3;
- (void)_handleUpdatedMegaphone:(id)arg1;
- (void)_handleUpdatedMegaphoneForBloks:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)threadViewDidUpdateTheme:(id)arg1;
- (void)megaphonePresenterNeedsMegaphoneResize:(id)arg1;
- (void)megaphonePresenter:(id)arg1 handleButton:(id)arg2;
- (void)megaphonePresenter:(id)arg1 handleUserScopedIntent:(id)arg2;
- (void)megaphonePresenter:(id)arg1 handleURL:(id)arg2 shouldDismiss:(_Bool)arg3;
- (void)megaphonePresenter:(id)arg1 logButtonClickIfNeeded:(id)arg2;
- (void)megaphonePresenter:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)megaphonePresenterPopToMegaphonePresenterViewController;
- (void)megaphonePresenterPopViewController:(id)arg1;
- (void)megaphonePresenter:(id)arg1 pushViewController:(id)arg2;
- (void)megaphonePresenterDidDismiss:(id)arg1;
- (void)logMegaphoneSeen;
- (void)hostingViewControllerViewDidAppear;
- (void)setHostingViewController:(id)arg1;
- (id)megaphoneBloksAsyncActionHandler:(id)arg1;
- (id)threadMegaphoneViewForMegaphone:(id)arg1;
- (id)threadMegaphoneSubscriptionPublisher;
- (id)initWithUserSession:(id)arg1 integrations:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

