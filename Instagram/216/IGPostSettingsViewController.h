//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGAddPartnerSearchContainerViewControllerDelegate-Protocol.h"
#import "IGAddPartnerTaggingViewControllerDelegate-Protocol.h"
#import "IGBrandedAgeGeoGatingNavigationHelperDelegate-Protocol.h"
#import "IGBrandedContentCountryGatingNavigationHelperDelegate-Protocol.h"
#import "IGBrandedContentPartnersViewControllerDelegate-Protocol.h"
#import "IGBrandedContentTagAccessFlowDelegate-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGEditAltTextViewControllerDelegate-Protocol.h"
#import "IGFeedSharingBloksDelegate-Protocol.h"
#import "IGProConversionFlowPresentingDelegate-Protocol.h"
#import "IGShareToFacebookAudienceViewControllerDelegate-Protocol.h"
#import "IGSwitchViewProviderDelegate-Protocol.h"

@class IGBrandedAgeGeoGatingNavigationHelper, IGBrandedContentUpsellProfessionalAccountHelper, IGBrandedCountryGatingNavigationHelper, IGBusinessToolAlertViewController, IGMediaMetadata, IGShareListManager, IGSwitchViewProvider, IGTableLayoutSpec, IGTextRowViewProvider, IGUserSession, NSArray, NSDictionary, NSString;
@protocol IGPostSettingsViewControllerAddPartnerDelegate;

