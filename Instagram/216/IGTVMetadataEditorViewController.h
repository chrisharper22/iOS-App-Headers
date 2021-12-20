//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAutocompleteControllerDelegate-Protocol.h"
#import "IGBrandedContentUpsellHelperDelegate-Protocol.h"
#import "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#import "IGShoppingProductTaggingFlowPresenterDelegate-Protocol.h"
#import "IGShoppingTaggingPermissionsHelperDelegate-Protocol.h"
#import "IGTVFeedPreviewCropEditorViewControllerDelegate-Protocol.h"
#import "IGTVMetadataDescriptionInputHandlerDelegate-Protocol.h"
#import "IGTVMetadataEditorAdvancedSettingsViewControllerDelegate-Protocol.h"
#import "IGTVMetadataEditorViewDelegate-Protocol.h"
#import "IGTVMetadataTitleInputHandlerDelegate-Protocol.h"
#import "IGTVSeriesListDataSourceDelegate-Protocol.h"
#import "IGTVSeriesListViewControllerDelegate-Protocol.h"
#import "IGTVSquareCropEditorViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGAutocompleteController, IGBrandedContentUpsellHelper, IGKeyboardObserver, IGMediaCroppingInfo, IGShoppingProductTaggingFeedPinProductConfiguration, IGShoppingTaggingPermissionsHelper, IGTVComposition, IGTVCreationAnalyticsSession, IGTVMetadataDescriptionInputHandler, IGTVMetadataEditorAdvancedSettingsViewController, IGTVMetadataEditorAdvancedSettingsViewControllerConfig, IGTVMetadataEditorView, IGTVMetadataTitleInputHandler, IGTVProductTaggingPinProductCTAConfiguration, IGTVSeriesListDataSource, IGTVShoppingUploadMetadata, IGTVUploadMetadata, IGUser, IGUserSession, IGVideoComposition, IGVideoSeriesDataModel, NSArray, NSMutableDictionary, NSString, NSURL, UIBarButtonItem, UITapGestureRecognizer;
@protocol IGTVMetadataEditorDelegate;

