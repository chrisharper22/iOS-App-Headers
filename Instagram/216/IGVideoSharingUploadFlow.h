//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGContentFundingDealsConfigFetcherDelegate-Protocol.h"
#import "IGTVPostLiveCoverPickerViewControllerDelegate-Protocol.h"
#import "IGTVVideoFetchRequestDelegate-Protocol.h"
#import "IGVideoCoverPickerViewControllerDelegate-Protocol.h"
#import "IGVideoEditingViewControllerDelegate-Protocol.h"
#import "IGVideoShareSheetViewControllerDelegate-Protocol.h"
#import "IGVideoSharingAdvancedSettingsViewControllerDelegate-Protocol.h"
#import "IGVideoSharingFlowNavigationDelegate-Protocol.h"

@class IGContentFundingDealsConfig, IGContentFundingDealsConfigFetcher, IGIGLContext, IGMediaMetadata, IGNavigationController, IGShareListManager, IGTVCreationAnalyticsSession, IGTVMetadataEditorAdvancedSettingsViewControllerConfig, IGTVPostLiveCoverPickerViewController, IGTVPostUploadCreationCapabilitiesService, IGTVUploadTask, IGTVUploadableVideo, IGTVVideoFetchRequest, IGUserSession, IGVideoCoverPickerViewController, IGVideoEditingViewController, IGVideoShareSheetViewController, IGVideoSharingUploadModel, IGVideoUploadAssetType, NSString, UIViewController;
@protocol IGFeedCreationFlowControllerType, IGVideoSharingUploadFlowDelegate;

@interface IGVideoSharingUploadFlow : NSObject <IGVideoCoverPickerViewControllerDelegate, IGVideoEditingViewControllerDelegate, IGVideoShareSheetViewControllerDelegate, IGVideoSharingAdvancedSettingsViewControllerDelegate, IGVideoSharingFlowNavigationDelegate, IGTVVideoFetchRequestDelegate, IGContentFundingDealsConfigFetcherDelegate, IGTVPostLiveCoverPickerViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGTVPostUploadCreationCapabilitiesService *_capabilitiesService;
    IGTVUploadableVideo *_previousUploadableVideo;
    IGTVUploadableVideo *_uploadableVideo;
    IGTVUploadTask *_uploadTask;
    IGVideoSharingUploadModel *_uploadModel;
    IGShareListManager *_shareListManager;
    IGNavigationController *_navigationController;
    UIViewController<IGFeedCreationFlowControllerType> *_cameraNavigationController;
    IGNavigationController *_videoShareSheetNavigationController;
    IGVideoEditingViewController *_videoEditingViewController;
    IGVideoShareSheetViewController *_videoShareSheetViewController;
    IGVideoCoverPickerViewController *_videoCoverPickerViewController;
    IGTVPostLiveCoverPickerViewController *_postLiveCoverPickerViewController;
    IGTVMetadataEditorAdvancedSettingsViewControllerConfig *_advancedSettingsConfig;
    IGContentFundingDealsConfig *_dealsConfig;
    IGContentFundingDealsConfigFetcher *_dealsConfigFetcher;
    IGVideoUploadAssetType *_assetType;
    IGTVVideoFetchRequest *_videoFetchRequest;
    IGMediaMetadata *_initialMediaMetadata;
    _Bool _useFbIgluFilters;
    IGIGLContext *_iglContext;
    _Bool _isDirectToShareFlow;
    id <IGVideoSharingUploadFlowDelegate> _delegate;
    IGTVCreationAnalyticsSession *_creationAnalytics;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTVCreationAnalyticsSession *creationAnalytics; // @synthesize creationAnalytics=_creationAnalytics;
@property(nonatomic) __weak id <IGVideoSharingUploadFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_requestSaveDraftIfEditedAndDismissFlow;
- (void)_dismissSharingUploadFlow;
- (void)_saveDraft;
- (void)_presentSaveDraftActionSheetController;
- (void)_handleThumbnailResponse:(id)arg1;
- (id)_postLiveCoverPicker;
- (id)_videoCoverPicker;
- (id)_videoAdvancedSettings;
- (id)_videoShareSheet;
- (id)_videoEditor;
- (void)_createShareListManagerAndBeginEditing;
- (void)_beginUploadAndShouldDismissFlow:(_Bool)arg1;
- (void)_createUploadTaskAndBeginOptimisticUpload;
- (void)videoFetchRequest:(id)arg1 didUpdateState:(id)arg2;
- (void)contentFundingDealsConfigFetcherDidFetch:(id)arg1;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)popToViewController:(id)arg1 Animated:(_Bool)arg2;
- (void)_popToRootViewController:(_Bool)arg1;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)navigationController;
- (void)postLiveCoverPickerViewControllerDidTapBackButton:(id)arg1;
- (void)postLiveCoverPickerViewControllerDidTapNext:(id)arg1 withSelection:(id)arg2;
- (void)coverPickerViewController:(id)arg1 didUpdateWithSelection:(id)arg2;
- (void)coverPickerViewController:(id)arg1 didTapNextWithUploadableVideo:(id)arg2;
- (void)coverPickerViewControllerDidTapBackButton:(id)arg1;
- (void)coverPickerViewController:(id)arg1 didTapDoneWithVideoComposition:(id)arg2;
- (void)videoShareSheetViewControllerDidFinishSharePostForPromote:(id)arg1;
- (void)advancedSettingsViewControllerDidTapBackButton:(id)arg1;
- (void)videoShareSheetViewControllerDidCancelFailedUpload:(id)arg1;
- (void)videoShareSheetViewControllerDidTapAdvancedSettings:(id)arg1;
- (void)videoShareSheetViewControllerDidTapCoverPhoto:(id)arg1;
- (void)videoShareSheetViewControllerDidTapPostOrDoneButton:(id)arg1 shouldDismissFlow:(_Bool)arg2;
- (void)videoShareSheetViewControllerDidTapBackOrCancelButton:(id)arg1;
- (void)videoEditingViewControllerDidTapNext:(id)arg1 withCoverPhoto:(id)arg2;
- (void)videoEditingViewControllerDidTapBack:(id)arg1;
- (void)cancelAndLogEvent:(_Bool)arg1;
- (void)start;
@property(readonly, nonatomic) UIViewController *firstViewControllerInFlow;
- (id)_initWithUserSession:(id)arg1 navigationController:(id)arg2 cameraNavigationController:(id)arg3 creationAnalytics:(id)arg4 assetType:(id)arg5;
- (id)initWithUserSession:(id)arg1 cameraNavigationController:(id)arg2 creationAnalytics:(id)arg3 assetType:(id)arg4;
- (id)initWithUserSession:(id)arg1 navigationController:(id)arg2 creationAnalytics:(id)arg3 assetType:(id)arg4;
- (id)initWithUserSession:(id)arg1 creationAnalytics:(id)arg2 assetType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
