//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGAgePickerViewControllerDelegate-Protocol.h"
#import "IGBrowserControllerDelegate-Protocol.h"
#import "IGChangeEmailUpdatedViewControllerDelegate-Protocol.h"
#import "IGChangeEmailViewControllerDelegate-Protocol.h"
#import "IGChangePhoneNumberUpdatedViewControllerDelegate-Protocol.h"
#import "IGChangePhoneNumberViewControllerDelegate-Protocol.h"
#import "IGConfirmPhoneNumberUpdatedViewControllerDelegate-Protocol.h"
#import "IGConfirmPhoneNumberViewControllerDelegate-Protocol.h"
#import "IGEditProfileGenderViewControllerDelegate-Protocol.h"
#import "IGPersonalInformationFieldCellDelegate-Protocol.h"

@class IGConfirmPhoneHelper, IGPersonalInformationFieldCell, IGPersonalInformationFieldModel, IGTooltipView, IGUserSession, IGViewController, NSString;
@protocol IGPersonalInformationFieldSectionControllerDelegate;

@interface IGPersonalInformationFieldSectionController : IGListSectionController <IGChangeEmailViewControllerDelegate, IGChangeEmailUpdatedViewControllerDelegate, IGChangePhoneNumberViewControllerDelegate, IGChangePhoneNumberUpdatedViewControllerDelegate, IGEditProfileGenderViewControllerDelegate, IGAgePickerViewControllerDelegate, IGPersonalInformationFieldCellDelegate, IGConfirmPhoneNumberViewControllerDelegate, IGConfirmPhoneNumberUpdatedViewControllerDelegate, IGBrowserControllerDelegate>
{
    IGUserSession *_userSession;
    IGPersonalInformationFieldModel *_fieldModel;
    IGPersonalInformationFieldCell *_cell;
    IGTooltipView *_sharedEmailTooltip;
    _Bool _isUserLinkedToFB;
    NSString *_phoneNumberInProcess;
    _Bool _phoneConfirmationInProgress;
    _Bool _isCellEmailCell;
    _Bool _isBirthdayFieldLoading;
    IGViewController<IGPersonalInformationFieldSectionControllerDelegate> *_delegate;
    IGConfirmPhoneHelper *_confirmPhoneHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGConfirmPhoneHelper *confirmPhoneHelper; // @synthesize confirmPhoneHelper=_confirmPhoneHelper;
@property(nonatomic) __weak IGViewController<IGPersonalInformationFieldSectionControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_pinTooltipToCell;
- (void)_maybeShowSharedEmailTooltip;
- (void)browserControllerDidChangeUrl:(id)arg1;
- (void)browserControllerDidDismissWithUrl:(id)arg1;
- (void)agePickerViewController:(id)arg1 didUpdateBirthday:(id)arg2;
- (void)editProfileGenderViewController:(id)arg1 didUpdateGender:(long long)arg2 customGenderString:(id)arg3;
- (void)confirmPhoneNumberUpdatedViewControllerWantsToChangePhoneNumber:(id)arg1;
- (void)confirmPhoneNumberUpdatedViewControllerWantsConfirmationCodeResent:(id)arg1;
- (void)confirmPhoneNumberUpdatedViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2;
- (void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1;
- (void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1;
- (void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2;
- (void)changePhoneNumberUpdatedViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3;
- (void)changePhonenumberViewController:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)changePhonenumberViewController:(id)arg1 willPresentCountryCodeViewController:(id)arg2;
- (void)changePhoneNumberViewController:(id)arg1 didChangeTwoFactorPhoneNumber:(id)arg2;
- (void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 contactPreference:(unsigned long long)arg4;
- (void)_handleDidConfirmPhoneNumber;
- (void)_handleSMSSentWithSettingsDict:(id)arg1 smsConsent:(_Bool)arg2;
- (void)_sendSMSCodeToPhoneNumber:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)_tryToAutoConfirmPhoneNumber:(id)arg1 smsConsent:(_Bool)arg2 withViewController:(id)arg3;
- (void)_confirmPhoneButtonTapped;
- (void)confirmEmailDismissedWithConfirmationType:(long long)arg1 forEmail:(id)arg2;
- (void)_confirmEmailButtonTapped;
- (void)personalInformationFieldCellActionButtonTapped:(id)arg1;
- (void)personalInformationFieldCellConfirmationButtonTapped:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

