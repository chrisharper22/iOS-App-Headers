//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFundraiserLiveToStandaloneDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGLiveBroadcastViewerListQueryServiceDelegate-Protocol.h"
#import "IGLiveUserPaySupporterListViewControllerDelegate-Protocol.h"
#import "IGMonetizationProductOnboardingFlowDelegate-Protocol.h"
#import "IGPostLiveShareToIGTVFlowDelegate-Protocol.h"
#import "IGStoryCreationViewControllerNavigationDelegate-Protocol.h"
#import "IGVideoSharingUploadFlowDelegate-Protocol.h"

@class IGBloksAsyncActionHandler, IGBottomButtonsView, IGDiskRecordingResults, IGImageTitleSubtitleViewModel, IGLabelItemViewModel, IGListAdapter, IGLiveBroadcastEndingSaveToDiskHandler, IGLiveBroadcastLogger, IGLiveBroadcastViewerListQueryService, IGLiveDonationsDataSource, IGLiveUserPaySupporterDataSource, IGTVPostLiveShareToIGTVFlow, IGUserSession, IGVideoSharingUploadFlow, NSArray, NSString, UICollectionView, UILabel;
@protocol IGLiveBroadcastEndingViewControllerDelegate;

@interface IGLiveBroadcastEndingViewController : IGViewController <IGListAdapterDataSource, IGLiveBroadcastViewerListQueryServiceDelegate, IGPostLiveShareToIGTVFlowDelegate, IGLiveUserPaySupporterListViewControllerDelegate, IGMonetizationProductOnboardingFlowDelegate, IGStoryCreationViewControllerNavigationDelegate, IGFundraiserLiveToStandaloneDelegate, IGVideoSharingUploadFlowDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    NSString *_broadcastId;
    NSString *_mediaId;
    IGLiveBroadcastLogger *_logger;
    unsigned long long _audienceType;
    _Bool _shoppingEnabled;
    _Bool _shouldShowSupportResources;
    _Bool _shouldShowDemonetizationWarning;
    _Bool _shouldShowThankYouStory;
    _Bool _isLiveArchiveEnabled;
    _Bool _liveShareAttempted;
    double _durationInSeconds;
    NSArray *_taggedPartners;
    IGDiskRecordingResults *_diskRecordingResults;
    IGLiveBroadcastEndingSaveToDiskHandler *_saveToDiskHandler;
    IGLiveBroadcastViewerListQueryService *_viewerListQueryService;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGBottomButtonsView *_shareButton;
    IGBottomButtonsView *_oneClickPostButton;
    IGBottomButtonsView *_oneClickPostAlwaysSaveButton;
    UILabel *_oneClickPostLabel;
    UILabel *_doneButtonLabel;
    UILabel *_shareButtonLabel;
    IGImageTitleSubtitleViewModel *_userPayOnboardingViewModel;
    IGImageTitleSubtitleViewModel *_donationsListViewModel;
    IGImageTitleSubtitleViewModel *_userPayInfoViewModel;
    IGImageTitleSubtitleViewModel *_finalViewerListViewModel;
    IGImageTitleSubtitleViewModel *_userPayThankYouStoryViewModel;
    IGImageTitleSubtitleViewModel *_addFundraiserToProfileViewModel;
    IGImageTitleSubtitleViewModel *_reviewModeratorActionsModel;
    IGImageTitleSubtitleViewModel *_shareToIGTVViewModel;
    IGImageTitleSubtitleViewModel *_editPostViewModel;
    IGImageTitleSubtitleViewModel *_downloadVideoViewModel;
    IGImageTitleSubtitleViewModel *_viewInLiveArchiveViewModel;
    IGImageTitleSubtitleViewModel *_deleteVideoViewModel;
    IGImageTitleSubtitleViewModel *_supportResourceViewModel;
    IGImageTitleSubtitleViewModel *_viewInsightsViewModel;
    IGImageTitleSubtitleViewModel *_userPayDemonetizationViewModel;
    IGImageTitleSubtitleViewModel *_startAnotherLiveViewModel;
    IGBloksAsyncActionHandler *_insightsAsyncActionHandler;
    IGLabelItemViewModel *_liveInsightsDisclaimerLabelModel;
    IGTVPostLiveShareToIGTVFlow *_postLiveShareToIGTVFlow;
    IGLiveDonationsDataSource *_donationsDatasource;
    IGLiveUserPaySupporterDataSource *_userPaySupporterDataSource;
    _Bool _addOneClickPostButton;
    _Bool _addShareButton;
    _Bool _autoSaveEnabled;
    _Bool _shouldAddModeratorButton;
    _Bool _hasAssignedModerator;
    IGVideoSharingUploadFlow *_videoUploadFlow;
    id <IGLiveBroadcastEndingViewControllerDelegate> _delegate;
    long long _autoSaveSetting;
    NSArray *_captureToolsForLogging;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *captureToolsForLogging; // @synthesize captureToolsForLogging=_captureToolsForLogging;
