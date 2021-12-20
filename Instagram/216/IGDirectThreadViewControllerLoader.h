//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectViewControllerLoading-Protocol.h"

@class IGDirectDjangoThreadSubscriptionService, IGDirectOutgoingMessagePrivateReplyPayload, IGDirectSearchContext, IGDirectThreadLoggingContext, IGDirectThreadNavigationPerfComponents, IGDirectThreadService, IGDirectThreadViewMessageIslandContext, IGMainAppControllerDirectThreadItem, IGUserSession, IGUserStore, NSString;
@protocol IGDirectThreadViewControllerDelegate;

@interface IGDirectThreadViewControllerLoader : NSObject <IGDirectViewControllerLoading>
{
    IGUserSession *_userSession;
    IGMainAppControllerDirectThreadItem *_threadItem;
    IGDirectThreadService *_threadService;
    IGDirectDjangoThreadSubscriptionService *_threadSubscriptionService;
    IGUserStore *_userStore;
    NSString *_entryPoint;
    IGDirectThreadNavigationPerfComponents *_threadNavigationPerfComponents;
    IGDirectOutgoingMessagePrivateReplyPayload *_privateReplyPayload;
    IGDirectThreadLoggingContext *_threadLoggingContext;
    IGDirectSearchContext *_searchContext;
    IGDirectThreadViewMessageIslandContext *_messageIslandContext;
    id <IGDirectThreadViewControllerDelegate> _directThreadViewControllerDelegate;
    NSString *_ephemeralDraftMessage;
}

- (void).cxx_destruct;
- (id)_titleForUserId:(id)arg1;
- (void)_handleErrorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createViewControllerWithThread:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadThreadAndCreateViewControllerWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_loadPartnershipThreadFromUserId:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_loadPartnershipThreadAndCreateViewControllerFromUsers:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_loadThreadFromUserId:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_loadThreadAndCreateViewControllerFromUsers:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_loadCutoverThreadAndCreateViewControllerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadMsysThreadAndCreateViewControllerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadDjangoThreadAndCreateViewControllerWithThreadId:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_loadThreadAndCreateViewControllerWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)performanceListener;
- (id)objectToLoad;
- (id)title;
- (long long)preferredTabBarBehavior;
- (void)loadViewControllerWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)analyticsModule;
- (id)initWithUserSession:(id)arg1 threadSubscriptionService:(id)arg2 threadService:(id)arg3 userStore:(id)arg4 threadItem:(id)arg5 entryPoint:(id)arg6 privateReplyPayload:(id)arg7 threadLoggingContext:(id)arg8 searchContext:(id)arg9 delegate:(id)arg10 messageIslandContext:(id)arg11 ephemeralDraftMessage:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

