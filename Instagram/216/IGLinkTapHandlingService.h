//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGBrowserControllerDelegate-Protocol.h"

@class IGMessengerURLHandler, IGUserSession, NSString;

@interface IGLinkTapHandlingService : NSObject <IGBrowserControllerDelegate>
{
    IGUserSession *_userSession;
    IGMessengerURLHandler *_messengerURLHandler;
    NSString *_webViewEventAnalyticsModule;
    _Bool _useURLSafetyCheck;
}

- (void).cxx_destruct;
- (void)browserControllerDidChangeUrl:(id)arg1;
- (void)browserControllerDidDismissWithUrl:(id)arg1;
- (void)_showAlertController:(id)arg1 sourceController:(id)arg2;
- (void)_handleTapForAddress:(id)arg1 sourceController:(id)arg2;
- (void)_handleTapForPhoneNumber:(id)arg1 sourceController:(id)arg2;
- (void)_handleTapForExternalURL:(id)arg1 sourceController:(id)arg2;
- (void)_handleTapForInternalURL:(id)arg1 sourceController:(id)arg2;
- (void)handleTapForURL:(id)arg1 sourceController:(id)arg2;
- (id)initWithUserSession:(id)arg1 webViewEventAnalyticsModule:(id)arg2 viewerSessionId:(id)arg3 useURLSafetyCheck:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

