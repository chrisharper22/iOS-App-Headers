//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGAccountSettingsAccountPrivacyViewDelegate-Protocol.h"
#import "IGAvatarEffectManagerListener-Protocol.h"
#import "IGAvatarProfilePicControllerDelegate-Protocol.h"
#import "IGBusinessConversionDismissDelegate-Protocol.h"
#import "IGBusinessFacebookConnectOrClaimPageFlowDelegate-Protocol.h"
#import "IGChangeEmailUpdatedViewControllerDelegate-Protocol.h"
#import "IGChangeEmailViewControllerDelegate-Protocol.h"
#import "IGChangePhoneNumberUpdatedViewControllerDelegate-Protocol.h"
#import "IGChangePhoneNumberViewControllerDelegate-Protocol.h"
#import "IGConfirmPhoneNumberUpdatedViewControllerDelegate-Protocol.h"
#import "IGConfirmPhoneNumberViewControllerDelegate-Protocol.h"
#import "IGEditBusinessProfileViewControllerDelegate-Protocol.h"
#import "IGEditProfileBioViewControllerDelegate-Protocol.h"
#import "IGEditProfileGenderViewControllerDelegate-Protocol.h"
#import "IGEditProfileImpersonationCategoryViewControllerDelegate-Protocol.h"
#import "IGEditProfileNameViewControllerDelegate-Protocol.h"
#import "IGEditProfileUsernameViewControllerDelegate-Protocol.h"
#import "IGEditProfileViewControllerType-Protocol.h"
#import "IGFXIMManagerListener-Protocol.h"
#import "IGGrowingTextViewDelegate-Protocol.h"
#import "IGProCategorySelectionViewControllerDelegate-Protocol.h"
#import "IGProConversionFlowPresentingDelegate-Protocol.h"
#import "IGProProfileDisplayOptionsViewControllerDelegate-Protocol.h"
#import "IGProfilePictureHelperDelegate-Protocol.h"
#import "IGPurchaseOptionViewControllerDelegate-Protocol.h"
#import "IGTextFieldDelegate-Protocol.h"
#import "IGUserUpdatedListener-Protocol.h"

@class IG4BFlowNavDelegateWrapper, IG4BLogger, IGAvatarProfilePicController, IGAvatarProfilePictureLogger, IGBloksAsyncActionHandler, IGBusinessFacebookConnectOrClaimPageFlow, IGConfirmPhoneHelper, IGEditProfileConfirmationView, IGEditProfileHeaderView, IGEditProfileParams, IGFXProfileUpsellManager, IGGroupedTableViewCell, IGGrowingTextView, IGInfoView, IGInsetLabel, IGProAccountLoggingProvider, IGProDiverseOwnedBusinessInfo, IGProDiverseOwnedBusinessInfoDataSource, IGTextField, IGTooltipView, IGUserProfileGroupedTableViewCell, IGUserSession, NSArray, NSMutableDictionary, NSNumber, NSString, UIBarButtonItem, UIImage, UITextField, UITextView;
@protocol IGActivatorActionListener, IGEditProfileViewControllerTypeDelegate, IGEditProfileViewControllerTypeLoggingDelegate, IGFeaturedAccountsEditorDelegate;

