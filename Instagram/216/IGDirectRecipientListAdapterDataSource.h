//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectRecipientListAdapterDataSourceHandling-Protocol.h"

@class IGDirectRecentRecipientsManager, IGDirectRecipientListSectionViewMoreControl, IGDirectRecipientListViewConfiguration, IGDirectRecipientOneTapStateTracker, IGDirectRecipientService, IGDirectShareSheetOneTapButtonTextGrouping, IGLabelItemConfiguration, IGMedia, IGShareSheetImprovementExperimentationConfig, IGShareToStoryValue, IGUserSession, NSArray, NSMutableSet, NSOrderedSet, NSString, UIColor;
@protocol IGUserFeatureSets;

@interface IGDirectRecipientListAdapterDataSource : NSObject <IGDirectRecipientListAdapterDataSourceHandling>
{
    id <IGUserFeatureSets> _featureSets;
    IGUserSession *_userSession;
    IGDirectRecipientListViewConfiguration *_configuration;
    IGShareToStoryValue *_reshareToStoryValue;
    NSString *_module;
    IGDirectRecentRecipientsManager *_recentRecipientsManager;
    IGDirectRecipientService *_recipientService;
    _Bool _canSelectOnlyOneShareTarget;
    IGDirectRecipientListSectionViewMoreControl *_suggestedViewMoreControl;
    IGDirectRecipientListSectionViewMoreControl *_activeNowViewMoreControl;
    IGDirectRecipientListSectionViewMoreControl *_groupsViewMoreControl;
    IGDirectRecipientListSectionViewMoreControl *_recentsViewMoreControl;
    IGDirectRecipientListSectionViewMoreControl *_groupStorySearchResultsViewMoreControl;
    NSArray *_suggestedRecipients;
    NSArray *_groupRecipients;
    NSArray *_currentInboxRecipients;
    NSArray *_currentInboxRecipientsRaw;
    NSArray *_alphabeticalRecipients;
    NSMutableSet *_expandedRecipients;
    NSOrderedSet *_searchRecipients;
    UIColor *_defaultBackgroundColor;
    IGLabelItemConfiguration *_warningLabelConfig;
    IGLabelItemConfiguration *_viewMoreLabelConfig;
    _Bool _hasSharedToStory;
    _Bool _isInGlobalSearch;
    _Bool _hasDismissedReshareStickerBanner;
    IGShareSheetImprovementExperimentationConfig *_shareSheetImprovementConfig;
    _Bool _directSearchIsFailed;
    NSArray *_selectedHighlightReelTitles;
    IGMedia *_media;
    IGDirectRecipientOneTapStateTracker *_oneTapStateTracker;
    IGDirectShareSheetOneTapButtonTextGrouping *_oneTapTitleTexts;
    IGDirectShareSheetOneTapButtonTextGrouping *_oneTapAccessibilityTexts;
}

