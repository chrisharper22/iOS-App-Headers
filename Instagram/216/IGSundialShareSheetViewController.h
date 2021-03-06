//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGBrandedContentUpsellHelperDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGResetToFeedPreferenceProviding-Protocol.h"
#import "IGStoryShareSheetViewControllerDelegate-Protocol.h"
#import "IGSundialCoverPickerViewControllerDelegate-Protocol.h"
#import "IGSundialNewNUXViewControllerDelegate-Protocol.h"
#import "IGSundialPostedVideoRenderProgressDelegate-Protocol.h"
#import "IGSundialRenameOriginalAudioViewControllerDelegate-Protocol.h"
#import "IGSundialShareSheetDelegate-Protocol.h"
#import "IGSundialShareSheetTagPeopleViewControllerDelegate-Protocol.h"
#import "IGSundialShareSheetV2CoverPickerAndProfileSettingsViewControllerDelegate-Protocol.h"
#import "IGSundialShareSheetV2ViewControllerDelegate-Protocol.h"

@class IGAsyncTask, IGBrandedContentUpsellHelper, IGGLKSession, IGMediaCroppingInfo, IGStoryShareSheetViewController, IGSundialComposition, IGSundialCoverPhoto, IGSundialPostedVideoRenderProgressAnnouncer, IGSundialShareSheet, IGSundialShareSheetPerformanceLogger, IGSundialShareSheetV2CoverPickerAndProfileSettingsViewController, IGSundialShareSheetV2ViewController, IGUserSession, NSArray, NSString, UIImage, UIView;
@protocol IGSundialShareSheetViewControllerDelegate;

