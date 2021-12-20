//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGLeadGenNavigationControllerDelegate-Protocol.h"
#import "IGStoryCTAInteractionControllerDelegate-Protocol.h"

@class IGLeadGenNavigationController, NSString;
@protocol IGLeadGenViewControllerDelegate;

@interface IGLeadGenViewController : IGViewController <IGLeadGenNavigationControllerDelegate, IGGestureHandler, IGStoryCTAInteractionControllerDelegate>
{
    IGLeadGenNavigationController *_leadGenNavigationController;
    id <IGLeadGenViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLeadGenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)leadGenNavigationControllerDidDismiss:(id)arg1;
- (_Bool)storyCTAInteractionControllerShouldUseDismissGesture:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)storyCTAInteractionControllerDidBeginInteraction;
- (_Bool)canRespondToGesture:(id)arg1;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

