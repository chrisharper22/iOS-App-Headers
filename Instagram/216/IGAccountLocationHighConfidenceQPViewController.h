//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAccountLocationHideViewControllerDelegate-Protocol.h"
#import "IGAccountLocationHighConfidenceQPViewDelegate-Protocol.h"

@class IGAccountLocationHideViewController, IGAccountLocationHighConfidenceQPView, IGAccountLocationModel, IGAccountLocationProducerLogger, IGUserSession, NSString;
@protocol IGAccountLocationHighConfidenceQPViewControllerDelegate;

@interface IGAccountLocationHighConfidenceQPViewController : IGViewController <IGAccountLocationHighConfidenceQPViewDelegate, IGAccountLocationHideViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGAccountLocationProducerLogger *_logger;
    IGAccountLocationModel *_accountLocationModel;
    IGAccountLocationHideViewController *_hideVC;
    IGAccountLocationHighConfidenceQPView *_highConfidenceQPView;
    _Bool _willShareLocation;
    _Bool _shouldShowToggle;
    id <IGAccountLocationHighConfidenceQPViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAccountLocationHighConfidenceQPViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureHighConfidenceQPView;
- (void)_fetchAccountLocationInfo;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)hideViewControllerDidTapHideCountryButton:(id)arg1;
- (void)hideViewControllerDidTapBackButton:(id)arg1;
- (void)accountLocationHighConfidenceQPView:(id)arg1 didToggleSharedLocationWithValue:(_Bool)arg2;
- (void)accountLocationHighConfidenceQPViewDidTapConfirmButton:(id)arg1;
- (void)accountLocationHighConfidenceQPViewDidTapReloadButton:(id)arg1;
- (void)accountLocationHighConfidenceQPView:(id)arg1 didTapLearnMoreLinkWithURL:(id)arg2;
- (void)accountLocationHighConfidenceQPViewDidTapHideLink:(id)arg1;
- (void)accountLocationHighConfidenceQPViewDidTapCloseButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 isLocationShared:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

