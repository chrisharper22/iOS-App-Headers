//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBScriptMessageHandlerBase.h>

#import "FBBusinessExtensionCallbackHandling-Protocol.h"

@class NSString;
@protocol FBInstantExperienceDelegate;

@interface FBBusinessExtensionInitializeCallbackHandler : FBScriptMessageHandlerBase <FBBusinessExtensionCallbackHandling>
{
    id <FBInstantExperienceDelegate> _delegate;
    NSString *_callbackHandlerName;
}

+ (id)supportedMessageNames;
- (void).cxx_destruct;
- (void)invokeJavaScriptCallbackWithError:(unsigned long long)arg1 errorMessage:(id)arg2 messageName:(id)arg3 messageParams:(id)arg4 startWebsiteURL:(id)arg5 webView:(id)arg6;
- (void)invokeJavaScriptCallbackWithResult:(_Bool)arg1 returnParams:(id)arg2 messageName:(id)arg3 messageParams:(id)arg4 startWebsiteURL:(id)arg5 webView:(id)arg6;
- (void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
- (void)setDelegate:(id)arg1;
- (_Bool)requireDelegateSetUp;
- (_Bool)supportsCallback;
- (_Bool)requireDomainToBeWhitelisted;
- (_Bool)requireHttps;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