+ (id)_recipientsToDisplayForSuggestedSectionFromSuggestedRecipients:(id)arg1 createdRecipients:(id)arg2 recipientsFromSearch:(id)arg3 recentDirectThreadRecipients:(id)arg4 recipientsToDedupe:(id)arg5 shouldIncludeFacebookThread:(_Bool)arg6 shouldIncludeFacebookUser:(_Bool)arg7;
+ (id)_reshareToStorySectionWithCurrentUserSession:(id)arg1 titleViewLayoutSpec:(id)arg2 reshareToStoryValue:(id)arg3 hasDismissedReshareStickerBannerInCurrentSession:(_Bool)arg4 analyticsModule:(id)arg5;
+ (id)_searchSectionWithConfig:(id)arg1 shouldHideRightButton:(_Bool)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectShareSheetOneTapButtonTextGrouping *oneTapAccessibilityTexts; // @synthesize oneTapAccessibilityTexts=_oneTapAccessibilityTexts;
@property(readonly, nonatomic) IGDirectShareSheetOneTapButtonTextGrouping *oneTapTitleTexts; // @synthesize oneTapTitleTexts=_oneTapTitleTexts;
@property(readonly, nonatomic) IGDirectRecipientOneTapStateTracker *oneTapStateTracker; // @synthesize oneTapStateTracker=_oneTapStateTracker;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) NSArray *suggestedRecipients; // @synthesize suggestedRecipients=_suggestedRecipients;
@property(retain, nonatomic) NSArray *selectedHighlightReelTitles; // @synthesize selectedHighlightReelTitles=_selectedHighlightReelTitles;
- (void)setHasDismissedShareToStoryWithStickerInfoCell:(_Bool)arg1 informBannerType:(unsigned long long)arg2;
- (void)setIsInGlobalSearch:(_Bool)arg1;
- (id)_directRecipientCellViewModelsWithConfiguration:(id)arg1 featureSets:(id)arg2 recipients:(id)arg3 selectedRecipients:(id)arg4 expandedRecipients:(id)arg5 dynamicCellHeightsEnabled:(_Bool)arg6 recipientCellViewModelLayoutSpec:(id)arg7 rowBackgroundColor:(id)arg8 viewMoreControl:(id)arg9 oneTapTitleTexts:(id)arg10 oneTapAccessibilityTexts:(id)arg11 oneTapTitlesToSizeToForEntireList:(id)arg12 presenceManager:(id)arg13 nicknameManager:(id)arg14 section:(long long)arg15 analyticsModule:(id)arg16 currentUser:(id)arg17 shouldIncludeFacebookRecipient:(_Bool)arg18 startAbsPosition:(unsigned long long)arg19 recipientListState:(long long)arg20 interopFeatureGating:(id)arg21 currentInboxRecipients:(id)arg22;
- (id)_sendAgainItemWithRecipientCellViewModelLayoutSpec:(id)arg1 recipients:(id)arg2 isExpanded:(_Bool)arg3 oneTapTitlesToSizeToForEntireList:(id)arg4;
- (id)_externalShareItemsWithConfiguration:(id)arg1 currentUser:(id)arg2 facebookHelper:(id)arg3 featureSetProvider:(id)arg4 serviceTypes:(id)arg5 selectedServiceTypes:(id)arg6 storySendTarget:(long long)arg7 hasSharedToStory:(_Bool)arg8 rowBackgroundColor:(id)arg9 oneTapTitlesToSizeToForEntireList:(id)arg10 willShareToFbWithYourStory:(_Bool)arg11;
- (id)_oneTapViewModelForRecipient:(id)arg1 oneTapSendingEnabled:(_Bool)arg2 previouslyCreatedViewModels:(id)arg3 oneTapTitleTexts:(id)arg4 oneTapAccessibilityTexts:(id)arg5 oneTapTitlesToSizeToForEntireList:(id)arg6;
- (id)_recipientCellViewModelForRecipient:(id)arg1 inSection:(long long)arg2 configuration:(id)arg3 featureSets:(id)arg4 selectedRecipients:(id)arg5 expandedRecipients:(id)arg6 previouslyCreatedViewModels:(id)arg7 dynamicCellHeightsEnabled:(_Bool)arg8 recipientCellViewModelLayoutSpec:(id)arg9 rowBackgroundColor:(id)arg10 oneTapTitleTexts:(id)arg11 oneTapAccessibilityTexts:(id)arg12 oneTapTitlesToSizeToForEntireList:(id)arg13 presenceManager:(id)arg14 nicknameManager:(id)arg15 analyticsModule:(id)arg16 currentUser:(id)arg17 positionInSection:(id)arg18 absolutePosition:(id)arg19 queryString:(id)arg20 recipientListState:(long long)arg21 interopFeatureGating:(id)arg22 currentInboxRecipients:(id)arg23;
- (id)_generateAlphabeticalRecipients;
- (id)_topUsersForLimit:(long long)arg1;
- (id)_viewMoreControlForSection:(long long)arg1;
- (id)_sectionTitleConfigForExternalSharingGivenSelectedSendTarget:(long long)arg1;
- (id)_recipientViewModelSectionizedArrayForRecipientSet:(id)arg1 recipientsToViewModelSectionMap:(id)arg2 selectedRecipients:(id)arg3 oneTapTitleTexts:(id)arg4 oneTapAccessibilityTexts:(id)arg5 queryString:(id)arg6 recipientListState:(long long)arg7 startingGlobalIndex:(long long)arg8;
- (id)_loadingSpinnerListWithTitle:(id)arg1;
- (void)_generateCurrentInboxRecipientsFromThreads:(id)arg1;
- (void)_loadInboxRecipientsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupAlphabeticalRecipients;
- (void)_updateSuggestedAndGroupRecipientsFromDefaultRecipients:(id)arg1;
- (id)_alphabeticalSectionWithConfiguration:(id)arg1 featureSets:(id)arg2 suggestedRecipients:(id)arg3 selectedRecipients:(id)arg4 recipientsToExclude:(id)arg5 expandedRecipients:(id)arg6 dynamicCellHeightsEnabled:(_Bool)arg7 recipientCellViewModelLayoutSpec:(id)arg8 itemsInShareSheetSoFar:(id)arg9 rowBackgroundColor:(id)arg10 titleConfig:(id)arg11 oneTapTitleTexts:(id)arg12 oneTapAccessibilityTexts:(id)arg13 oneTapTitlesToSizeToForEntireList:(id)arg14 presenceManager:(id)arg15 nicknameManager:(id)arg16 analyticsModule:(id)arg17 currentUser:(id)arg18 startAbsPosition:(unsigned long long)arg19 recipientListState:(long long)arg20 interopFeatureGating:(id)arg21 currentInboxRecipients:(id)arg22;
- (id)_recentSectionWithWithConfiguration:(id)arg1 featureSets:(id)arg2 currentInboxRecipients:(id)arg3 selectedRecipients:(id)arg4 expandedRecipients:(id)arg5 dynamicCellHeightsEnabled:(_Bool)arg6 recipientCellViewModelLayoutSpec:(id)arg7 rowBackgroundColor:(id)arg8 titleConfig:(id)arg9 viewMoreControl:(id)arg10 viewMoreLabelConfiguration:(id)arg11 oneTapTitleTexts:(id)arg12 oneTapAccessibilityTexts:(id)arg13 oneTapTitlesToSizeToForEntireList:(id)arg14 presenceManager:(id)arg15 nicknameManager:(id)arg16 analyticsModule:(id)arg17 currentUser:(id)arg18 startAbsPosition:(unsigned long long)arg19 recipientListState:(long long)arg20 interopFeatureGating:(id)arg21;
- (id)_groupsSectionFromGroupRecipients:(id)arg1 configuration:(id)arg2 featureSets:(id)arg3 selectedRecipients:(id)arg4 expandedRecipients:(id)arg5 itemsInShareSheetSoFar:(id)arg6 dynamicCellHeightsEnabled:(_Bool)arg7 recipientCellViewModelLayoutSpec:(id)arg8 rowBackgroundColor:(id)arg9 titleConfig:(id)arg10 viewMoreControl:(id)arg11 viewMoreLabelConfiguration:(id)arg12 oneTapTitleTexts:(id)arg13 oneTapAccessibilityTexts:(id)arg14 oneTapTitlesToSizeToForEntireList:(id)arg15 presenceManager:(id)arg16 nicknameManager:(id)arg17 analyticsModule:(id)arg18 currentUser:(id)arg19 startAbsPosition:(unsigned long long)arg20 recipientListState:(long long)arg21 interopFeatureGating:(id)arg22 currentInboxRecipients:(id)arg23;
- (id)_notFollowingSectionWithConfiguration:(id)arg1 featureSets:(id)arg2 notFollowingRecipients:(id)arg3 expandedRecipients:(id)arg4 selectedRecipients:(id)arg5 dynamicCellHeightsEnabled:(_Bool)arg6 recipientCellViewModelLayoutSpec:(id)arg7 rowBackgroundColor:(id)arg8 showTopSpacer:(_Bool)arg9 viewMoreControl:(id)arg10 viewMoreLabelConfiguration:(id)arg11 titleConfig:(id)arg12 oneTapTitleTexts:(id)arg13 oneTapAccessibilityTexts:(id)arg14 oneTapTitlesToSizeToForEntireList:(id)arg15 recentRecipientsManager:(id)arg16 presenceManager:(id)arg17 nicknameManager:(id)arg18 analyticsModule:(id)arg19 currentUser:(id)arg20 shouldIncludeFacebookRecipient:(_Bool)arg21 startAbsPosition:(unsigned long long)arg22 recipientListState:(long long)arg23 interopFeatureGating:(id)arg24 currentInboxRecipients:(id)arg25;
- (id)_fromSearchSectionWithConfiguration:(id)arg1 featureSets:(id)arg2 suggestedRecipients:(id)arg3 expandedRecipients:(id)arg4 selectedRecipients:(id)arg5 dynamicCellHeightsEnabled:(_Bool)arg6 recipientCellViewModelLayoutSpec:(id)arg7 rowBackgroundColor:(id)arg8 viewMoreControl:(id)arg9 viewMoreLabelConfiguration:(id)arg10 titleConfig:(id)arg11 oneTapTitleTexts:(id)arg12 oneTapAccessibilityTexts:(id)arg13 oneTapTitlesToSizeToForEntireList:(id)arg14 recentRecipientsManager:(id)arg15 presenceManager:(id)arg16 nicknameManager:(id)arg17 analyticsModule:(id)arg18 currentUser:(id)arg19 shouldIncludeFacebookRecipient:(_Bool)arg20 startAbsPosition:(unsigned long long)arg21 recipientListState:(long long)arg22 interopFeatureGating:(id)arg23 currentInboxRecipients:(id)arg24;
- (id)_suggestedSectionWithConfiguration:(id)arg1 featureSets:(id)arg2 suggestedRecipients:(id)arg3 numberOfCreatedRecipients:(long long)arg4 expandedRecipients:(id)arg5 blastListRecipients:(id)arg6 selectedRecipients:(id)arg7 dynamicCellHeightsEnabled:(_Bool)arg8 recipientCellViewModelLayoutSpec:(id)arg9 rowBackgroundColor:(id)arg10 viewMoreControl:(id)arg11 viewMoreLabelConfiguration:(id)arg12 titleConfig:(id)arg13 shouldShowHeader:(_Bool)arg14 oneTapTitleTexts:(id)arg15 oneTapAccessibilityTexts:(id)arg16 oneTapTitlesToSizeToForEntireList:(id)arg17 recentRecipientsManager:(id)arg18 presenceManager:(id)arg19 nicknameManager:(id)arg20 analyticsModule:(id)arg21 currentUser:(id)arg22 shouldIncludeFacebookRecipient:(_Bool)arg23 startAbsPosition:(unsigned long long)arg24 recipientListState:(long long)arg25 interopFeatureGating:(id)arg26 currentInboxRecipients:(id)arg27 moreSuggestion:(_Bool)arg28;
- (id)_sendToSectionWithConfiguration:(id)arg1 featureSets:(id)arg2 recipient:(id)arg3 selectedRecipients:(id)arg4 expandedRecipients:(id)arg5 dynamicCellHeightsEnabled:(_Bool)arg6 titleItemLabelConfiguration:(id)arg7 recipientCellViewModelLayoutSpec:(id)arg8 rowBackgroundColor:(id)arg9 oneTapTitleTexts:(id)arg10 oneTapAccessibilityTexts:(id)arg11 oneTapTitlesToSizeToForEntireList:(id)arg12 presenceManager:(id)arg13 nicknameManager:(id)arg14 analyticsModule:(id)arg15 currentUser:(id)arg16 shouldIncludeFacebookRecipient:(_Bool)arg17 startAbsPosition:(unsigned long long)arg18 recipientListState:(long long)arg19 interopFeatureGating:(id)arg20 currentInboxRecipients:(id)arg21;
- (id)_shareSectionWithConfiguration:(id)arg1 currentUser:(id)arg2 facebookHelper:(id)arg3 featureSetProvider:(id)arg4 externalShareServices:(id)arg5 selectedExternalShareServices:(id)arg6 storySendTarget:(long long)arg7 hasSharedToStory:(_Bool)arg8 rowBackgroundColor:(id)arg9 titleConfig:(id)arg10 oneTapTitlesToSizeToForEntireList:(id)arg11 selectedHighlightReelTitles:(id)arg12 willShareToFbWithYourStory:(_Bool)arg13;
- (id)_recentDirectThreadRecipients;
- (id)_replyToAuthorSectionWithRecipient:(id)arg1 selectedRecipients:(id)arg2 recipientCellViewModelLayoutSpec:(id)arg3 startAbsPosition:(unsigned long long)arg4 recipientListState:(long long)arg5 sectionType:(long long)arg6;
- (id)_storyAndFavSectionWithConfiguration:(id)arg1 userSession:(id)arg2 selectedTargets:(id)arg3 rowBackgroundColor:(id)arg4 titleConfig:(id)arg5 oneTapTitlesToSizeToForEntireList:(id)arg6 canShareToFbWithYourStory:(_Bool)arg7 willShareToFbWithYourStory:(_Bool)arg8 shareToFbWithYourStoryDisclaimer:(id)arg9 analyticsModule:(id)arg10;
- (id)_facebookFriendsSectionWithConfiguration:(id)arg1 featureSets:(id)arg2 recipients:(id)arg3 expandedRecipients:(id)arg4 selectedRecipients:(id)arg5 dynamicCellHeightsEnabled:(_Bool)arg6 recipientCellViewModelLayoutSpec:(id)arg7 titleConfig:(id)arg8 oneTapTitleTexts:(id)arg9 oneTapAccessibilityTexts:(id)arg10 presenceManager:(id)arg11 nicknameManager:(id)arg12 analyticsModule:(id)arg13 currentUser:(id)arg14 startAbsPoition:(unsigned long long)arg15 recipientListState:(long long)arg16 interopFeatureGating:(id)arg17 currentInboxRecipients:(id)arg18 nuxConfig:(id)arg19;
- (void)expandRecipient:(id)arg1 expanded:(_Bool)arg2;
- (void)incrementViewMoreForSection:(long long)arg1;
- (id)searchNullStateListForCreatedRecipients:(id)arg1 recipientsFromSearch:(id)arg2 selectedRecipients:(id)arg3 excludedRecipients:(id)arg4 oneTapTitleTexts:(id)arg5 oneTapAccessibilityTexts:(id)arg6 recipientListState:(long long)arg7 nuxConfig:(id)arg8;
- (id)_sectionedViewModelsFromConnectionsAndIGFollowingUserRecipients:(id)arg1 igNonFollowingUserRecipients:(id)arg2 facebookFriendsRecipients:(id)arg3 facebookNonFriendsRecipients:(id)arg4 recipientsToViewModelSectionMap:(id)arg5 selectedRecipients:(id)arg6 oneTapTitleTexts:(id)arg7 oneTapAccessibilityTexts:(id)arg8 queryString:(id)arg9 recipientListState:(long long)arg10 shouldShowMessageSectionTitle:(_Bool)arg11 startingIndex:(long long)arg12 nuxConfig:(id)arg13;
- (id)_viewModelsFromSectionizedRecipients:(id)arg1 selectedRecipients:(id)arg2 oneTapTitleTexts:(id)arg3 oneTapAccessibilityTexts:(id)arg4 queryString:(id)arg5 recipientListState:(long long)arg6 shouldShowMessageSectionTitle:(_Bool)arg7 startingIndex:(long long)arg8 nuxConfig:(id)arg9;
- (id)searchResultListForSearchRecipients:(id)arg1 recipientListIsFilteredByServer:(_Bool)arg2 recipientListIsLocal:(_Bool)arg3 isPrivateSearch:(_Bool)arg4 selectedRecipients:(id)arg5 oneTapTitleTexts:(id)arg6 oneTapAccessibilityTexts:(id)arg7 queryString:(id)arg8 recipientListState:(long long)arg9 nuxConfig:(id)arg10 selectedTargets:(id)arg11;
- (id)searchRequestList;
- (id)defaultListForStorySendTarget:(long long)arg1 createdRecipients:(id)arg2 recipientsFromSearch:(id)arg3 selectedRecipients:(id)arg4 sponsoredInfoProvider:(id)arg5 initialIntendedRecipient:(id)arg6 externalShareServices:(id)arg7 selectedExternalShareServices:(id)arg8 recipientsToExcludeFromRecents:(id)arg9 excludedRecipients:(id)arg10 canShareToFbWithYourStory:(_Bool)arg11 willShareToFbWithYourStory:(_Bool)arg12 shareToFbWithYourStoryDisclaimer:(id)arg13 selectedTargets:(id)arg14 recipientsByFollowingStatus:(id)arg15 recipientListState:(long long)arg16 nuxConfig:(id)arg17;
- (void)setDirectSearchIsFailed:(_Bool)arg1;
- (id)_itemAuthor;
- (_Bool)_shouldEnableReplyToAuthorWithSponsoredInfoProvider:(id)arg1;
- (_Bool)_shouldEnableReplyToAuthorForProductReshare;
- (_Bool)hasReceivedInboxRecipients;
- (void)loadRecipientsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFeatureSets:(id)arg1 userSession:(id)arg2 configuration:(id)arg3 reshareToStoryValue:(id)arg4 recentRecipientsManager:(id)arg5 recipientService:(id)arg6 media:(id)arg7 oneTapStateTracker:(id)arg8 oneTapTitleTexts:(id)arg9 oneTapAccessibilityTexts:(id)arg10 canSelectOnlyOneShareTarget:(_Bool)arg11 module:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