@interface IGSundialShareSheetViewController : IGViewController <IGResetToFeedPreferenceProviding, IGSundialShareSheetDelegate, IGSundialShareSheetV2ViewControllerDelegate, IGSundialCoverPickerViewControllerDelegate, IGSundialShareSheetTagPeopleViewControllerDelegate, IGSundialRenameOriginalAudioViewControllerDelegate, IGSundialPostedVideoRenderProgressDelegate, IGSundialNewNUXViewControllerDelegate, IGSundialShareSheetV2CoverPickerAndProfileSettingsViewControllerDelegate, IGPartialModalSheetListener, IGStoryShareSheetViewControllerDelegate, IGBrandedContentUpsellHelperDelegate>
{
    IGUserSession *_userSession;
    IGGLKSession *_igglkSession;
    IGSundialShareSheet *_reelsTab;
    IGSundialShareSheetV2ViewController *_reelsTabV2;
    IGStoryShareSheetViewController *_storyShareSheetViewController;
    NSString *_pendingPostId;
    UIView *_navbarSeparator;
    IGAsyncTask *_outputVideo;
    IGSundialPostedVideoRenderProgressAnnouncer *_videoRenderProgressAnnouncer;
    IGAsyncTask *_postcaptureARControllerTask;
    IGSundialShareSheetPerformanceLogger *_perfLogger;
    IGBrandedContentUpsellHelper *_brandedContentUpsellHelper;
    IGMediaCroppingInfo *_cropInfo;
    IGSundialShareSheetV2CoverPickerAndProfileSettingsViewController *_coverPickerAndProfileSettingsViewController;
    _Bool _isOlderDraft;
    id <IGSundialShareSheetViewControllerDelegate> _delegate;
    IGSundialComposition *_composition;
    NSArray *_captureToolsForLogging;
    UIImage *_coverPhotoPlaceholder;
    IGSundialCoverPhoto *_coverPhoto;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSundialCoverPhoto *coverPhoto; // @synthesize coverPhoto=_coverPhoto;
@property(retain, nonatomic) UIImage *coverPhotoPlaceholder; // @synthesize coverPhotoPlaceholder=_coverPhotoPlaceholder;
@property(nonatomic) _Bool isOlderDraft; // @synthesize isOlderDraft=_isOlderDraft;
@property(retain, nonatomic) NSArray *captureToolsForLogging; // @synthesize captureToolsForLogging=_captureToolsForLogging;
@property(retain, nonatomic) IGSundialComposition *composition; // @synthesize composition=_composition;
@property(nonatomic) __weak id <IGSundialShareSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_coverPhotoViewController:(id)arg1 didSelectCoverPickerSelection:(id)arg2 videoComposition:(id)arg3;
- (void)sundialShareSheetV2CoverPickerAndProfileSettingsViewController:(id)arg1 didSelectCoverPickerSelection:(id)arg2 videoComposition:(id)arg3 updatedCoverImageToCrop:(_Bool)arg4;
- (void)sundialShareSheetV2CoverPickerAndProfileSettingsViewController:(id)arg1 didUpdateCoverImageCropInfo:(id)arg2;
- (void)storyShareSheetViewController:(id)arg1 didSendToStoryTarget:(long long)arg2 directRecipients:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5;
- (void)storyShareSheetViewControllerDidDismiss:(id)arg1;
- (void)storyShareSheetViewControllerWillDismiss:(id)arg1;
- (void)storyShareSheetViewControllerDidTapShareFromAudienceSelection:(id)arg1;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)sundialNewNUXViewControllerDidTapShareButton:(id)arg1;
- (void)postedVideoRenderProgressAnnouncer:(id)arg1 didCompleteWithError:(id)arg2;
- (void)postedVideoRenderProgressAnnouncerDidCancel:(id)arg1;
- (void)postedVideoRenderProgressAnnouncer:(id)arg1 didCompleteWithRenderedVideoURL:(id)arg2;
- (void)tagPeopleViewController:(id)arg1 didUpdateCoauthorUser:(id)arg2;
- (void)tagPeopleViewController:(id)arg1 didUpdateTaggedUsers:(id)arg2;
- (void)sundialShareSheetV2ViewController:(id)arg1 didUpdateCaption:(id)arg2;
- (void)sundialShareSheetV2ViewControllerDidTapEditCoverButton:(id)arg1;
- (void)sundialShareSheetV2ViewControllerDidTapSaveDraft:(id)arg1;
- (void)sundialShareSheetV2ViewControllerDidTapPost:(id)arg1;
- (void)sundialShareSheetV2ViewController:(id)arg1 didUpdateShareToFeed:(_Bool)arg2;
- (void)sundialShareSheetV2ViewController:(id)arg1 didUpdateShoppingMetadata:(id)arg2;
- (void)sundialShareSheetV2ViewController:(id)arg1 didUpdateContentFundingDeal:(id)arg2;
- (void)sundialShareSheetV2ViewControllerDidTapRenameAudio:(id)arg1;
- (void)sundialShareSheetV2ViewControllerDidTapTagPeople:(id)arg1;
- (void)_endEditing;
- (void)sundialShareSheetDidTapRenameAudio:(id)arg1;
- (void)sundialShareSheetDidTapTagPeople:(id)arg1;
- (void)sundialShareSheet:(id)arg1 didUpdateCoverImageCropInfo:(id)arg2;
- (void)sundialShareSheet:(id)arg1 shouldShowRightBarButton:(_Bool)arg2;
- (void)sundialShareSheet:(id)arg1 didUpdateContentFundingDeal:(id)arg2;
- (void)sundialShareSheet:(id)arg1 didUpdateShoppingMetadata:(id)arg2;
- (void)sundialShareSheet:(id)arg1 didUpdateSponsorPartner:(id)arg2;
- (void)sundialShareSheet:(id)arg1 didUpdateIsPaidPartnership:(_Bool)arg2;
- (void)sundialShareSheet:(id)arg1 didUpdateBrandedContentTags:(id)arg2;
- (void)sundialShareSheet:(id)arg1 didUpdateShareToReels:(_Bool)arg2;
- (void)sundialShareSheet:(id)arg1 didUpdateShareToFeed:(_Bool)arg2;
- (void)sundialShareSheet:(id)arg1 didUpdateCaption:(id)arg2;
- (id)analyticsModule;
@property(retain, nonatomic) NSString *saveAsDraftButtonText;
- (_Bool)prefersNavigationBarDividerHidden;
- (id)title;
- (void)_saveCompositionToCameraRoll;
- (void)sundialCoverPickerViewController:(id)arg1 didSelectCoverPickerSelection:(id)arg2 videoComposition:(id)arg3;
- (void)renameOriginalAudioViewController:(id)arg1 didSaveAudioName:(id)arg2;
- (void)_didTapRenameAudioRow;
- (void)_didTapTagPeopleRow;
- (void)_didTapEditCoverButton;
- (void)_didTapCoverPhotoPicker:(id)arg1;
- (void)coverPhotoPlaceholder:(id)arg1;
- (void)_didTapSaveAsDraftButton:(id)arg1;
- (void)_onDirectButtonTapped;
- (id)_coverPhotoForPost;
- (void)_showBonusesAlertView;
- (void)_showContentFundingAlertView;
- (void)_uploadPostWithEffectFilters:(id)arg1 fbEffectFilters:(id)arg2;
- (void)_tryToShowSurveyWithIntegrationPointID:(id)arg1 andContextData:(id)arg2;
- (void)_didTapShareButton:(id)arg1;
- (_Bool)_shouldShowNewNux;
- (void)_showNewNUXScreenForPublicUsers;
- (void)brandedContentUpsellHelperDidTapReviewBrandedContentPolicies;
- (void)brandedContentUpsellHelperDidTapShareAnywayButtonWithSignals:(id)arg1 entryPoint:(unsigned long long)arg2 contentType:(unsigned long long)arg3;
- (void)brandedContentUpsellHelperDidTapShareAnywayButtonWithSignals:(id)arg1 entryPoint:(unsigned long long)arg2;
- (void)brandedContentUpsellHelperDidTapAddTagButtonWithSignals:(id)arg1;
- (void)_cancelPendingPost;
- (void)_didTapBackButton:(id)arg1;
- (void)compositionStateDidUpdate;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithComposition:(id)arg1 coverPhoto:(id)arg2 userSession:(id)arg3 igglkSession:(id)arg4;
- (_Bool)IAcknowledgeThisAPICouldRegressFeedMetricsAndIWillRunATest;
- (id)resetToFeedPreferenceForConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

