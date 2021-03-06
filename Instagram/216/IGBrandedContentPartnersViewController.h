//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGAddPartnerSearchContainerViewControllerDelegate-Protocol.h"
#import "IGBrandedAgeGeoGatingNavigationHelperDelegate-Protocol.h"
#import "IGBrandedContentCountryGatingNavigationHelperDelegate-Protocol.h"
#import "IGBrandedContentPartnerCellDelegate-Protocol.h"
#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGToggleTableViewCellDelegate-Protocol.h"

@class IGBrandedAgeGeoGatingNavigationHelper, IGBrandedContentFlowMediaInfo, IGBrandedContentPartnersLoggerContext, IGBrandedCountryGatingNavigationHelper, IGGroupedTableViewFooterView, IGUserSession, NSArray, NSDictionary, NSMutableArray, NSString;
@protocol IGBrandedContentPartnersViewControllerDelegate;

@interface IGBrandedContentPartnersViewController : IGGroupedTableViewController <IGBrandedContentPartnerCellDelegate, IGBrandedAgeGeoGatingNavigationHelperDelegate, IGAddPartnerSearchContainerViewControllerDelegate, IGBrandedContentCountryGatingNavigationHelperDelegate, IGToggleTableViewCellDelegate, IGCoreTextLinkHandler>
{
    IGUserSession *_userSession;
    IGBrandedContentFlowMediaInfo *_flowMediaInfo;
    long long _mediaType;
    NSArray *_partners;
    NSMutableArray *_modifiedPartners;
    IGGroupedTableViewFooterView *_tagBusinessPartnerSectionFooterView;
    IGGroupedTableViewFooterView *_promotionToggleSectionFooterView;
    IGGroupedTableViewFooterView *_ageGatingSectionFooterView;
    IGGroupedTableViewFooterView *_countryGatingSectionFooterView;
    NSString *_priorModule;
    IGBrandedAgeGeoGatingNavigationHelper *_ageGeoGatingNavigationHelper;
    IGBrandedCountryGatingNavigationHelper *_countryGatingNavigationHelper;
    NSDictionary *_unsavedMediaGatingInfo;
    NSArray *_unsavedGeoGatingCountries;
    _Bool _isBCAdsToggleDefaultOnEnabled;
    _Bool _isBCAdsPermissionOn;
    _Bool _shouldShowCountryGatingSection;
    _Bool _isAddPaidPartnershipLabelToggleOn;
    _Bool _isEditingStoryWithTappableElements;
    IGBrandedContentPartnersLoggerContext *_logger;
    _Bool _hasMinimumAgeSettings;
    NSMutableArray *_minimumAgeKeys;
    NSMutableArray *_minimumAgeValues;
    id <IGBrandedContentPartnersViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBrandedContentPartnersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_redesignTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)_redesignTableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)_brandPartnersSectionFooterView;
- (id)_redesignTableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)_redesignTableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)_redesignTableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)_onlyShowAddPaidPartnershipLabel;
- (_Bool)_shouldShowDisclosureRedesignPromotionSection;
- (_Bool)_shouldShowDisclosureRedesignAgeGatingSection;
- (void)didClosePostLevelCountryGatingScreenWithGeoGatingCountries:(id)arg1;
- (void)didClosePostLevelAgeGeoGatingScreenWithAgeGatingInfo:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_validateBrandedContentStoryForPromotionWithToggleCell:(id)arg1;
- (void)_displayTagABusinessPartnersToEnablePromoteToggle;
- (void)_promotionToggleCell:(id)arg1 didSwitchValueTo:(_Bool)arg2;
- (void)toggleTableViewCell:(id)arg1 reuseIdentifier:(id)arg2 didSwitchValueTo:(_Bool)arg3;
- (void)_dismissAddPartnerSearchContainerViewController;
- (void)addPartnerSearchContainerViewControllerDidTapBackButton;
- (void)addPartnerSearchContainerViewControllerDidUpdateBrandPartners:(id)arg1;
- (void)brandedContentPartnerCell:(id)arg1 didRemoveUser:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_disclosureRedesignTableView:(id)arg1 tagPartnerSectionCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCancelModal;
- (void)_configureAddPaidPartnershipLabelToggleCell:(id)arg1 withText:(id)arg2 isEnabled:(_Bool)arg3;
- (void)_configureToggleCell:(id)arg1 withText:(id)arg2 isEnabled:(_Bool)arg3;
- (id)_footerViewWithAnnotatedString:(id)arg1;
- (void)_presentAddBrandPartnersViewController;
- (void)_onDoneTapped;
- (void)_parseMinimumAgeSettingsWithEditedPost:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 flowMediaInfo:(id)arg2 priorModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

