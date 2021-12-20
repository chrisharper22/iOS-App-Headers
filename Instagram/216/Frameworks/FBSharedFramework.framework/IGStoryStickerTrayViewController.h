//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGAddPartnerInStoryWebLinksCreationViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGAudienceRestrictionsStoryLinkCreationViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGAvatarEffectManagerListener-Protocol.h>
#import <FBSharedFramework/IGAvatarGridStoryViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGCountdownStickerListViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGDirectSelfieStickerCreationViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGPurchaseOptionPartnerSelectionViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGSMBDiscountStickerViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGSearchBarDelegate-Protocol.h>
#import <FBSharedFramework/IGShoppingProductTaggingFlowPresenterDelegate-Protocol.h>
#import <FBSharedFramework/IGShoppingTaggingPermissionsHelperDelegate-Protocol.h>
#import <FBSharedFramework/IGStickerGalleryViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGStickerTraySectionActionHandler-Protocol.h>
#import <FBSharedFramework/IGStoryFeedPostStickerBrowserViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryFeedPostStickerBrowserViewControllerLoggingDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryFundraiserNonprofitListViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryGIFStickerViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryLinkCreationViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMusicBrowserViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryStickerAddingRulesDataSource-Protocol.h>
#import <FBSharedFramework/IGStoryStickerDataSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryStickerSearchDataSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryStickerTrayContainerViewDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryStickerViewControllerLoggingDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryStickerViewControllerNavigationDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryStickerViewControllerSelectionDelegate-Protocol.h>
#import <FBSharedFramework/IGUpcomingEventStickerListViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class CLLocation, IGDirectionalPanGestureRecognizer, IGShoppingTaggingPermissionsHelper, IGStoryGIFStickerViewController, IGStoryMediaCompositionState, IGStoryStickerSearchDataSource, IGStoryStickerTrayContainerView, IGStoryStickerTrayStateModel, IGStoryStickerViewController, IGUserSession, NSString, UITapGestureRecognizer, UIViewController;
@protocol IGStoryStickerAddingRulesDataSource, IGStoryStickerDataSource, IGStoryStickerTrayViewControllerDelegate, IGStoryStickerTrayViewControllerStickerSelectionDelegate;

