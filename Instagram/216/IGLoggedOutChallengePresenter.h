//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGChallengePresenting-Protocol.h"

@class NSArray, NSString;
@protocol IGWebViewDataStoreManaging><FBWebViewDataStoreContaining;

@interface IGLoggedOutChallengePresenter : NSObject <IGChallengePresenting>
{
    NSArray *_cookies;
    id <IGWebViewDataStoreManaging><FBWebViewDataStoreContaining> _webViewCookieManager;
}

- (void).cxx_destruct;
- (id)createWebViewController;
- (id)initWithCookies:(id)arg1 webViewCookieManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
