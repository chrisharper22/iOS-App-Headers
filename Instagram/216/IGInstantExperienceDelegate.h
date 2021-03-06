//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBInstantExperienceDelegate-Protocol.h"

@class FBBusinessExtensionFeatureEnabledListViewModel, IGInstantExperiencePaymentsCheckoutHandler, NSString, UIViewController;
@protocol FBBusinessExtensionAutofillDataProviding, FBBusinessExtensionAutofillUIProviding, FBBusinessExtensionCallbackHandling, FBBusinessExtensionLogging, FBBusinessExtensionUserPreferenceStoring;

@interface IGInstantExperienceDelegate : NSObject <FBInstantExperienceDelegate>
{
    _Bool _isAwaitingSetup;
    id <FBBusinessExtensionCallbackHandling> _extensionCallbackHandling;
    UIViewController *_fbWebViewController;
    id <FBBusinessExtensionLogging> _logger;
    id <FBBusinessExtensionUserPreferenceStoring> _userPreferenceStore;
    id <FBBusinessExtensionAutofillUIProviding> _autofillUIProvider;
    id <FBBusinessExtensionAutofillDataProviding> _autofillDataProvider;
    FBBusinessExtensionFeatureEnabledListViewModel *_featureEnabledList;
    IGInstantExperiencePaymentsCheckoutHandler *_paymentCheckoutHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGInstantExperiencePaymentsCheckoutHandler *paymentCheckoutHandler; // @synthesize paymentCheckoutHandler=_paymentCheckoutHandler;
@property(nonatomic) _Bool isAwaitingSetup; // @synthesize isAwaitingSetup=_isAwaitingSetup;
@property(retain, nonatomic) FBBusinessExtensionFeatureEnabledListViewModel *featureEnabledList; // @synthesize featureEnabledList=_featureEnabledList;
@property(retain, nonatomic) id <FBBusinessExtensionAutofillDataProviding> autofillDataProvider; // @synthesize autofillDataProvider=_autofillDataProvider;
@property(retain, nonatomic) id <FBBusinessExtensionAutofillUIProviding> autofillUIProvider; // @synthesize autofillUIProvider=_autofillUIProvider;
@property(retain, nonatomic) id <FBBusinessExtensionUserPreferenceStoring> userPreferenceStore; // @synthesize userPreferenceStore=_userPreferenceStore;
@property(retain, nonatomic) id <FBBusinessExtensionLogging> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) UIViewController *fbWebViewController; // @synthesize fbWebViewController=_fbWebViewController;
@property(retain, nonatomic) id <FBBusinessExtensionCallbackHandling> extensionCallbackHandling; // @synthesize extensionCallbackHandling=_extensionCallbackHandling;
- (void)addOnDelegateSetupBlock:(CDUnknownBlockType)arg1;
- (_Bool)isURLWhitelisted:(id)arg1;
- (id)initWithUserPreferenceStore:(id)arg1 autofillDataProvider:(id)arg2 logger:(id)arg3 uiProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

