//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGChangePhoneNumberViewControllerDelegate-Protocol.h"
#import "IGConfirmPhoneNumberViewControllerDelegate-Protocol.h"
#import "IGQPMegaphonePresenterProtocol-Protocol.h"
#import "IGQPMegaphoneViewDelegate-Protocol.h"

@class IGConfirmPhoneHelper, IGQPMegaphone, IGQPMegaphoneView, IGUserSession, NSString;
@protocol IGQPViewPresenterDelegate;

@interface IGQPConfirmedContactMegaphonePresenter : NSObject <IGChangePhoneNumberViewControllerDelegate, IGConfirmPhoneNumberViewControllerDelegate, IGQPMegaphoneViewDelegate, IGQPMegaphonePresenterProtocol>
{
    IGQPMegaphone *_megaphone;
    IGQPMegaphoneView *_megaphoneView;
    NSString *_phoneNumber;
    IGUserSession *_userSession;
    IGConfirmPhoneHelper *_confirmPhoneHelper;
    id <IGQPViewPresenterDelegate> _delegate;
}

+ (unsigned long long)_buttonActionFromString:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGQPViewPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)qpMegaphoneViewDidTapCountryButton:(id)arg1;
- (void)_turnOnSMS;
- (void)_sendSMSCodeToPhoneNumber:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (void)changePhoneNumberViewController:(id)arg1 didChangeTwoFactorPhoneNumber:(id)arg2;
- (void)changePhonenumberViewController:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)changePhonenumberViewController:(id)arg1 willPresentCountryCodeViewController:(id)arg2;
- (void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 contactPreference:(unsigned long long)arg4;
- (void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1;
- (void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1;
- (void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2;
- (void)_handleSMSSentWithSettingsDict:(id)arg1;
- (void)_confirmContactHandlerForMegaphoneButton:(id)arg1;
- (void)qpMegaphoneViewNeedsResize:(id)arg1;
- (void)qpMegaphoneViewDidTapNotNow:(id)arg1;
- (void)qpMegaphoneViewDidDismiss:(id)arg1;
- (void)qpMegaphoneView:(id)arg1 didTapButton:(id)arg2 extraQPInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)viewForMegaphone;
- (id)initWithMegaphone:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

