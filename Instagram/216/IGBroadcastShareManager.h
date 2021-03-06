//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAccountCellDelegate-Protocol.h"
#import "IGAddPartnerSearchContainerViewControllerDelegate-Protocol.h"
#import "IGAddPartnerTaggingViewControllerDelegate-Protocol.h"
#import "IGAnalyticsModule-Protocol.h"
#import "IGBrandedContentAddPaidPartnershipLabelToggleCellDelegate-Protocol.h"
#import "IGBrandedContentPartnersViewControllerDelegate-Protocol.h"
#import "IGBrandedContentTagAccessFlowDelegate-Protocol.h"
#import "IGBrandedContentUpsellHelperDelegate-Protocol.h"
#import "IGFundraiserFeedSharingCellDelegate-Protocol.h"
#import "IGFundraiserFeedSharingCreateCellDelegate-Protocol.h"
#import "IGFundraiserFeedSharingKitDelegate-Protocol.h"
#import "IGMediaAttributionHScrollCellDelegate-Protocol.h"
#import "IGPostSettingsViewControllerAddPartnerDelegate-Protocol.h"
#import "IGPromoteDarkPostToggleCellDelegate-Protocol.h"
#import "IGPromotePromoteFromSharesheetCellDelegate-Protocol.h"
#import "IGShareListManagerDelegate-Protocol.h"
#import "IGShareLocationManagerDelegate-Protocol.h"
#import "IGShareManager-Protocol.h"
#import "IGShareMusicManagerDelegate-Protocol.h"
#import "IGShareNUXControllerDelegate-Protocol.h"
#import "IGShoppingCrossTaggingServiceDelegate-Protocol.h"
#import "IGShoppingTaggingPermissionsHelperDelegate-Protocol.h"
#import "IGStandalonePersonalFundraiserChangeListener-Protocol.h"
#import "IGSuggestedProductTagsProviderDelegate-Protocol.h"
#import "IGSuggestedProductTagsProviderVisualSearchDelegate-Protocol.h"
#import "IGTaggingViewControllerDelegate-Protocol.h"
#import "IGUpcomingEventsShareManagerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGAutocompleteController, IGBoostPostLogger, IGBottomButtonsView, IGBrandedContentUpsellHelper, IGBroadcastShareGroupManager, IGBusinessToolAlertViewController, IGComposition, IGContentWarningController, IGFBPageCrossPostSettingsManager, IGMediaMetadata, IGPostSettingsViewController, IGShareListManager, IGShareLocationManager, IGShareMusicManager, IGShareNUXController, IGShareSocialShareManager, IGShoppingCrossTaggingService, IGShoppingTaggingPermissionsHelper, IGSuggestedProductTagsProvider, IGUpcomingEventsShareManager, IGUserSession, NSArray, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSString, UICollectionView, UIScrollView, UIView, UIViewController;
@protocol IGAnalyticsModule, IGBroadcastDarkPostToggleDelegate, IGBroadcastPromoteFromSharesheetDelegate, IGBroadcastShareAccountDelegate, IGBroadcastShareBrandedContentUpsellDelegate, IGBroadcastShareContentWarningCellDelegate, IGBroadcastShareFavoritesDelegate, IGBroadcastShareLocationDelegate, IGBroadcastSharePostDelegate, IGBroadcastShareTagDelegate, IGTaggingViewConfiguration;

