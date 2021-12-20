//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCodeConfirmationViewDelegate-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGTextFieldDelegate-Protocol.h"

@class IGAuthHeaderStore, IGCodeConfirmationView, IGCodeConfirmationViewModel, IGRegistrationEmailConfirmationViewControllerContext, NSString;
@protocol IGRegistrationEmailConfirmationViewControllerDelegate;

@interface IGRegistrationEmailConfirmationViewController : IGViewController <IGCoreTextLinkHandler, IGCodeConfirmationViewDelegate, IGTextFieldDelegate>
{
    IGAuthHeaderStore *_authHeaderStore;
    IGRegistrationEmailConfirmationViewControllerContext *_context;
    IGCodeConfirmationView *_codeConfirmationView;
    IGCodeConfirmationViewModel *_codeConfirmationViewModel;
    id <IGRegistrationEmailConfirmationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationEmailConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showResentAlert;
- (void)_resendCode;
- (void)_confirmWithCode:(id)arg1 email:(id)arg2 isFromLink:(_Bool)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)codeConfirmationViewDidTapNextButtonWithCode:(id)arg1 shouldConvert:(_Bool)arg2;
- (void)codeConfirmationViewDidTapBackButton;
- (void)_configureWithViewModel:(id)arg1;
- (id)_subTitleStyledText;
- (void)confirmWithCode:(id)arg1 email:(id)arg2;
- (void)setIsLoading:(_Bool)arg1;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 authHeaderStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