@interface IGTVMetadataEditorViewController : IGViewController <IGAutocompleteControllerDelegate, IGBrandedContentUpsellHelperDelegate, IGKeyboardObserverFrameChangeDelegate, IGTVFeedPreviewCropEditorViewControllerDelegate, IGTVMetadataDescriptionInputHandlerDelegate, IGTVMetadataEditorAdvancedSettingsViewControllerDelegate, IGTVMetadataTitleInputHandlerDelegate, IGTVSeriesListViewControllerDelegate, IGTVSquareCropEditorViewControllerDelegate, UIGestureRecognizerDelegate, IGTVMetadataEditorViewDelegate, IGTVSeriesListDataSourceDelegate, IGShoppingTaggingPermissionsHelperDelegate, IGShoppingProductTaggingFlowPresenterDelegate>
{
    IGTVMetadataEditorView *_metadataEditorView;
    IGTVMetadataTitleInputHandler *_titleInputHandler;
    IGTVMetadataDescriptionInputHandler *_descriptionInputHandler;
    UIBarButtonItem *_disabledPostBarButtonItem;
    UIBarButtonItem *_enabledPostBarButtonItem;
    IGKeyboardObserver *_keyboardObserver;
    UITapGestureRecognizer *_keyboardDismissTap;
    double _keyboardBottomInset;
    IGUserSession *_userSession;
    IGTVCreationAnalyticsSession *_creationAnalytics;
    NSURL *_feedPreviewLearnMoreURL;
    _Bool _shareToFacebookDefaultStatus;
    IGMediaCroppingInfo *_feedPreviewCropInfo;
    IGMediaCroppingInfo *_squareCropInfo;
    IGAutocompleteController *_autocompleteController;
    IGBrandedContentUpsellHelper *_brandedContentUpsellHelper;
    NSMutableDictionary *_brandedContentLoggingPayload;
    IGTVMetadataEditorAdvancedSettingsViewControllerConfig *_advSettingsConfig;
    IGTVMetadataEditorAdvancedSettingsViewController *_advSettingsVC;
    IGUser *_sponsorPartner;
    NSArray *_brandedContentTags;
    _Bool _isPaidPartnership;
    _Bool _creatorEligibleForFundedContent;
    _Bool _isFundedContent;
    _Bool _shouldIncrementRevShareToggleOffCount;
    _Bool _eligibleToSeeRevShareToggleTooltip;
    _Bool _didShowRevShareToolTipForVideoComposition;
    IGVideoSeriesDataModel *_selectedSeriesDataModel;
    IGTVShoppingUploadMetadata *_shoppingMetadata;
    IGShoppingTaggingPermissionsHelper *_shoppingTaggingPermissionsHelper;
    IGTVProductTaggingPinProductCTAConfiguration *_pinProductCTAConfig;
    IGShoppingProductTaggingFeedPinProductConfiguration *_pinProductConfig;
    _Bool _geogatingAvailable;
    long long _draftState;
    IGTVComposition *_igtvComposition;
    IGTVSeriesListDataSource *_seriesDataSource;
    NSArray *_geogatingCountries;
    _Bool _disableFeedPreviewDurationCheck;
    _Bool _postBarButtonItemIsFakeDisabled;
    IGVideoComposition *_videoComposition;
    id <IGTVMetadataEditorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool postBarButtonItemIsFakeDisabled; // @synthesize postBarButtonItemIsFakeDisabled=_postBarButtonItemIsFakeDisabled;
@property(nonatomic) __weak id <IGTVMetadataEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
- (_Bool)_requestProductTaggingPermissionsIfNecessary;
- (void)_configureProductTaggingRowAccessoryText;
- (id)_compositionFromMetadata;
- (void)_loadDataFromIGTVComposition;
- (void)_presentNavigationControllerWithRootViewController:(id)arg1;
- (void)_openBrowserWithURL:(id)arg1;
- (struct CGSize)_videoCompositionAssetSize;
- (struct CGSize)_videoCompositionUploadSize;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateResponse:(id)arg2;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateTaggingPermissionsStatus:(long long)arg2;
- (void)productTaggingFlowPresenter:(id)arg1 didSelectProductCollection:(id)arg2 merchantID:(id)arg3 productMerchantIDs:(id)arg4 sessionID:(id)arg5;
- (void)productTaggingFlowPresenter:(id)arg1 didSelectTaggedProductItems:(id)arg2 merchantID:(id)arg3 productMerchantIDs:(id)arg4 sessionID:(id)arg5 pinnedProducts:(id)arg6 productSelectionBehavior:(id)arg7;
- (void)productTaggingFlowPresenterDidCancel:(id)arg1 sessionID:(id)arg2;
- (void)_fetchBusinessPageAccessToken;
- (void)_loginOnFacebook;
- (void)_updateFacebookToggle;
- (_Bool)_hasBusinessPage;
- (_Bool)_isLoggedInToFacebook;
- (void)_updatePostButtonStyle;
- (void)_handleTapGesture:(id)arg1;
- (void)_titleInputChanged;
- (void)_presentAdvSettings;
- (void)_advSettingsButtonTapped;
- (void)_addToSeriesRowButtonTapped;
- (void)_tagProductRowButtonTapped;
- (void)_profileCoverTapped;
- (void)_feedPreviewCropButtonTapped;
- (void)_feedPreviewSwitchDisabledButtonTapped;
- (void)_feedPreviewSwitchChangedTo:(_Bool)arg1;
- (void)_facebookConnectToggleChangedTo:(_Bool)arg1;
- (void)_facebookConnectionButtonTapped;
- (void)_backButtonTapped;
- (void)_postVideo;
- (void)_postButtonTapped;
- (void)_verifyAndDisplayDraftsSeries:(id)arg1;
- (void)seriesListDataSourceDidUpdateState:(id)arg1;
- (void)metadataEditorViewDidTapSaveAsDraft;
- (void)metadataEditorViewDidTapPostToIGTV;
- (void)metadataEditorViewDidTapCoverPhotoView;
- (void)metadataEditorViewDidTapAdsToggleSubtitleLink:(id)arg1;
- (void)metadataEditorViewDidTapAdsToggleSwitch:(id)arg1;
- (void)metadataEditorViewDidTapFacebookCrossPostToggleSwitch:(id)arg1;
- (void)metadataEditorViewDidTapFacebookCrossPostToggleButton;
- (void)metadataEditorViewDidTapFeedPreviewToggleLearnMoreButton;
- (void)metadataEditorViewDidTapFeedPreviewToggleSwitch:(id)arg1;
- (void)metadataEditorViewDidTapFeedPreviewToggleButton;
- (void)_openAdvancedSettingsPresentAddPartnerFlowOnCompletion:(_Bool)arg1;
- (void)brandedContentUpsellHelperDidTapReviewBrandedContentPolicies;
- (void)brandedContentUpsellHelperDidTapShareAnywayButtonWithSignals:(id)arg1 entryPoint:(unsigned long long)arg2 contentType:(unsigned long long)arg3;
- (void)brandedContentUpsellHelperDidTapShareAnywayButtonWithSignals:(id)arg1 entryPoint:(unsigned long long)arg2;
- (void)brandedContentUpsellHelperDidTapAddTagButtonWithSignals:(id)arg1;
- (void)_showBrandedContentFeedUpsellAlert;
- (_Bool)_shouldShowBrandedContentUpsellAlertWithCaption:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)autocompleteControllerDidReload:(id)arg1;
- (void)autocompleteController:(id)arg1 atIndex:(long long)arg2 isUserSearch:(_Bool)arg3 allResults:(id)arg4 indexInNullState:(unsigned long long)arg5;
- (void)autocompleteController:(id)arg1 willHideContainerView:(id)arg2;
- (void)autocompleteController:(id)arg1 willShowContainerView:(id)arg2 type:(long long)arg3;
- (void)autocompleteControllerDidAutocomplete:(id)arg1 autocompleteText:(id)arg2 resultUser:(id)arg3;
- (void)advancedSettingsViewController:(id)arg1 didUpdateDataModel:(id)arg2;
- (void)seriesListViewController:(id)arg1 didSelectSeriesDataModel:(id)arg2;
- (void)squareCropEditorController:(id)arg1 didUpdateCropInfo:(id)arg2;
- (void)squareCropEditorControllerCancelButtonTapped:(id)arg1;
- (void)feedPreviewCropController:(id)arg1 didUpdateCropInfo:(id)arg2;
- (void)feedPreviewCropControllerCancelButtonTapped:(id)arg1;
- (void)titleTextFieldDidBeginEditing:(id)arg1;
- (void)titleTextFieldDidTypeReturn:(id)arg1;
- (void)titleTextFieldDidChange:(id)arg1;
- (void)descriptionTextViewDidBeginEditing:(id)arg1;
- (void)descriptionTextViewDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
@property(readonly, nonatomic) IGTVUploadMetadata *uploadMetadata;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)refreshCoverPhotoPreviewIfNeeded;
- (long long)preferredTabBarBehavior;
- (void)viewDidLoad;
- (id)initWithVideoComposition:(id)arg1 userSession:(id)arg2 creationAnalytics:(id)arg3 igtvComposition:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