@interface IGBroadcastShareManager : IGViewController <IGAccountCellDelegate, IGAddPartnerSearchContainerViewControllerDelegate, IGAddPartnerTaggingViewControllerDelegate, IGBrandedContentAddPaidPartnershipLabelToggleCellDelegate, IGBrandedContentPartnersViewControllerDelegate, IGBrandedContentTagAccessFlowDelegate, IGBrandedContentUpsellHelperDelegate, IGFundraiserFeedSharingCellDelegate, IGFundraiserFeedSharingCreateCellDelegate, IGFundraiserFeedSharingKitDelegate, IGMediaAttributionHScrollCellDelegate, IGPostSettingsViewControllerAddPartnerDelegate, IGPromoteDarkPostToggleCellDelegate, IGPromotePromoteFromSharesheetCellDelegate, IGShareListManagerDelegate, IGShareLocationManagerDelegate, IGShareMusicManagerDelegate, IGShareNUXControllerDelegate, IGShoppingCrossTaggingServiceDelegate, IGShoppingTaggingPermissionsHelperDelegate, IGStandalonePersonalFundraiserChangeListener, IGSuggestedProductTagsProviderDelegate, IGSuggestedProductTagsProviderVisualSearchDelegate, IGUpcomingEventsShareManagerDelegate, IGTaggingViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGAnalyticsModule, IGShareManager>
{
    IGShareNUXController *_nuxController;
    IGBoostPostLogger *_boostPostLogger;
    NSOrderedSet *_loggedInUsers;
    NSMutableOrderedSet *_listedUsers;
    NSString *_selectedUserPKOnAccountSwitcher;
    NSMutableSet *_selectedUserPKs;
    IGBrandedContentUpsellHelper *_brandedContentUpsellHelper;
    IGFBPageCrossPostSettingsManager *_crossPostSettingsManager;
    _Bool _showLoggedInUsers;
    _Bool _isLoggedInUserTrayOpen;
    _Bool _showBrandedContentDisclosureTagInCreation;
    NSArray *_tagRows;
    IGShoppingTaggingPermissionsHelper *_shoppingTaggingPermissionsHelper;
    IGShoppingCrossTaggingService *_shoppingCrossTaggingService;
    _Bool _hasShownAffiliateProductTagTooltip;
    IGContentWarningController *_captionWarningController;
    double _timeToShowWarning;
    _Bool _showAdvSettingsCellRedesign;
    IGBusinessToolAlertViewController *_alertViewController;
    _Bool _isFundraiserRowEnabled;
    _Bool _shouldShowFundraiserRow;
    _Bool _isNonprofitSuggestionEnabled;
    NSMutableOrderedSet *_nonprofitMentions;
    _Bool _isPromoteFromSharesheetToggleOn;
    NSString *_creationSessionId;
    IGBottomButtonsView *_bottomShareButtonView;
    _Bool _showStickySubmitButton;
    IGShareMusicManager *_musicManager;
    IGUpcomingEventsShareManager *_eventsManager;
    NSArray *_visualSearchViewModels;
    _Bool _enteredShoppingOnboardingFlow;
    _Bool _isAutoPostShareToFacebookEnabled;
    _Bool _hasRenderedTagABusinessPartnerCell;
    NSString *_shareString;
    UIViewController<IGAnalyticsModule> *_delegate;
    id <IGBroadcastShareTagDelegate> _tagDelegate;
    id <IGBroadcastShareLocationDelegate> _locationDelegate;
    id <IGBroadcastShareAccountDelegate> _accountDelegate;
    id <IGBroadcastShareFavoritesDelegate> _favoritesDelegate;
    id <IGBroadcastShareBrandedContentUpsellDelegate> _brandedContentUpsellDelegate;
    id <IGBroadcastShareContentWarningCellDelegate> _contentWarningDelegate;
    IGSuggestedProductTagsProvider *_suggestedProductTagsProvider;
    id <IGBroadcastDarkPostToggleDelegate> _darkPostToggleDelegate;
    id <IGBroadcastPromoteFromSharesheetDelegate> _promoteFromSharesheetDelegate;
    id <IGBroadcastSharePostDelegate> _sharePostDelegate;
    IGBroadcastShareGroupManager *_groupManager;
    IGUserSession *_userSession;
    IGComposition *_composition;
    IGMediaMetadata *_editingTagsMediaMetadata;
    id <IGTaggingViewConfiguration> _taggingViewConfig;
    IGMediaMetadata *_mediaMetadata;
    IGShareListManager *_shareListManager;
    UICollectionView *_collectionView;
    UIView *_headerView;
    NSString *_searchSessionId;
    IGShareLocationManager *_locationManager;
    IGShareSocialShareManager *_socialShareManager;
    UIView *_overlayView;
    IGAutocompleteController *_autocompleteController;
    IGPostSettingsViewController *_advancedSettingsView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasRenderedTagABusinessPartnerCell; // @synthesize hasRenderedTagABusinessPartnerCell=_hasRenderedTagABusinessPartnerCell;
@property(readonly, nonatomic) _Bool isAutoPostShareToFacebookEnabled; // @synthesize isAutoPostShareToFacebookEnabled=_isAutoPostShareToFacebookEnabled;
@property(readonly, nonatomic) _Bool enteredShoppingOnboardingFlow; // @synthesize enteredShoppingOnboardingFlow=_enteredShoppingOnboardingFlow;
@property(retain, nonatomic) IGPostSettingsViewController *advancedSettingsView; // @synthesize advancedSettingsView=_advancedSettingsView;
@property(retain, nonatomic) IGAutocompleteController *autocompleteController; // @synthesize autocompleteController=_autocompleteController;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) IGShareSocialShareManager *socialShareManager; // @synthesize socialShareManager=_socialShareManager;
@property(retain, nonatomic) IGShareLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(retain, nonatomic) id <IGTaggingViewConfiguration> taggingViewConfig; // @synthesize taggingViewConfig=_taggingViewConfig;
@property(retain, nonatomic) IGMediaMetadata *editingTagsMediaMetadata; // @synthesize editingTagsMediaMetadata=_editingTagsMediaMetadata;
@property(retain, nonatomic) IGComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGBroadcastShareGroupManager *groupManager; // @synthesize groupManager=_groupManager;
@property(nonatomic) __weak id <IGBroadcastSharePostDelegate> sharePostDelegate; // @synthesize sharePostDelegate=_sharePostDelegate;
@property(nonatomic) __weak id <IGBroadcastPromoteFromSharesheetDelegate> promoteFromSharesheetDelegate; // @synthesize promoteFromSharesheetDelegate=_promoteFromSharesheetDelegate;
@property(nonatomic) __weak id <IGBroadcastDarkPostToggleDelegate> darkPostToggleDelegate; // @synthesize darkPostToggleDelegate=_darkPostToggleDelegate;
@property(readonly, nonatomic) IGSuggestedProductTagsProvider *suggestedProductTagsProvider; // @synthesize suggestedProductTagsProvider=_suggestedProductTagsProvider;
@property(nonatomic) __weak id <IGBroadcastShareContentWarningCellDelegate> contentWarningDelegate; // @synthesize contentWarningDelegate=_contentWarningDelegate;
@property(nonatomic) __weak id <IGBroadcastShareBrandedContentUpsellDelegate> brandedContentUpsellDelegate; // @synthesize brandedContentUpsellDelegate=_brandedContentUpsellDelegate;
@property(nonatomic) __weak id <IGBroadcastShareFavoritesDelegate> favoritesDelegate; // @synthesize favoritesDelegate=_favoritesDelegate;
@property(nonatomic) __weak id <IGBroadcastShareAccountDelegate> accountDelegate; // @synthesize accountDelegate=_accountDelegate;
@property(nonatomic) __weak id <IGBroadcastShareLocationDelegate> locationDelegate; // @synthesize locationDelegate=_locationDelegate;
@property(nonatomic) __weak id <IGBroadcastShareTagDelegate> tagDelegate; // @synthesize tagDelegate=_tagDelegate;
@property(nonatomic) __weak UIViewController<IGAnalyticsModule> *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *shareString; // @synthesize shareString=_shareString;
- (void)mediaAttributionHScrollCellDidTapClearButton:(id)arg1;
- (void)mediaAttributionHScrollCell:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)logNonprofitSuggestionCellImpression:(id)arg1;
- (void)presentFundraiserCreationStandaloneDetailsScreenForNonprofit:(id)arg1;
- (void)presentFundraiserCreationFlowFromCreateCell;
- (void)_checkUserTagsForNonprofit:(id)arg1;
- (void)updateFundraiserFeedSharingSuggestionHScrollIfNeeded;
- (void)storeNonprofitMention:(id)arg1;
- (void)showPromoteFromSharesheetError:(id)arg1;
- (void)checkPromoteEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)setPromoteFromSharesheetToggleOn:(_Bool)arg1;
- (void)didTogglePromote:(_Bool)arg1 fromPromoteShareSheetCell:(id)arg2;
- (void)didSwitchCellValueTo:(_Bool)arg1 sender:(id)arg2;
- (void)didTapClearButton:(id)arg1;
- (void)standalonePeronsalFundraiserDidChangeForUser:(id)arg1;
- (void)updateFundraiserInfoForModel:(id)arg1;
- (void)_configureFundraiserCreateCell:(id)arg1;
- (void)_presentFundraiserClearConfirmationDialogWithMetadata:(id)arg1 collectionView:(id)arg2;
- (void)_presentFundraiserFeedCreationFlowIfAllowed:(id)arg1 withNonprofit:(id)arg2;
- (id)_baseBrandedContentEventPayload;
- (void)_logBrandedContentTagEventWithUpdatedPartners:(id)arg1;
- (void)_logBrandedContentTagRenderEvent;
- (_Bool)_requestProductTaggingPermissionsIfNecessary;
- (_Bool)_canShowCollectionsAndPromotionsToolip;
- (long long)_tagProductState;
- (void)postSettingsViewControllerAddPartnerDidCloseForm:(_Bool)arg1;
- (void)shareNuxControllerAddAFundraiserDialogDidAppear:(id)arg1;
- (void)shareNuxControllerUpcomingEventDialogDidAppear:(id)arg1;
- (void)shareToOtherAccountsTooltipDidAppear:(id)arg1;
- (void)sharedNUXControllerShareToFacebookSecondTimeExperienceTooltipDidAppear:(id)arg1;
- (void)sharedNUXControllerShareToFacebookTooltipDidAppear:(id)arg1;
- (void)sharedNUXControllerTagFBFriendsTooltipDidAppear:(id)arg1;
- (void)tagProductsFromBrandsTooltipDidAppear:(id)arg1;
- (void)tagPromotionsAndCollectionsTooltipDidAppear:(id)arg1;
- (void)tagProductsTooltipDidAppear:(id)arg1;
- (void)crossPostNUXWasDismissed:(id)arg1;
- (void)crossPostNUXDidAppear:(id)arg1;
- (void)shareServiceConfigureManager:(id)arg1 didFailLoginForService:(long long)arg2;
- (void)shareServiceConfigureManager:(id)arg1 didFinishLoginForService:(long long)arg2;
- (void)_updateSharingMetadata;
- (id)viewControllerForShareConfiguration;
- (void)shareListNeedsReloadForServiceAtIndex:(long long)arg1 userInteraction:(_Bool)arg2;
- (void)shareListNeedsFullReload;
- (void)_openAdvancedSettingsPresentAddPartnerFlowOnCompletion:(_Bool)arg1;
- (id)_generatePromoteFromSharesheetCell:(id)arg1 indexPath:(id)arg2;
- (void)cell:(id)arg1 didToggleDarkPostToProfileOn:(_Bool)arg2;
- (void)accountCell:(id)arg1 didToggleUser:(id)arg2 on:(_Bool)arg3;
- (void)brandedContentUpsellHelperDidTapReviewBrandedContentPolicies;
- (void)brandedContentUpsellHelperDidTapShareAnywayButtonWithSignals:(id)arg1 entryPoint:(unsigned long long)arg2 contentType:(unsigned long long)arg3;
- (void)brandedContentUpsellHelperDidTapShareAnywayButtonWithSignals:(id)arg1 entryPoint:(unsigned long long)arg2;
- (void)brandedContentUpsellHelperDidTapAddTagButtonWithSignals:(id)arg1;
- (void)doesCaptionMentionProducts:(_Bool)arg1;
- (void)_showCaptionWarningDialogWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)showCaptionWarningWithModel:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 timeToShowWarning:(double)arg3;
- (_Bool)_shouldShowBrandedContentPaidPartnershipWithoutBrandUpsellAlert;
- (void)showBrandedContentFeedUpsellAlert;
- (_Bool)shouldShowBrandedContentUpsellAlertWithCaption:(id)arg1;
- (void)_configureAccountCell:(id)arg1 row:(unsigned long long)arg2;
- (void)_configureAccountTrayCell:(id)arg1 isTrayOpen:(_Bool)arg2;
@property(readonly, nonatomic) struct CGRect frameForCollectionView;
@property(readonly, nonatomic) struct UIEdgeInsets preferredContentInsetsForCollectionView;
- (void)_configureLocationCell:(id)arg1 indexPath:(id)arg2;
- (void)brandedContentAddPaidPartnershipLabelToggleCell:(id)arg1 didToggleAddPaidPartnershipLabelToggle:(_Bool)arg2;
- (void)partnersViewControllerDidTapDoneButton;
- (void)partnersViewController:(id)arg1 didUpdateAgeGatingInfo:(id)arg2 geoGatingCountries:(id)arg3;
- (void)partnersViewController:(id)arg1 didUpdatePartners:(id)arg2 isPaidPartnership:(_Bool)arg3 isBCAdsPermissionOn:(_Bool)arg4;
- (void)addPartnerTaggingViewControllerDidCancelOut:(id)arg1;
- (void)addPartnerTaggingViewControllerDidRemoveUser:(id)arg1 viewController:(id)arg2;
- (void)addPartnerTaggingViewControllerDidAddUser:(id)arg1 viewController:(id)arg2;
- (void)_dismissAddPartnerSearchContainerViewController;
- (void)addPartnerSearchContainerViewControllerDidTapBackButton;
- (void)addPartnerSearchContainerViewControllerDidUpdateBrandPartners:(id)arg1;
- (void)_didSelectTagPartnerCTA;
- (void)_didSelectDismissConfirmationDialog;
- (void)_makeAlertViewControllerIfNeeded;
- (void)dismissedBrandedContentTagAccessFlowViewController:(id)arg1;
- (void)_openEligibilityLearnMoreViewController;
- (_Bool)_didTagSponsors;
- (void)_configureBrandedContentAddBrandPartnersCell:(id)arg1;
- (void)_configureBrandedContentAddPaidPartnershipLabelToggleCell:(id)arg1;
- (void)_configureBrandedContentCell:(id)arg1;
- (void)upcomingEventsShareManagerDidCreateEvent:(id)arg1 event:(id)arg2;
- (void)upcomingEventsShareManagerDidUpdateSelectedEvent:(id)arg1;
- (void)shareMusicManagerDidSelectAudio:(id)arg1;
- (void)shareMusicManagerDidFetchSuggestedAudioTitles:(id)arg1;
- (void)locationSelectionFinished:(id)arg1;
- (void)locationTokenTapped:(id)arg1;
- (void)locationListPresented:(id)arg1;
- (void)taggingVewController:(id)arg1 didUpdateTaggingViewConfiguration:(id)arg2;
- (void)taggingViewController:(id)arg1 didRemoveTag:(id)arg2;
- (void)taggingViewControllerDidOpenSearch;
- (void)_checkProductCrossPostingEligibility:(id)arg1 crossPostingEnabled:(_Bool)arg2;
- (void)_checkProductCrossMentioningEligibility;
- (void)_checkProductCrossTaggingEligibility;
- (void)taggingViewController:(id)arg1 finishedWithAssets:(id)arg2;
- (void)_logPendingProductTagWithToggleOn;
- (void)taggingViewControllerCancelled:(id)arg1;
- (void)productTagSuggestionsFetcher:(id)arg1 didFinishFetchVisualSearchTagsSuggestions:(id)arg2;
- (void)productTagSuggestionsFetcher:(id)arg1 didFinishFetchTagSuggestions:(id)arg2;
- (void)_reloadProductTagCellIfNecessary;
- (void)shoppingCrossTaggingServiceDidFetchEligibilityWithIsEligible:(_Bool)arg1 message:(id)arg2;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateResponse:(id)arg2;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateTaggingPermissionsStatus:(long long)arg2;
- (_Bool)_hasAffiliateProductsTagged;
- (_Bool)_hasPendingOrApprovedProductTagsOnly;
- (_Bool)_hasPendingProductTag;
- (_Bool)_areProductItemTagsAllApproved;
- (void)_closeTaggingViewController:(id)arg1;
- (id)_productItemMentionsSet;
- (id)_productItemTagsSet;
- (id)_userTagsSet;
- (id)_fbUserTagSet;
- (id)_generateProductTaggingViewConfiguration;
- (void)_openTagProductsViewController;
- (void)_startProductTaggingFlow;
- (void)_openTagPeopleViewControllerForMetadata:(id)arg1;
- (void)_configureTagPeopleCell:(id)arg1;
- (void)_showBrandedContentDisabledDialog;
- (void)_openBrandedContentPartnersViewControllerIsEditingMode:(_Bool)arg1;
- (void)_openAddPartnerViewController;
- (_Bool)_isCrossSharingToOtherIGAccount;
- (void)setAccountSwitcherUser:(id)arg1 shouldUpdateCollectionView:(_Bool)arg2;
- (void)accountSwitcherNonCurrentUserSelected:(_Bool)arg1;
- (void)configureWithHeaderView:(id)arg1;
- (void)_configureCaptionCell:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)_didTapMusicCell;
- (void)_didTapProductTagCell:(id)arg1;
- (void)_didTapPeopleTagCell;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)_numberOfItemsForAccountsSection;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setBottomSubmitButtonEnabled:(_Bool)arg1;
@property(readonly, nonatomic) long long shareButtonType;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (id)_assets;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (id)_initWithUserSession:(id)arg1 shareListManager:(id)arg2;
- (void)_prepareAutoPostShareToFacebook;
- (void)_resetFacebookSharingEnabled;
- (void)_generateTaggingRowModels;
- (_Bool)_isProductTaggingEnabledForCurrentPost;
- (id)initWithComposition:(id)arg1 shareListManager:(id)arg2 userSession:(id)arg3 creationSessionId:(id)arg4;
- (id)initWithMediaMetadata:(id)arg1 shareListManager:(id)arg2 userSession:(id)arg3 creationSessionId:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

