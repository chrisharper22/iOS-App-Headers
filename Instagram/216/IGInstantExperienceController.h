//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGBrowserPresentationDelegate-Protocol.h"

@class IGUser, IGUserSession, NSString;

@interface IGInstantExperienceController : NSObject <IGBrowserPresentationDelegate>
{
    IGUserSession *_session;
    IGUser *_profileUser;
}

- (void).cxx_destruct;
- (void)_showIXEvalSurvey;
- (void)browserViewControllerDidEndDismissalTransition:(id)arg1;
- (void)browserViewControllerWillBeginPresentationTransition:(id)arg1;
- (id)_ixScriptMessageHandler:(unsigned long long)arg1;
- (void)_presentNewIABWithNavController:(id)arg1 url:(id)arg2 urlSource:(unsigned long long)arg3;
- (void)presentWebViewController:(id)arg1 url:(id)arg2 urlSource:(unsigned long long)arg3;
- (id)initWithSession:(id)arg1 profileUser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

