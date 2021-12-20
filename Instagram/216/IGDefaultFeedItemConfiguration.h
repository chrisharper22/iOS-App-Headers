//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedItemConfigurationType-Protocol.h"

@class IGUserSession, NSString;
@protocol IGFeedTheme;

@interface IGDefaultFeedItemConfiguration : NSObject <IGFeedItemConfigurationType>
{
    IGUserSession *_userSession;
    _Bool _shouldHideLikes;
    id <IGFeedTheme> _theme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGFeedTheme> theme; // @synthesize theme=_theme;
- (_Bool)shouldShowWhyAmISeeingThisForMedia:(id)arg1;
- (_Bool)shouldShowFavoritesBadgeForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2;
- (_Bool)shouldShowCallButtons;
- (id)shoppingConfiguration;
- (unsigned long long)showUnfollowOptionTypeForMedia:(id)arg1;
- (_Bool)shouldShowReportOptionForMedia:(id)arg1;
- (_Bool)shouldShowMuteOptionForMedia:(id)arg1;
- (_Bool)shouldAutoRevealTagsForMedia:(id)arg1;
- (_Bool)useSingleFeedItemAccessibility;
- (id)followButtonLoggingProvider;
- (_Bool)enablePostDetailsViewForMedia:(id)arg1;
- (_Bool)shouldShowTopicsForMedia:(id)arg1;
- (_Bool)shouldPresentProfilePartialSheet;
- (_Bool)shouldLoadDetailsIfNeeded;
- (_Bool)enableMediaPreviewOnlyForMedia:(id)arg1;
- (id)ctaPresenterContext;
- (id)headerTheme;
- (_Bool)shouldShowCTAIfApplicableForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2;
- (_Bool)shouldHideLikersRowForMedia:(id)arg1;
- (_Bool)shouldShowAuthorInTitleForHashtagFeedItem:(id)arg1;
- (id)followControllerContextStringForMedia:(id)arg1;
- (_Bool)shouldShowLoadingIndicatorForMedia:(id)arg1;
- (_Bool)unseenIndicatorEnabledForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2;
- (unsigned long long)externalShareLocationForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2 module:(id)arg3;
- (_Bool)relatedPostsUFIButtonEnabledForMedia:(id)arg1;
- (_Bool)commentEnabledForMedia:(id)arg1;
- (_Bool)sendEnabledForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2;
- (_Bool)_canShareMedia:(id)arg1;
- (_Bool)likeEnabledForMedia:(id)arg1;
- (_Bool)saveEnabledForMedia:(id)arg1;
- (unsigned long long)carouselStartingIndex:(id)arg1;
- (_Bool)supportCarouselIndicatorAnimation;
- (_Bool)isMainFeedCarouselBumpedUnit:(id)arg1;
- (_Bool)shouldShowNotInterestedInFooter:(id)arg1;
- (_Bool)shouldRenderAsExploreInFeedUnit:(id)arg1;
- (_Bool)shouldShowInlineComposerForMedia:(id)arg1;
- (id)commentDraftDataController;
- (_Bool)favoritesButtonEnabledWhenAvailable;
- (_Bool)isPermalinkView;
- (_Bool)shouldUseProfilePhotoForTitleForMedia:(id)arg1;
- (_Bool)showVerifiedBadge;
- (id)actionListDataSourceForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2 module:(id)arg3 entryPoint:(unsigned long long)arg4 delegate:(id)arg5;
- (_Bool)shouldUseRedesignedOverflowMenuForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2;
- (id)actionSheetControllerActionsForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2 module:(id)arg3 entryPoint:(unsigned long long)arg4 delegate:(id)arg5;
- (CDStruct_8024420c)tallVideosConfiguration;
- (_Bool)shouldPopAfterDeletingFeedItem:(id)arg1;
- (_Bool)shouldShowInlineInsightsForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2;
- (id)likeRequestParametersForMedia:(id)arg1;
- (_Bool)shouldMoreSupersedeCustomizableButtonForMedia:(id)arg1;
- (_Bool)allowHidingSponsoredItem;
- (_Bool)showDismissButtonOnFeedItemHeaderForMedia:(id)arg1;
- (_Bool)allowSFPLTFromFeedItem:(id)arg1;
- (long long)hiddenCellTypeForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2;
- (CDStruct_ce671a2f)captionDisplayOptionsForMedia:(id)arg1;
- (_Bool)shouldHideFeedItem:(id)arg1 sponsoredInfoProvider:(id)arg2;
- (_Bool)shouldHideMoreCommentsButton;
- (_Bool)shouldShowPreviewCommentLikeButton;
- (_Bool)shouldHideUFIBar;
- (_Bool)shouldHideTimestamp;
- (_Bool)shouldHideLikeCount;
- (_Bool)shouldDisablePreviewComments;
- (unsigned long long)exploreContextDisplayTypeForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2;
- (_Bool)shouldHideSponsoredLabelForSponsoredItem;
- (_Bool)shouldShowSponsoredLabelOnly;
- (_Bool)allowSponsoredContextForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2;
- (_Bool)showFollowButtonRedesignForMedia:(id)arg1;
- (_Bool)showFollowButtonForMedia:(id)arg1 sponsoredInfoProvider:(id)arg2;
- (_Bool)shouldShowDisclaimerForMedia:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

