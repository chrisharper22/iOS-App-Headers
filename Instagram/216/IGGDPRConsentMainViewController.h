//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGDPRConsentMainContentDelegate-Protocol.h"

@class IGGDPRConsentContext, IGGDPRConsentDataSource, IGGDPRConsentLayoutSpec, IGGDPRConsentLoadingOverlayView, IGGDPRConsentLogger, IGGDPRConsentMainView, IGGDPRConsentNavigationPresenter, IGUserSession, NSString;
@protocol IGAPIClient;

@interface IGGDPRConsentMainViewController : IGViewController <IGGDPRConsentMainContentDelegate>
{
    IGUserSession *_userSession;
    IGGDPRConsentContext *_consentContext;
    IGGDPRConsentDataSource *_consentDataSource;
    IGGDPRConsentMainView *_consentMainView;
    IGGDPRConsentLoadingOverlayView *_loadingOverlayView;
    long long _ageSelectionButtons;
    IGGDPRConsentLogger *_logger;
    IGGDPRConsentLayoutSpec *_layoutSpec;
    NSString *_screenVariantKey;
    id <IGAPIClient> _networker;
    IGGDPRConsentNavigationPresenter *_presenter;
    _Bool _showTermContentView;
}

- (void).cxx_destruct;
- (id)_getItemWithAgeSelection:(long long)arg1 defaultItem:(id)arg2 arrayOne:(id)arg3 arrayTwo:(id)arg4;
- (void)_sendConsentWithSelectedAgeRange:(id)arg1;
- (void)GDPRConsentMainContentDidTapTextLinkWithURL:(id)arg1;
- (void)GDPRConsentMainContentDidTapOtherOptionsLink;
- (void)GDPRConsentMainContentDidTapConsentButton:(_Bool)arg1;
- (void)onCancelModal;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)_configureBottomButtonView;
- (void)_configureAgeVerificationView;
- (void)_configureConsentTermView;
- (void)_configureConsentMainView;
- (void)_configureWithConsentContext;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 consentContext:(id)arg2 consentDataSource:(id)arg3 screenVariantKey:(id)arg4 networker:(id)arg5 navigationPresenter:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
