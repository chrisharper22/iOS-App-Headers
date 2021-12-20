//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGDPRConsentCollectDOBViewDelegate-Protocol.h"

@class IGGDPRConsentCollectDOBView, IGGDPRConsentContext, IGGDPRConsentDataSource, IGGDPRConsentLayoutSpec, IGGDPRConsentLoadingOverlayView, IGGDPRConsentLogger, IGGDPRConsentNavigationPresenter, IGUserSession, NSString;
@protocol IGAPIClient;

@interface IGGDPRConsentCollectDOBViewController : IGViewController <IGGDPRConsentCollectDOBViewDelegate>
{
    IGUserSession *_userSession;
    IGGDPRConsentContext *_consentContext;
    IGGDPRConsentDataSource *_consentDataSource;
    IGGDPRConsentLogger *_logger;
    IGGDPRConsentCollectDOBView *_DOBCollectionView;
    IGGDPRConsentLoadingOverlayView *_loadingOverlayView;
    id <IGAPIClient> _networker;
    IGGDPRConsentNavigationPresenter *_presenter;
    IGGDPRConsentLayoutSpec *_layoutSpec;
}

- (void).cxx_destruct;
- (void)_sendDOB;
- (long long)_dayFromDOB:(id)arg1;
- (long long)_monthFromDOB:(id)arg1;
- (long long)_yearFromDOB:(id)arg1;
- (long long)_getCurrenAgeFromDOB:(id)arg1;
- (_Bool)_checkUnderTeensAgeWithDOB:(id)arg1;
- (void)GDPRConsentCollectDOBViewDidTapSubmitButton;
- (void)onCancelModal;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)_configureWithCollectDOBView;
- (void)_configureWithConsentContext;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 consentContext:(id)arg2 consentDataSource:(id)arg3 networker:(id)arg4 navigationPresenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
