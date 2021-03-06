//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageSendingListener-Protocol.h"

@class IGDirectCache, IGDirectNicknameManager, IGUserStore, NSString;
@protocol IGAppNavigationHandler, IGDirectMessageSending;

@interface IGDirectOutgoingMessageSendFailureNotificationScheduler : NSObject <IGDirectMessageSendingListener>
{
    IGDirectCache *_directCache;
    id <IGDirectMessageSending> _messageSender;
    id <IGAppNavigationHandler> _appNavigationHandlerStrong;
    id <IGAppNavigationHandler> _appNavigationHandlerWeak;
    IGDirectNicknameManager *_nicknameManager;
    IGUserStore *_userStore;
}

- (void).cxx_destruct;
- (void)_presentSendFailureNotificationForThreadName:(id)arg1 userAvatarToDisplay:(id)arg2 threadItemForNavigation:(id)arg3 sendError:(id)arg4 manualRetryPermitted:(_Bool)arg5;
- (_Bool)_applicationStateAllowsNotificationPresentation;
- (void)outgoingSecureMessageWillSendForThreadTarget:(id)arg1;
- (void)outgoingMessageWithPayload:(id)arg1 didFailToSendWithError:(id)arg2 manualRetryPermitted:(_Bool)arg3;
- (void)outgoingMessagePayloadSuccessfullySent:(id)arg1;
- (void)stopListening;
- (void)startListening;
- (id)initWithDirectCache:(id)arg1 messageSender:(id)arg2 featureSets:(id)arg3 appNavigationHandler:(id)arg4 nicknameManager:(id)arg5 userStore:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

