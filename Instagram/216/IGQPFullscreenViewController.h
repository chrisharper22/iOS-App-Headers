//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGQPFullscreenViewDelegate-Protocol.h"

@class IGQPInterstitial, IGQPInterstitialPresenter, NSString, UINavigationController;
@protocol IGQPDelegate;

@interface IGQPFullscreenViewController : IGViewController <IGQPFullscreenViewDelegate>
{
    UINavigationController *_navigationController;
    IGQPInterstitial *_interstitial;
    IGQPInterstitialPresenter *_interstitialPresenter;
    id <IGQPDelegate> _qpCoordinator;
}

- (void).cxx_destruct;
- (void)qpFullscreenViewDidTapSecondaryButton;
- (void)qpFullscreenViewDidTapPrimaryButton;
- (void)qpFullscreenViewDidTapDismissButton;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithNavigationController:(id)arg1 interstitial:(id)arg2 interstitialPresenter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