@property(readonly, nonatomic) long long autoSaveSetting; // @synthesize autoSaveSetting=_autoSaveSetting;
@property(nonatomic) __weak id <IGLiveBroadcastEndingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateLiveToStandaloneRow:(id)arg1;
- (void)creationViewController:(id)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 image:(id)arg6 storyModelArray:(id)arg7 metadataArray:(id)arg8;
- (_Bool)creationViewControllerIsDeallocatedAfterSending:(id)arg1;
- (void)creationViewController:(id)arg1 didSharePostToStory:(long long)arg2 didSharePostToDirect:(_Bool)arg3;
- (void)creationViewController:(id)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(id)arg1 willShareToDirectRecipients:(id)arg2;
- (void)creationViewController:(id)arg1 didEnterState:(long long)arg2;
- (void)monetizationProductOnboardingFlowDidFinish:(id)arg1;
- (void)_dismissVideoSharingUploadFlowAfterUpload;
- (void)videoSharingUploadFlowDidCancelAnimated:(_Bool)arg1;
- (void)videoSharingUploadFlowDidFinishUploadForPromote;
- (void)videoSharingUploadFlowDidBeginUpload;
- (void)supporterListViewController:(id)arg1 navigateToUserProfile:(id)arg2;
- (void)postLiveShareToIGTVFlowDidCompletePosting:(id)arg1;
- (void)postLiveShareToIGTVFlowDidAttemptPosting;
- (void)setPostLiveShareToIGTVFlow:(id)arg1;
- (void)_showAutoSaveAlert;
- (void)_handleAutoSaveSetting;
- (void)_setAutoSaveSetting:(long long)arg1;
- (void)_dismissPresentedViewController;
- (void)_handleRowTapWithViewModel:(id)arg1;
- (void)_onAppWillResignActive:(id)arg1;
- (void)_onAppWillTerminate:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)setDiskRecordingResults:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)_imageTitleSubtitleViewModelForBadgesDemonetization;
- (id)_imageTitleSubtitleViewModelForBadgeOnboarding;
- (id)_imageTitleSubtitleViewModelForUserPayUpdate:(id)arg1;
- (id)_imageTitleSubtitleViewModelForDonations:(id)arg1;
- (id)_imageTitleSubtitleViewModelWithTitle:(id)arg1 icon:(unsigned long long)arg2;
- (void)shareLiveWithOnlyEditing:(_Bool)arg1 oneClickPost:(_Bool)arg2;
- (_Bool)_shouldAddShareToIGTVRow;
- (_Bool)_postLiveRedesignEnabled;
- (double)_minDurationInSeconds;
- (void)viewerListQueryService:(id)arg1 didLoadFinalViewerList:(id)arg2 withFinalViewerCount:(long long)arg3 userPayUpdate:(id)arg4;
- (void)viewerListQueryService:(id)arg1 didLoadViewerList:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithUserSession:(id)arg1 broadcastId:(id)arg2 mediaId:(id)arg3 logger:(id)arg4 durationInSeconds:(double)arg5 audienceType:(unsigned long long)arg6 shoppingEnabled:(_Bool)arg7 shouldShowSupportResources:(_Bool)arg8 shouldShowDemonetizationWarning:(_Bool)arg9 shouldShowThankYouStory:(_Bool)arg10 hasAssignedModerator:(_Bool)arg11 taggedPartners:(id)arg12 donationsDatasource:(id)arg13 userPaySupporterDataSource:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
