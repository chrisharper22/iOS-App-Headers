//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGParentalApprovalContainerViewDelegate-Protocol.h"

@class IGParentalApprovalContainerView, IGRegistrationLogger, NSString;
@protocol IGParentalConsentApprovalViewControllerDelegate;

@interface IGParentalConsentApprovalViewController : IGViewController <IGParentalApprovalContainerViewDelegate>
{
    IGParentalApprovalContainerView *_containerView;
    IGRegistrationLogger *_logger;
    id <IGParentalConsentApprovalViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGParentalConsentApprovalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)parentalApprovalContainerViewDidTapSkipButton:(id)arg1;
- (void)parentalApprovalContainerViewDidTapAskApprovalButton:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