@interface IGEditProfileViewController : IGGroupedTableViewController <IGBusinessConversionDismissDelegate, IGBusinessFacebookConnectOrClaimPageFlowDelegate, IGChangeEmailViewControllerDelegate, IGChangeEmailUpdatedViewControllerDelegate, IGChangePhoneNumberUpdatedViewControllerDelegate, IGChangePhoneNumberViewControllerDelegate, IGConfirmPhoneNumberUpdatedViewControllerDelegate, IGConfirmPhoneNumberViewControllerDelegate, IGEditBusinessProfileViewControllerDelegate, IGEditProfileBioViewControllerDelegate, IGEditProfileGenderViewControllerDelegate, IGEditProfileNameViewControllerDelegate, IGEditProfileUsernameViewControllerDelegate, IGFXIMManagerListener, IGGrowingTextViewDelegate, IGProCategorySelectionViewControllerDelegate, IGProProfileDisplayOptionsViewControllerDelegate, IGPurchaseOptionViewControllerDelegate, IGEditProfileImpersonationCategoryViewControllerDelegate, IGTextFieldDelegate, IGAccountSettingsAccountPrivacyViewDelegate, IGUserUpdatedListener, IGAvatarEffectManagerListener, IGAvatarProfilePicControllerDelegate, IGProfilePictureHelperDelegate, IGEditProfileViewControllerType, IGProConversionFlowPresentingDelegate>
{
    IGUserProfileGroupedTableViewCell *_profileCell;
    IGInsetLabel *_characterCountLabel;
    UITextField *_currentField;
    IGGrowingTextView *_bioTextView;
    IGTextField *_pronounsTextField;
    IGTextField *_linksTextField;
    IGTextField *_websiteTextField;
    UITextView *_internalTextView;
    IGTextField *_emailTextField;
    IGTextField *_conversionTextField;
    IGTextField *_impersonationCategoryTextField;
    IGTextField *_phoneTextField;
    IGTextField *_genderTextField;
    IGTextField *_pageTextField;
    IGTextField *_categoryTextField;
    IGTextField *_contactTextField;
    IGTextField *_profileDisplayTextField;
    IGTextField *_purchaseOptionsTextField;
    IGTextField *_diverseOwnedBusinessInfoTextField;
    _Bool _userCanEditPronouns;
    IGEditProfileConfirmationView *_emailConfirmationView;
    IGEditProfileConfirmationView *_phoneConfirmationView;
    IGEditProfileConfirmationView *_pageConfirmationView;
    IGConfirmPhoneHelper *_confirmPhoneHelper;
    _Bool _hasUnsavedChanges;
    IGTooltipView *_sharedEmailTooltip;
    IGTooltipView *_getQuoteTooltip;
    IGGroupedTableViewCell *_purchaseOptionsCell;
    IGInfoView *_loadingView;
    long long _currentBioHeight;
    long long _dataState;
    NSArray *_publicInfoRows;
    NSArray *_accountImpersonationRows;
    NSArray *_businessInfoRows;
    NSArray *_businessConversionRows;
    NSArray *_addFundraiserRows;
    NSArray *_musicRows;
    NSArray *_personalInformationEntryRows;
    NSArray *_privateInfoRows;
    NSArray *_personalAdsLinkEntryRows;
    NSArray *_avatarCreationRows;
    NSString *_trustedUsername;
    long long _trustedUsernameHoldingDays;
    long long _selectedGender;
    NSString *_customGenderString;
    _Bool _shouldRefetchUserData;
    _Bool _isFirstAppearance;
    IGBloksAsyncActionHandler *_asyncActionHandler;
    _Bool _isAsyncActionPending;
    IGEditProfileParams *_usernameEditParams;
    IGEditProfileParams *_fullNameEditParams;
    NSMutableDictionary *_editProfileRequestParameters;
    _Bool _isPrivateInformationSectionConfigured;
    _Bool _isProfileNameUpdated;
    NSArray *_featuredAccounts;
    IGFXProfileUpsellManager *_fxProfileUpsellManager;
    IGAvatarProfilePicController *_avatarProfilePicController;
    IGAvatarProfilePictureLogger *_avatarLogger;
    _Bool _hasAvatarCreated;
    IGBusinessFacebookConnectOrClaimPageFlow *_connectPageFlow;
    IGProAccountLoggingProvider *_loggingProvider;
    _Bool _ttiLogged;
    _Bool _isTotalDirtyBytesValid;
    _Bool _isEvictableMemoryValid;
    _Bool _emptyEmailConfirmed;
    _Bool _submitting;
    _Bool _needPhoneConfirm;
    _Bool _needEmailConfirm;
    _Bool _confirmedEmailInSession;
    _Bool _confirmedPhoneInSession;
    _Bool _isPresented;
    _Bool _shouldAutoFocusFirstEmptyBusinessProfileField;
    _Bool _shouldUseZeroEdgeInsets;
    _Bool _shouldOnlyShowPublicInformation;
    _Bool _isPresentedInOnboardingChecklist;
    id <IGActivatorActionListener> _activatorActionListener;
    id <IGEditProfileViewControllerTypeDelegate> _delegate;
    id <IGEditProfileViewControllerTypeLoggingDelegate> _loggingDelegate;
    id _proConversionFlow;
    id <IGFeaturedAccountsEditorDelegate> _featuredAccountsDelegate;
    IGUserSession *_userSession;
    NSNumber *_startTime;
    double _viewDidAppearTime;
    double _ttiTime;
    unsigned long long _initialTotalDirtyBytes;
    unsigned long long _contentDidAppearTotalDirtyBytes;
    unsigned long long _initialEvictableMemoryBytes;
    unsigned long long _contentDidAppearEvictableMemoryBytes;
    UIImage *_profilePicture;
    long long _profilePictureOption;
    long long _profilePictureState;
    NSString *_phoneNumber;
    IGEditProfileHeaderView *_profilePicHeaderView;
    NSArray *_textFields;
    NSArray *_sections;
    UIBarButtonItem *_doneButton;
    IG4BLogger *_logger;
    IG4BFlowNavDelegateWrapper *_navDelegateWrapper;
    IGProDiverseOwnedBusinessInfo *_diverseOwnedBusinessInfo;
    IGProDiverseOwnedBusinessInfoDataSource *_diverseOwnedBusinessInfoDataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGProDiverseOwnedBusinessInfoDataSource *diverseOwnedBusinessInfoDataSource; // @synthesize diverseOwnedBusinessInfoDataSource=_diverseOwnedBusinessInfoDataSource;
@property(retain, nonatomic) IGProDiverseOwnedBusinessInfo *diverseOwnedBusinessInfo; // @synthesize diverseOwnedBusinessInfo=_diverseOwnedBusinessInfo;
@property(nonatomic) _Bool isPresentedInOnboardingChecklist; // @synthesize isPresentedInOnboardingChecklist=_isPresentedInOnboardingChecklist;
@property(nonatomic) _Bool shouldOnlyShowPublicInformation; // @synthesize shouldOnlyShowPublicInformation=_shouldOnlyShowPublicInformation;
@property(nonatomic) _Bool shouldUseZeroEdgeInsets; // @synthesize shouldUseZeroEdgeInsets=_shouldUseZeroEdgeInsets;
@property(nonatomic) _Bool shouldAutoFocusFirstEmptyBusinessProfileField; // @synthesize shouldAutoFocusFirstEmptyBusinessProfileField=_shouldAutoFocusFirstEmptyBusinessProfileField;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(retain, nonatomic) IG4BFlowNavDelegateWrapper *navDelegateWrapper; // @synthesize navDelegateWrapper=_navDelegateWrapper;
@property(readonly, nonatomic) IG4BLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(nonatomic) _Bool confirmedPhoneInSession; // @synthesize confirmedPhoneInSession=_confirmedPhoneInSession;
@property(nonatomic) _Bool confirmedEmailInSession; // @synthesize confirmedEmailInSession=_confirmedEmailInSession;
@property(nonatomic) _Bool needEmailConfirm; // @synthesize needEmailConfirm=_needEmailConfirm;
@property(nonatomic) _Bool needPhoneConfirm; // @synthesize needPhoneConfirm=_needPhoneConfirm;
@property(nonatomic) _Bool submitting; // @synthesize submitting=_submitting;
@property(nonatomic) _Bool emptyEmailConfirmed; // @synthesize emptyEmailConfirmed=_emptyEmailConfirmed;
@property(retain, nonatomic) IGEditProfileHeaderView *profilePicHeaderView; // @synthesize profilePicHeaderView=_profilePicHeaderView;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) long long profilePictureState; // @synthesize profilePictureState=_profilePictureState;
@property(nonatomic) long long profilePictureOption; // @synthesize profilePictureOption=_profilePictureOption;
@property(retain, nonatomic) UIImage *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(nonatomic) unsigned long long contentDidAppearEvictableMemoryBytes; // @synthesize contentDidAppearEvictableMemoryBytes=_contentDidAppearEvictableMemoryBytes;
@property(nonatomic) unsigned long long initialEvictableMemoryBytes; // @synthesize initialEvictableMemoryBytes=_initialEvictableMemoryBytes;
@property(nonatomic) _Bool isEvictableMemoryValid; // @synthesize isEvictableMemoryValid=_isEvictableMemoryValid;
@property(nonatomic) unsigned long long contentDidAppearTotalDirtyBytes; // @synthesize contentDidAppearTotalDirtyBytes=_contentDidAppearTotalDirtyBytes;
@property(nonatomic) unsigned long long initialTotalDirtyBytes; // @synthesize initialTotalDirtyBytes=_initialTotalDirtyBytes;
@property(nonatomic) _Bool isTotalDirtyBytesValid; // @synthesize isTotalDirtyBytesValid=_isTotalDirtyBytesValid;
@property(nonatomic) _Bool ttiLogged; // @synthesize ttiLogged=_ttiLogged;
@property(nonatomic) double ttiTime; // @synthesize ttiTime=_ttiTime;
@property(nonatomic) double viewDidAppearTime; // @synthesize viewDidAppearTime=_viewDidAppearTime;
@property(readonly, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGFeaturedAccountsEditorDelegate> featuredAccountsDelegate; // @synthesize featuredAccountsDelegate=_featuredAccountsDelegate;
@property(retain, nonatomic) id proConversionFlow; // @synthesize proConversionFlow=_proConversionFlow;
@property(nonatomic) __weak id <IGEditProfileViewControllerTypeLoggingDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(nonatomic) __weak id <IGEditProfileViewControllerTypeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGActivatorActionListener> activatorActionListener; // @synthesize activatorActionListener=_activatorActionListener;
- (void)userWasUpdated:(id)arg1;
- (void)businessFacebookConnectPageFlowDidDismiss:(id)arg1;
- (void)_logPhotoChangeWithOrigin:(int)arg1;
- (void)_setLoadingSpinnerHidden:(_Bool)arg1;
- (void)_informWithSuccess:(_Bool)arg1 message:(id)arg2 viewController:(id)arg3;
- (void)_informWithSuccess:(_Bool)arg1 message:(id)arg2;
- (void)_showConfirmationMessage;
- (void)_logPerfMetrics;
- (void)_setEndMemoryMetrics;
- (void)_showMaxFeaturedAccountsError;
- (void)_showErrorToast;
- (id)_webBiewControllerForURL:(id)arg1;
- (void)avatarEffectManager:(id)arg1 didUpdateAvatarStatus:(long long)arg2;
- (void)avatarEffectManager:(id)arg1 didUpdateAvatarEffectDownloadState:(long long)arg2;
- (void)featuredAccountsAccountCell:(id)arg1 didToggleUserPK:(id)arg2;
- (void)didPresentBloksPhotoSyncController;
- (void)_fetchAdditionalUserDataForUserAndReloadData;
- (void)_showIdentityManagementPhotoReminderWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_showIdentityManagementPhotoReminderWithCompletionHandler:(CDUnknownBlockType)arg1 photoAction:(long long)arg2;
- (_Bool)_shouldShowPhotoIsSyncedReminder;
- (Optional_3f778f9c)_targetIdentityInfo;
- (void)_logReminderWithUserEvent:(int)arg1 type:(int)arg2;
- (id)analyticsExtras;
- (id)_diverseOwnedBusinessInfoString;
- (_Bool)_shouldShowDiversityOwnedBusinessInfo;
- (id)_purchaseOptionsString;
- (id)_profileVisibilityString;
- (id)_attributedStringWithBioText:(id)arg1 productMentions:(id)arg2 profileLinks:(id)arg3;
- (id)_musicSectionActiveString;
- (id)_contactString;
- (void)_fetchFundraiserData;
- (void)_dataFetchFailed:(id)arg1;
- (void)_dataFetchedWithDictionary:(id)arg1 userUpdater:(id)arg2;
- (void)_configureSections;
- (void)_fetchUserData;
- (void)_dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)validateAndSubmit;
- (void)_validateAndSubmitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_submitProfilePictureChangesWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_submitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleDidConfirmPhoneNumber;
- (void)_handleSMSSentWithSettingsDict:(id)arg1 smsConsent:(_Bool)arg2;
- (void)_tryToAutoConfirmPhoneNumber:(id)arg1 smsConsent:(_Bool)arg2 withViewController:(id)arg3;
- (void)_sendSMSCodeToPhoneNumber:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)_editProfileRequestParameters;
- (_Bool)_validateFieldHasNonEmptyContent:(id)arg1;
- (id)_validateOnboardingChecklistFieldsErrorMessage;
- (_Bool)_validateField:(id)arg1 withAlert:(_Bool)arg2;
- (void)viewControllerDidUpdatePurchaseOptions:(id)arg1;
- (void)editProfileImpersonationCategoryViewController:(id)arg1 didUpdateCategoryWithUserDict:(id)arg2;
- (void)_submitAvatarAsProfilePictureWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)avatarProfilePicControllerDelegate:(id)arg1 didSelectAvatar:(id)arg2;
- (void)profilePictureHelper:(id)arg1 willPerformAction:(long long)arg2;
- (_Bool)profilePictureHelper:(id)arg1 supportsPresentingPhotoSyncReminderForProfilePictureAction:(long long)arg2;
- (void)profilePictureHelper:(id)arg1 showPhotoSyncedReminderDialogForAction:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)profilePictureHelper:(id)arg1 didFinishDownloadingAnonymousProfilePicture:(id)arg2;
- (void)profilePictureHelperRemovePictureButtonTapped:(id)arg1;
- (void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 fromOption:(long long)arg3;
- (void)profilePictureHelperDidTapUseAvatarButton:(id)arg1;
- (id)profilePictureHelperAvatarPromptTitle:(id)arg1;
- (_Bool)profilePictureHelperShouldShowUseAvatarOption:(id)arg1;
- (_Bool)profilePictureHelperShouldShowRemovePicture:(id)arg1;
- (void)growingTextView:(id)arg1 didChangeHeight:(double)arg2;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(double)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (void)editProfileUsernameViewController:(id)arg1 didSaveUsernameWithDict:(id)arg2;
- (void)editProfileNameViewController:(id)arg1 didSaveProfileNameWithDict:(id)arg2;
- (void)editProfileBioViewController:(id)arg1 didSaveProfileBio:(id)arg2 profileLinks:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_onDismissNameWebView;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_autoFocusFirstEmptyField;
- (void)_updatePageName;
- (void)_updatePageCategory;
- (void)conversionFlowWillDismiss;
- (void)businessFacebookConnectPageFlow:(id)arg1 didFinishAction:(long long)arg2;
- (void)businessFacebookConnectPageFlow:(id)arg1 didFailWithError:(id)arg2;
- (void)categorySelectionViewControllerDidDimiss:(id)arg1;
- (void)categorySelectionViewController:(id)arg1 didCompleteWithResultModel:(id)arg2;
- (void)profileDisplayOptionsViewControllerDidSelectDisplayOption:(id)arg1;
- (void)changePhoneNumberUpdatedViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3;
- (void)changePhonenumberViewController:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)changePhonenumberViewController:(id)arg1 willPresentCountryCodeViewController:(id)arg2;
- (void)changePhoneNumberViewController:(id)arg1 didChangeTwoFactorPhoneNumber:(id)arg2;
- (void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 contactPreference:(unsigned long long)arg4;
- (void)confirmPhoneNumberUpdatedViewControllerWantsToChangePhoneNumber:(id)arg1;
- (void)confirmPhoneNumberUpdatedViewControllerWantsConfirmationCodeResent:(id)arg1;
- (void)confirmPhoneNumberUpdatedViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2;
- (void)didSaveEditBusinessProfileViewController:(id)arg1 turnedOnBookingFromOff:(_Bool)arg2;
- (void)didCancelEditBusinessProfileViewController:(id)arg1;
- (void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1;
- (void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1;
- (void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2;
- (void)_updateGenderTextWithGender:(long long)arg1 customGenderString:(id)arg2;
- (void)editProfileGenderViewController:(id)arg1 didUpdateGender:(long long)arg2 customGenderString:(id)arg3;
- (void)_pinIGTooltipToTableViewCell:(id)arg1 viewToPinTooltipTo:(id)arg2 tooltipArrowDirection:(long long)arg3;
- (void)_hidePurchaseOptionsTooltip;
- (void)_maybeShowPurchaseOptionsTooltip;
- (void)_hideSharedEmailTooltip;
- (void)_maybeShowSharedEmailTooltip;
- (_Bool)_isEligibileForStatus:(unsigned long long)arg1;
- (void)_createConfirmPhoneHelper;
- (void)_updateBioTextFieldInteraction;
- (void)_setCurrentField:(id)arg1;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (_Bool)_scrollToAccessory:(id)arg1;
- (id)_indexPathForAccessoryView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)_indexPathForBusinessInfoRow:(long long)arg1;
- (long long)_rowForIndexPath:(id)arg1;
- (id)_indexPathForPublicInfoRow:(long long)arg1;
- (void)_configureBusinessInfoSection;
- (void)_configureAvatarCreationSection;
- (void)_configurePrivateInformationSection;
- (void)_configurePersonalInformationEntrySection;
- (void)_configureInstagramPersonalAdsLinkSection;
- (void)_configureAddFundraiserSection;
- (void)_configureMusicSection;
- (void)_configureBusinessConversionSection;
- (void)_configureAccountImpersonationSection;
- (void)_configurePublicInfoSection;
- (id)_featuredAccountRows;
- (double)_featuredAccountCellHeightForIndexPath:(id)arg1;
- (id)_featuredAccountCellForIndexPath:(id)arg1;
- (id)_businessCellForRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_tableView:(id)arg1 configureRequiredCell:(id)arg2 forIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)_sectionForIndex:(unsigned long long)arg1;
- (void)_presentEditPronounsScreen;
- (void)_confirmPhoneButtonTapped;
- (void)_removeConfirmPhoneButton;
- (_Bool)_showConfirmPhoneButton;
- (void)confirmEmailDismissedWithConfirmationType:(long long)arg1 forEmail:(id)arg2;
- (void)_confirmEmailButtonTapped;
- (void)_removeConfirmEmailButton;
- (_Bool)_showConfirmEmailButton;
- (void)_presentAvatarEditorWithLoggingMechanism:(id)arg1;
- (void)_createAvatarButtonTapped;
- (void)_confirmPageButtonTapped;
- (_Bool)_shouldShowConfirmPageButton;
- (void)_dismissToPresentingViewController;
- (void)onCancelModal;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredTabBarBehavior;
- (id)_createLoggerFromUserSession:(id)arg1 flow:(id)arg2 step:(id)arg3;
- (id)initWithUserSession:(id)arg1 startTime:(id)arg2 isPresented:(_Bool)arg3 shouldAutoFocusFirstEmptyBusinessProfileField:(_Bool)arg4 shouldUseZeroEdgeInsets:(_Bool)arg5 shouldOnlyShowPublicInformation:(_Bool)arg6 isPresentedInOnboardingChecklist:(_Bool)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

