//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGRegistrationDoBSupportContainerViewDelegate-Protocol.h"

@class IGRegistrationDoBSupportContainerView, IGRegistrationLogger, NSString;

@interface IGRegistrationDoBSupportViewController : IGViewController <IGRegistrationDoBSupportContainerViewDelegate>
{
    IGRegistrationDoBSupportContainerView *_containerView;
    IGRegistrationLogger *_logger;
}

- (void).cxx_destruct;
- (void)_closeButtonTapped;
- (void)dobSupportContainerViewDidTapInfoLink:(id)arg1;
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