@interface IGPostSettingsViewController : IGGroupedTableViewController <IGAddPartnerSearchContainerViewControllerDelegate, IGAddPartnerTaggingViewControllerDelegate, IGBrandedAgeGeoGatingNavigationHelperDelegate, IGBrandedContentPartnersViewControllerDelegate, IGBrandedContentTagAccessFlowDelegate, IGCoreTextLinkHandler, IGEditAltTextViewControllerDelegate, IGShareToFacebookAudienceViewControllerDelegate, IGSwitchViewProviderDelegate, IGBrandedContentCountryGatingNavigationHelperDelegate, IGFeedSharingBloksDelegate, IGProConversionFlowPresentingDelegate>
{
    IGTableLayoutSpec *_layoutSpec;
    IGSwitchViewProvider *_sizingSwitchViewProvider;
    IGTextRowViewProvider *_sizingTextRowViewProvider;
    id <IGPostSettingsViewControllerAddPartnerDelegate> _addPartnerDelegate;
    _Bool _showEditAltTextOption;
    _Bool _showEnableCaptionsOption;
    NSArray *_sections;
    NSDictionary *_sectionsMap;
    IGBusinessToolAlertViewController *_alertViewController;
    _Bool _isConfiguredForShareToFacebook;
    long long _currentFacebookAudienceType;
    _Bool _showBrandedContentEntryPoint;
    IGBrandedContentUpsellProfessionalAccountHelper *_bcUpsellToProfessionalHelper;
    _Bool _showAudienceRestrictions;
    IGBrandedAgeGeoGatingNavigationHelper *_ageGeoGatingNavigationHelper;
    IGBrandedCountryGatingNavigationHelper *_countryGatingNavigationHelper;
    NSString *_selectedWarningScreenName;
    id _proConversionFlow;
    IGMediaMetadata *_mediaMetadata;
    IGUserSession *_userSession;
    IGShareListManager *_shareListManager;
    NSArray *_assets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(retain, nonatomic) id proConversionFlow; // @synthesize proConversionFlow=_proConversionFlow;
- (void)didClosePostLevelCountryGatingScreenWithGeoGatingCountries:(id)arg1;
- (void)didClosePostLevelAgeGeoGatingScreenWithAgeGatingInfo:(id)arg1;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (id)_footerTextForSection:(long long)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)dismissedBrandedContentTagAccessFlowViewController:(id)arg1;
- (void)_displayUpsellToProfessionalAccountForBrandedContent;
- (void)_displayTagABusinessPartnersToEnablePromoteToggle;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)editAltTextViewControllerCancelled:(id)arg1;
- (void)editAltTextViewController:(id)arg1 finishedWithAssets:(id)arg2;
- (_Bool)accessibilityPerformEscape;
- (void)_openEditAltTextViewController;
- (id)_editAltTextViewModel;
- (id)_captionsCellViewModel;
- (void)_configureEnableCaptionsCell:(id)arg1;
- (long long)_accessibilityRowForRowIndex:(unsigned long long)arg1;
- (void)_closeTaggingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPartnerTaggingViewControllerDidCancelOut:(id)arg1;
- (void)addPartnerTaggingViewControllerDidRemoveUser:(id)arg1 viewController:(id)arg2;
- (void)addPartnerTaggingViewControllerDidAddUser:(id)arg1 viewController:(id)arg2;
- (void)_dismissAddPartnerSearchContainerViewController;
- (void)addPartnerSearchContainerViewControllerDidTapBackButton;
- (void)addPartnerSearchContainerViewControllerDidUpdateBrandPartners:(id)arg1;
- (void)partnersViewControllerDidTapDoneButton;
- (void)partnersViewController:(id)arg1 didUpdateAgeGatingInfo:(id)arg2 geoGatingCountries:(id)arg3;
- (void)partnersViewController:(id)arg1 didUpdatePartners:(id)arg2 isPaidPartnership:(_Bool)arg3 isBCAdsPermissionOn:(_Bool)arg4;
- (void)_openGeoGatingViewController;
- (id)_geoGatingViewModel;
- (void)updateWarningScreenInfoForWarningScreenType:(id)arg1 warningScreenName:(id)arg2;
- (void)shareToFacebookAudienceViewControllerWillOptimisticallyUpdateAudienceType:(long long)arg1;
- (void)shareToFacebookAudienceDidUpdateAudienceType:(long long)arg1;
- (void)_openShareToFacebookAudienceViewController;
- (void)_openBrandedContentPartnersViewControllerIsEditingMode:(_Bool)arg1;
- (void)_didSelectTagPartnerCTA;
- (void)_didSelectDismissConfirmationDialog;
- (void)_makeAlertViewControllerIfNeeded;
- (void)_openEligibilityLearnMoreViewController;
- (void)_brandedContentAddPaidPartnershipDidToggle:(_Bool)arg1;
- (id)_addBrandPartnersViewModel;
- (id)_addPaidPartnershipViewModel;
- (void)_launchBloksAppWithBloksAppId:(id)arg1 params:(id)arg2;
- (void)_openAudienceRestrictionsLocationFlow;
- (void)_openAudienceRestrictionsAgeFlow;
- (id)_facebookAudienceViewModel;
- (id)_shareToFacebookViewModel;
- (void)_setAutoSharePostToFacebookAndLog:(_Bool)arg1;
- (void)_configureShareToFacebook;
- (void)_configureWarningScreenCell:(id)arg1;
- (id)_turnOffCommentsViewModel;
- (void)_handleAccessibilityCellSelectionForRow:(unsigned long long)arg1;
- (void)_handleBrandedContentRedesignSectionCellSelectionForRow:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 accessibilitySectionCellForIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 brandedContentRedesignSectionCellForIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)_numberOfRowsForFacebookAudienceSection;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredTabBarBehavior;
- (void)_reloadSection:(long long)arg1;
- (void)_reloadAudienceRestrictionsLocationCell;
- (void)_reloadAudienceRestrictionsAgeCell;
- (void)_reloadGeoGatingCell;
- (long long)_sectionTypeForSectionIndex:(long long)arg1;
- (void)_setTableViewSections;
- (void)presentAddPartnerFlow;
- (void)shareListNeedsReload;
- (void)shareServiceConfigureManager:(id)arg1 didFinishLoginForService:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_onBackButtonTapped;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMediaMetaData:(id)arg1 userSession:(id)arg2 shareListManager:(id)arg3 addPartnerDelegate:(id)arg4 assets:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
