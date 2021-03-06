//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGTVAspectRatioPickerViewControllerDelegate-Protocol.h"
#import "IGTVMetadataEditorDelegate-Protocol.h"
#import "IGTVVideoFetchRequestDelegate-Protocol.h"
#import "IGVideoCoverPickerViewControllerDelegate-Protocol.h"
#import "IGVideoSharingFlowNavigationDelegate-Protocol.h"

@class IGCoverPickerSelection, IGIGLContext, IGNavigationController, IGTVAspectRatioPickerViewController, IGTVComposition, IGTVCreationAnalyticsSession, IGTVMetadataEditorViewController, IGTVPostUploadCreationCapabilitiesService, IGTVUploadTask, IGTVUploadableVideo, IGTVVideoCompositionAsset, IGUserSession, IGVideoCoverPickerViewController, NSString, UIViewController;
@protocol IGFeedCreationFlowControllerType, IGTVVideoCompositionUploadFlowDelegate;

@interface IGTVVideoCompositionUploadFlow : NSObject <IGTVAspectRatioPickerViewControllerDelegate, IGTVMetadataEditorDelegate, IGTVVideoFetchRequestDelegate, IGVideoCoverPickerViewControllerDelegate, IGVideoSharingFlowNavigationDelegate>
{
    IGUserSession *_userSession;
    IGTVVideoCompositionAsset *_asset;
    IGTVUploadTask *_uploadTask;
    IGTVUploadableVideo *_uploadableVideo;
    IGTVPostUploadCreationCapabilitiesService *_capabilitiesService;
    IGNavigationController *_navigationController;
    UIViewController<IGFeedCreationFlowControllerType> *_cameraNavigationController;
    IGTVAspectRatioPickerViewController *_aspectRatioPickerViewController;
    IGVideoCoverPickerViewController *_coverPickerViewController;
    IGTVMetadataEditorViewController *_metadataEditorViewController;
    IGCoverPickerSelection *_coverPickerSelection;
    NSString *_userSelectedPostTitle;
    _Bool _showSeriesTag;
    IGTVComposition *_composition;
    IGIGLContext *_iglContext;
    id <IGTVVideoCompositionUploadFlowDelegate> _delegate;
    IGTVCreationAnalyticsSession *_creationAnalytics;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTVCreationAnalyticsSession *creationAnalytics; // @synthesize creationAnalytics=_creationAnalytics;
@property(nonatomic) __weak id <IGTVVideoCompositionUploadFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_igtvAssetFromCreationEntryPoint:(id)arg1;
- (void)_configureUploadTask;
- (void)_refreshMetadataEditorCoverPhotoPreviewIfNeeded:(id)arg1;
- (void)_configureMetadataEditorViewController;
- (void)_createAndPushCoverPickerWithUploadableVideo:(id)arg1;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)popToViewController:(id)arg1 Animated:(_Bool)arg2;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)navigationController;
- (void)tvMetadataEditor:(id)arg1 didTapSaveAsDraftWithComposition:(id)arg2;
- (void)tvMetadataEditor:(id)arg1 didUpdateWithTitle:(id)arg2 showSeriesTag:(_Bool)arg3;
- (void)tvMetadataEditor:(id)arg1 didTapPostWithComposition:(id)arg2 uploadMetadata:(id)arg3;
- (void)tvMetadataEditorDidTapCoverPhotoButton:(id)arg1;
- (void)tvMetadataEditorDidTapBackButton:(id)arg1;
- (void)coverPickerViewController:(id)arg1 didTapDoneWithVideoComposition:(id)arg2;
- (void)coverPickerViewControllerDidTapBackButton:(id)arg1;
- (void)coverPickerViewController:(id)arg1 didTapNextWithUploadableVideo:(id)arg2;
- (void)coverPickerViewController:(id)arg1 didUpdateWithSelection:(id)arg2;
- (void)aspectRatioPickerViewController:(id)arg1 didTapNextWithUploadableVideo:(id)arg2;
- (void)videoFetchRequest:(id)arg1 didUpdateState:(id)arg2;
- (_Bool)isViewControllerAfterCoverPickerViewControllerInFlow:(id)arg1;
- (void)cancelAndLogEvent:(_Bool)arg1;
- (void)start;
@property(readonly, nonatomic) UIViewController *coverPickerViewController;
@property(readonly, nonatomic) UIViewController *firstViewControllerInFlow;
- (id)_initWithUserSession:(id)arg1 navigationController:(id)arg2 cameraNavigationController:(id)arg3 creationAnalytics:(id)arg4 creationEntryPoint:(id)arg5;
- (id)initWithUserSession:(id)arg1 cameraNavigationController:(id)arg2 creationAnalytics:(id)arg3 creationEntryPoint:(id)arg4;
- (id)initWithUserSession:(id)arg1 navigationController:(id)arg2 creationAnalytics:(id)arg3 creationEntryPoint:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

