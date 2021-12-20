//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAccountLocationLowConfidenceQPViewDelegate-Protocol.h"

@class IGAccountLocationLowConfidenceQPView, IGAccountLocationProducerLogger, IGUserSession, NSString;
@protocol IGAccountLocationLowConfidenceQPViewControllerDelegate;

@interface IGAccountLocationLowConfidenceQPViewController : IGViewController <IGAccountLocationLowConfidenceQPViewDelegate>
{
    IGUserSession *_userSession;
    IGAccountLocationProducerLogger *_logger;
    IGAccountLocationLowConfidenceQPView *_lowConfidenceQPView;
    id <IGAccountLocationLowConfidenceQPViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAccountLocationLowConfidenceQPViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onLocationPermissionDenied;
- (void)_onLocationPermissionAuthorized:(CDUnknownBlockType)arg1;
- (void)_locationServicesAlreadyEnabled;
- (void)_locationServicesEnabled;
- (void)_configureLowConfidenceQPView;
- (void)accountLocationLowConfidenceQPView:(id)arg1 didTapLearnMoreLinkWithURL:(id)arg2;
- (void)accountLocationLowConfidenceQPViewDidTapBottomPrimaryButton:(id)arg1;
- (void)accountLocationLowConfidenceQPViewDidTapCloseButton:(id)arg1;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

