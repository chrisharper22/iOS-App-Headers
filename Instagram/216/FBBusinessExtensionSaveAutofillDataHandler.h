//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBScriptMessageHandlerBase.h>

@class NSString, NSURL;
@protocol FBBusinessExtensionAutofillUIProviding, FBBusinessExtensionCallbackHandling, FBBusinessExtensionLogging, FBBusinessExtensionUserPreferenceStoring;

@interface FBBusinessExtensionSaveAutofillDataHandler : FBScriptMessageHandlerBase
{
    _Bool _enabled;
    id <FBBusinessExtensionCallbackHandling> _extensionCallbackHandling;
    id <FBBusinessExtensionUserPreferenceStoring> _userPreferenceStore;
    id <FBBusinessExtensionAutofillUIProviding> _autofillUIProvider;
    id <FBBusinessExtensionLogging> _logger;
    NSURL *_websiteURL;
    NSString *_messageName;
}

+ (id)supportedMessageNames;
- (void).cxx_destruct;
- (void)_logEvent:(id)arg1 extra:(id)arg2;
- (_Bool)_isOnlyZipCode:(id)arg1;
- (void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
- (id)initWithEnabled:(_Bool)arg1 extensionCallbackHandling:(id)arg2 userPreferenceStore:(id)arg3 autofillUIProvider:(id)arg4 logger:(id)arg5;

@end

