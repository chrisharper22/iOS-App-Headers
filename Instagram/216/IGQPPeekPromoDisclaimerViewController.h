//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"

@class IGTextButton, NSString, UILabel;
@protocol IGQPPeekPromoDisclaimerViewControllerDelegate;

@interface IGQPPeekPromoDisclaimerViewController : IGViewController <IGGestureHandler>
{
    UILabel *_titleLabel;
    UILabel *_headlineOneLabel;
    UILabel *_messageOneLabel;
    UILabel *_headlineTwoLabel;
    UILabel *_messageTwoLabel;
    IGTextButton *_leftStyledTextButton;
    IGTextButton *_rightStyledTextButton;
    id <IGQPPeekPromoDisclaimerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGQPPeekPromoDisclaimerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_onRightButtonTapped:(id)arg1;
- (void)_onLeftButtonTapped:(id)arg1;
- (id)_createMessageLabel:(id)arg1;
- (id)_createHeadlineLabel:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

