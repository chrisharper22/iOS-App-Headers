//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFundraiserDonationCheckoutSheetViewControllerDelegate-Protocol.h"
#import "IGProfileActionBarViewDelegate-Protocol.h"
#import "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"

@class IG4BLogger, IGBloksAsyncActionHandler, IGFollowAttributionModel, IGProfileActionBarViewModel, IGSessionTracker, IGUser, IGUserSession, NSString;
@protocol IGFeaturedAccountsEditorDelegate, IGFollowControllerLoggingProvider, IGProfileActionBarSectionControllerDelegate;

@interface IGProfileActionBarSectionController : IGListSectionController <IGFundraiserDonationCheckoutSheetViewControllerDelegate, IGProfileActionBarViewDelegate, IGStoryPostCaptureEditingViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGUser *_user;
    NSString *_analyticsModule;
    IGProfileActionBarViewModel *_model;
    NSString *_mediaAttribution;
    NSString *_trackingToken;
    IG4BLogger *_businessLogger;
    Class _contactActionHandlerClass;
    IGFollowAttributionModel *_followAttribution;
    id <IGFollowControllerLoggingProvider> _followControllerLogger;
    id <IGProfileActionBarSectionControllerDelegate> _delegate;
    id <IGFeaturedAccountsEditorDelegate> _featuredAccountsDelegate;
    _Bool _isCurrentUser;
    _Bool _chainingSelected;
    NSString *_sessionId;
    _Bool _hasSeenSmbGiftCardActionButton;
    _Bool _hasSeenSmbDeliveryActionButton;
    _Bool _hasSeenSmbDonateActionButton;
    _Bool _hasSeenShopActionButton;
    _Bool _hasSeenCapabilityButton;
    NSString *_fanClubProfileFetchedButtonText;
    _Bool _useDynamicLayout;
    IGBloksAsyncActionHandler *_asyncActionHandler;
    _Bool _chainingLoading;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
@property(nonatomic) _Bool chainingLoading; // @synthesize chainingLoading=_chainingLoading;
- (void)_logProfileSubscribeButtonTappedWithButtonType:(id)arg1 creatorId:(id)arg2 containerModule:(id)arg3;
- (void)_navigateToThreadViewWithEphemeralDraftMessage:(id)arg1;
- (void)_logRestrictEntrypointAction;
- (void)_logProfileAction:(id)arg1 clickPoint:(id)arg2;
- (void)_displayInstagramCallActionSheet;
- (_Bool)_openDeeplinkWithURLIfAvailable:(id)arg1;
- (void)_openUniversalLinkIfAvailableOtherwiseInAppBrowserWithUrlSource:(unsigned long long)arg1 actionButtonPartner:(id)arg2;
- (void)_openUniversalLinkIfAvailableOtherwiseInAppBrowserWithUrl:(id)arg1 urlSource:(unsigned long long)arg2 partner:(id)arg3 serviceType:(id)arg4;
- (void)_openInAppBrowserWithUrl:(id)arg1 urlSource:(unsigned long long)arg2;
- (void)_setChainingSelected:(_Bool)arg1 forActionBarView:(id)arg2;
- (void)_presentSheetViewController:(id)arg1 minSheetHeight:(double)arg2 maxSheetHeight:(double)arg3;
- (void)_presentSheetViewController:(id)arg1 minSheetHeight:(double)arg2;
- (void)storyPostCaptureEditingViewControllerDidCancel:(id)arg1;
- (void)storyPostCaptureEditingViewController:(id)arg1 didShareToStory:(long long)arg2 andDirectRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5 exitPoint:(long long)arg6;
- (void)_dismissModalSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)showDonorOutroStandaloneComponentUpsell:(id)arg1 withProfileFundraiserID:(id)arg2;
- (void)dismissFundraiserDonationCheckoutSheetViewController:(id)arg1;
- (void)fundraiserDonationCheckoutSheetViewController:(id)arg1 didCompleteDonationWithYouDonatedMessage:(id)arg2 didValidateWithServer:(_Bool)arg3;
- (void)profileActionBarView:(id)arg1 didLongPressFollowButton:(id)arg2;
- (void)profileActionBarView:(id)arg1 didTapFollowingRelationship:(id)arg2;
- (void)profileActionBarView:(id)arg1 didTapChainingButtonWithChainingSelected:(_Bool)arg2;
- (void)profileActionBarView:(id)arg1 didCompleteFollowAction:(long long)arg2;
- (void)profileActionBarView:(id)arg1 didTapFollowWithUserAction:(long long)arg2;
- (void)profileActionBarView:(id)arg1 didTapOverflowWithActions:(id)arg2;
- (void)_didTapAction:(long long)arg1 clickPoint:(id)arg2;
- (void)profileActionBarView:(id)arg1 didViewAction:(long long)arg2;
- (void)_prefetchNonprofitProfileSupportSheetIfNeeded;
- (void)profileActionBarView:(id)arg1 didTapAction:(long long)arg2;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)buttonViewForAction:(long long)arg1;
- (void)reloadSection;
- (void)_setChainingSelected:(_Bool)arg1;
- (void)selectChaining;
- (void)deselectChaining;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 user:(id)arg3 module:(id)arg4 mediaAttribution:(id)arg5 trackingToken:(id)arg6 businessLogger:(id)arg7 contactActionHandler:(Class)arg8 followAttribution:(id)arg9 fanClubProfileFetchedButtonText:(id)arg10 followControllerLogger:(id)arg11 featuredAccountsDelegate:(id)arg12 useDynamicLayout:(_Bool)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