@interface IGStoryStickerTrayViewController : IGViewController <UIGestureRecognizerDelegate, IGAudienceRestrictionsStoryLinkCreationViewControllerDelegate, IGStoryFeedPostStickerBrowserViewControllerDelegate, IGAddPartnerInStoryWebLinksCreationViewControllerDelegate, IGStoryFeedPostStickerBrowserViewControllerLoggingDelegate, IGStoryStickerViewControllerNavigationDelegate, IGStoryStickerTrayContainerViewDelegate, IGStoryStickerDataSourceDelegate, IGStickerTraySectionActionHandler, IGStoryGIFStickerViewControllerDelegate, IGSearchBarDelegate, IGStoryLinkCreationViewControllerDelegate, IGStoryStickerSearchDataSourceDelegate, IGStickerGalleryViewControllerDelegate, IGStoryMusicBrowserViewControllerDelegate, IGCountdownStickerListViewControllerDelegate, IGDirectSelfieStickerCreationViewControllerDelegate, IGShoppingProductTaggingFlowPresenterDelegate, IGShoppingTaggingPermissionsHelperDelegate, IGSMBDiscountStickerViewControllerDelegate, IGStoryFundraiserNonprofitListViewControllerDelegate, IGStoryStickerAddingRulesDataSource, IGStoryStickerViewControllerSelectionDelegate, IGPurchaseOptionPartnerSelectionViewControllerDelegate, IGUpcomingEventStickerListViewControllerDelegate, IGStoryStickerViewControllerLoggingDelegate, IGAvatarGridStoryViewControllerDelegate, IGAvatarEffectManagerListener>
{
    IGStoryStickerTrayContainerView *_trayContainerView;
    IGStoryStickerViewController *_defaultStickerVC;
    long long _entryPoint;
    IGStoryGIFStickerViewController *_gifVC;
    IGStoryStickerViewController *_searchStickerVC;
    id <IGStoryStickerDataSource> _dataSource;
    IGStoryMediaCompositionState *_composition;
    IGUserSession *_userSession;
    NSString *_sessionId;
    IGDirectionalPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    double _initialY;
    IGStoryStickerTrayStateModel *_initialTrayStateModel;
    IGStoryStickerSearchDataSource *_searchDataSource;
    CLLocation *_mediaEXIFLocation;
    IGShoppingTaggingPermissionsHelper *_shoppingTaggingPermissionsHelper;
    UIViewController *_selfieStickerViewController;
    id <IGStoryStickerTrayViewControllerDelegate> _delegate;
    id <IGStoryStickerTrayViewControllerStickerSelectionDelegate> _stickerSelectionDelegate;
    id <IGStoryStickerAddingRulesDataSource> _stickerAddingRulesDataSource;
    unsigned long long _searchItemTypeOptions;
    double _topInset;
    unsigned long long _trayContentState;
    unsigned long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long trayContentState; // @synthesize trayContentState=_trayContentState;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) unsigned long long searchItemTypeOptions; // @synthesize searchItemTypeOptions=_searchItemTypeOptions;
@property(nonatomic) __weak id <IGStoryStickerAddingRulesDataSource> stickerAddingRulesDataSource; // @synthesize stickerAddingRulesDataSource=_stickerAddingRulesDataSource;
@property(nonatomic) __weak id <IGStoryStickerTrayViewControllerStickerSelectionDelegate> stickerSelectionDelegate; // @synthesize stickerSelectionDelegate=_stickerSelectionDelegate;
@property(nonatomic) __weak id <IGStoryStickerTrayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)avatarEffectManager:(id)arg1 didUpdateAvatarEffectDownloadState:(long long)arg2;
- (void)avatarEffectManager:(id)arg1 didUpdateAvatarStatus:(long long)arg2;
- (void)selfieStickerViewController:(id)arg1 didTapSelfieSticker:(id)arg2;
- (void)selfieStickerViewController:(id)arg1 didTapSendWithVideo:(id)arg2 capturedEffect:(id)arg3;
- (unsigned long long)musicStickerDisabledReason;
- (_Bool)hasHitMaxCountForStaticStickerWithModel:(id)arg1;
- (_Bool)hasInstanceOfStickerWithEnforcementType:(unsigned long long)arg1;
- (void)stickerViewController:(id)arg1 didSelectKaraokeCaptionStickerTrayModel:(id)arg2;
- (void)upcomingEventStickerListViewController:(id)arg1 didShareUpcomingEventSticker:(id)arg2;
- (void)_presentUpcomingEventStickerRestrictionHUD;
- (void)stickerViewController:(id)arg1 didSelectUpcomingEventStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectARSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectSendLikesSticker:(id)arg2;
- (void)_logAmplifyBlackBusinessStickerWithAction:(id)arg1 step:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectAmplifyBlackBusinessStickerModel:(id)arg2;
- (void)_logShareProfessionalStickerWithAction:(id)arg1 step:(id)arg2;
- (void)_showAvatarEditFlow:(id)arg1 session:(id)arg2 isEdit:(_Bool)arg3;
- (void)stickerViewController:(id)arg1 didSelectAvatars:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectSPAStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectITakeCareStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectBadgesSupporterThankYouStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectPromptStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectAudioTrack:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectShareProfessionalStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectRollCallStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectVoterRegistrationStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectPlaybackTimeDebuggingStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectQuizStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectQuestionAnswerStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectSliderStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectMentionStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectPollStickerV2Model:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectPollStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectHashtagStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectInternalStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectGalleryVideoSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectGalleryImageSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectCameraStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectLocationStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 willDismissLocationPicker:(id)arg2;
- (void)stickerViewController:(id)arg1 willPresentLocationPicker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectMemoriesSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectDateSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectTimeStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectAnimatedSticker:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectStaticSticker:(id)arg2;
- (void)stickerViewControllerDidSelectStaticSticker:(id)arg1;
- (void)_stickerViewControllerDidSelectStaticStickerHelper:(id)arg1 exportModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectEmoji:(id)arg2 emojiView:(id)arg3;
- (void)stickerViewControllerDidSelectPollMessage:(id)arg1;
- (void)stickerViewControllerDidSelectSelfieSticker:(id)arg1;
- (void)stickerViewControllerDidSelectLike:(id)arg1;
- (void)stickerViewController:(id)arg1 logStickerTapWithId:(id)arg2;
- (void)stickerViewController:(id)arg1 logStickerImpressionWithId:(id)arg2;
- (long long)_impressionSourceForStickerVC:(id)arg1;
- (long long)_impressionTapSourceForStickerVC:(id)arg1;
- (void)productTaggingFlowPresenter:(id)arg1 didSelectProductCollection:(id)arg2 merchantID:(id)arg3 productMerchantIDs:(id)arg4 sessionID:(id)arg5;
- (void)productTaggingFlowPresenter:(id)arg1 didSelectTaggedProductItems:(id)arg2 merchantID:(id)arg3 productMerchantIDs:(id)arg4 sessionID:(id)arg5 pinnedProducts:(id)arg6 productSelectionBehavior:(id)arg7;
- (void)productTaggingFlowPresenterDidCancel:(id)arg1 sessionID:(id)arg2;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateResponse:(id)arg2;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateTaggingPermissionsStatus:(long long)arg2;
- (void)_handlePurchaseOptionBlockActionWithSMBSupportStickerType:(long long)arg1;
- (_Bool)_doesMusicStickerAlreadyExist;
- (void)_cancelSelfieSticker;
- (id)_sponsorPartners;
- (_Bool)_requestTaggingPermissionsForSponsorIfNecessary;
- (void)_startProductTaggingFlow;
- (id)_currentStickerVC;
- (void)_fetchStaticStickersWithLocationPermissionIfPossible;
- (void)_updateBottomInsetForStickerVC:(id)arg1;
- (void)_setUpGestures;
- (double)_initialPaddingForContainerView;
- (id)_tooltipConfigs;
- (id)_stickerViewControllerWithItems:(id)arg1 tabType:(long long)arg2;
- (void)_showGalleryStickerViewController;
- (void)_showMusicSearchViewController:(long long)arg1;
- (void)_showGIFStickerViewControllerWithSearchQuery:(id)arg1;
- (void)_scrollToLastSeenSticker;
- (void)_fadeOutFullScreenViewController:(id)arg1;
- (void)_fadeInFullScreenViewController:(id)arg1 forTrayContentState:(unsigned long long)arg2;
- (void)stickerSearchDataSource:(id)arg1 didLoadItems:(id)arg2 forText:(id)arg3;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)_searchCancelTapped:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)storyStickerDataSource:(id)arg1 didUpdateTimeSticker:(id)arg2;
- (void)storyStickerDataSource:(id)arg1 didLoadItems:(id)arg2 versionID:(id)arg3;
- (void)musicBrowserViewController:(id)arg1 didTapAudioTrack:(id)arg2;
- (void)musicBrowserViewControllerDidCancel:(id)arg1;
- (void)stickerTrayContainerView:(id)arg1 didChangePageControl:(id)arg2;
- (void)stickerTrayContainerView:(id)arg1 didTapChevronButton:(id)arg2;
- (void)stickerGalleryViewControllerDidTapCancel:(id)arg1;
- (void)storyGIFStickerViewController:(id)arg1 didSelectAnimatedSticker:(id)arg2;
- (void)storyGIFStickerViewControllerDidCancel:(id)arg1;
- (void)stickerViewController:(id)arg1 didSelectExpressingLoveStickerTrayModel:(id)arg2;
- (void)_showStickerMaxLimitToast;
- (void)fundraiserNonprofitListViewController:(id)arg1 didSelectStandaloneFundraiser:(id)arg2;
- (void)fundraiserNonprofitListViewController:(id)arg1 didSelectNonprofit:(id)arg2;
- (void)fundraiserNonprofitListViewControllerDidTapCancel:(id)arg1;
- (void)stickerViewController:(id)arg1 didSelectFundraiserStickerTrayModel:(id)arg2;
- (void)partnerSelectionViewControllerDidAddGetQuotePurchaseOption:(id)arg1;
- (void)partnerSelectionViewControllerDidAddDonationPurchaseOption:(id)arg1;
- (void)partnerSelectionViewControllerDidAddDeliveryPurchaseOption:(id)arg1;
- (void)partnerSelectionViewControllerDidAddGiftCardPurchaseOption:(id)arg1;
- (void)_didSelectSMBSupportSticker:(long long)arg1;
- (void)_logSMBSticker:(id)arg1 serviceType:(long long)arg2 action:(id)arg3 step:(id)arg4;
- (void)_logSMBStickerImpressionWithId:(id)arg1;
- (void)removeDiscount;
- (void)createDiscount:(id)arg1;
- (void)stickerViewController:(id)arg1 didSelectSMBGetQuoteStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectSMBDiscountStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectSMBSupportDeliveryStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectSMBSupportStickerTrayModel:(id)arg2;
- (void)countdownStickerListViewController:(id)arg1 didDeleteCountdownSticker:(id)arg2;
- (void)countdownStickerListViewController:(id)arg1 didReshareCountdownSticker:(id)arg2;
- (void)countdownStickerListViewControllerDidTapCreateNewList:(id)arg1;
- (void)_presentSMBSupportStickerRestrictionHUD;
- (void)_presentCountdownStickerRestrictionHUD;
- (void)stickerViewController:(id)arg1 didSelectCountdownStickerTrayModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectCountdownHomeWithStickerTrayModel:(id)arg2;
- (void)feedPostStickerBrowserViewController:(id)arg1 didDismissNuxWithIdentifier:(id)arg2;
- (void)feedPostStickerBrowserViewController:(id)arg1 didShowNuxWithIdentifier:(id)arg2;
- (void)feedPostStickerBrowserViewController:(id)arg1 logSelectMediaWithStickerId:(id)arg2 mediaId:(id)arg3 sourceMediaGroup:(long long)arg4 tabId:(id)arg5;
- (void)feedPostStickerBrowserViewController:(id)arg1 didSelectFeedPostSticker:(id)arg2;
- (void)feedPostStickerBrowserViewControllerDidCancel:(id)arg1;
- (void)addPartnerWebLinksDidUpdateBrandedContentTags:(id)arg1 isPaidPartnership:(_Bool)arg2 allowedPartnerToBoost:(_Bool)arg3;
- (void)addPartnerWebLinksDidUpdateAllowPartnerToBoost:(_Bool)arg1;
- (void)addPartnerWebLinksDidRemoveSelectedSponsorPartner:(id)arg1;
- (void)addPartnerWebLinksDidAddSelectedSponsorPartner:(id)arg1 allowPartnerToBoost:(_Bool)arg2;
- (void)storyLinkCreationViewController:(id)arg1 didSelectAgeGatingInfo:(id)arg2 geoGatingCountries:(id)arg3;
- (void)storyLinkCreationViewControllerVerifyPaidBrandedContentStoryForInteractiveElements:(id)arg1 validationCompleteHandler:(CDUnknownBlockType)arg2;
- (void)storyLinkCreationViewControllerDidCloseForm:(id)arg1 hasChanges:(_Bool)arg2 didAllowSponsorPartnerToBoost:(_Bool)arg3 mediaId:(id)arg4 validatedUrl:(id)arg5 businessTransactionLinkAdded:(_Bool)arg6;
- (id)storyLinkCreationViewController:(id)arg1 didSelectStoryLink:(id)arg2;
- (void)avatarStoryGrid:(id)arg1 willHitImpression:(id)arg2;
- (void)avatarStoryGridDidTapSelect:(id)arg1 avatar:(id)arg2 staticSticker:(id)arg3;
- (void)avatarStoryGridDidTapEdit:(id)arg1;
- (void)avatarStoryGridDidTapClose:(id)arg1;
- (void)_presentLinkStickerRestrictionHUD;
- (void)stickerViewController:(id)arg1 didSelectLinkStickerTrayModel:(id)arg2;
- (void)stickerViewControllerDidSelectFeedPostStickerModel:(id)arg1;
- (void)stickerViewController:(id)arg1 didSelectMusicStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectMultiProductStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectProductStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectGalleryStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 didSelectGIFSearchStickerModel:(id)arg2;
- (void)stickerViewController:(id)arg1 wantsDismissAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)storyStickerTrayHandleMusicBrowseAction;
- (void)storyStickerTrayHandleMusicAction;
- (void)storyStickerTrayHandleGiphyAction;
- (void)_presentAlertHUDWithText:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_onLocationPermissionDenied;
- (void)_onLocationPermissionAuthorized;
- (void)_handleTap:(id)arg1;
- (void)_handlePan:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)accessibilityPerformEscape;
- (double)trayContainerViewOriginYWithState:(unsigned long long)arg1;
- (void)_setState:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 stickerDataSource:(id)arg2 composition:(id)arg3 initialTrayStateModel:(id)arg4 mediaEXIFLocation:(id)arg5 entryPoint:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
