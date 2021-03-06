//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGTVGalleryViewControllerDelegate-Protocol.h"
#import "IGVideoTimelineThumbnailProviderDelegate-Protocol.h"

@class IGAVAssetThumbnailProvider, IGCoverPickerSelection, IGCoverPickerView, IGIGLContext, IGPostPassthroughUploadCandidate, IGTVCreationAnalyticsSession, IGUserSession, IGVideoComposition, NSString;
@protocol IGVideoCoverPickerViewControllerDelegate, IGVideoSharingFlowNavigationDelegate;

@interface IGVideoCoverPickerViewController : IGViewController <IGVideoTimelineThumbnailProviderDelegate, IGTVGalleryViewControllerDelegate>
{
    IGCoverPickerView *_coverPickerView;
    IGUserSession *_userSession;
    IGVideoComposition *_videoComposition;
    IGPostPassthroughUploadCandidate *_passthroughCandidate;
    IGTVCreationAnalyticsSession *_creationAnalytics;
    long long _coverPickerStyle;
    id <IGVideoCoverPickerViewControllerDelegate> _delegate;
    id <IGVideoSharingFlowNavigationDelegate> _navigationDelegate;
    IGAVAssetThumbnailProvider *_thumbnailProvider;
    IGCoverPickerSelection *_selection;
    NSString *_userSelectedPostTitle;
    _Bool _showSeriesTag;
    IGIGLContext *_iglContext;
    _Bool _useFbIgluFilters;
    struct CGSize _thumbnailSize;
}

- (void).cxx_destruct;
- (id)_rightNavbarItemWithPresentedModally:(_Bool)arg1;
- (id)_title;
- (void)_configureSelection;
- (void)_configureScrubberThumbnails;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)galleryViewController:(id)arg1 didSelectAsset:(id)arg2 withThumbnail:(id)arg3 fromView:(id)arg4;
- (void)galleryViewControllerDidTapClose:(id)arg1;
- (void)thumbnailProvider:(id)arg1 didGenerateImages:(id)arg2;
- (void)thumbnailProvider:(id)arg1 didGeneratePixelBuffers:(id)arg2;
- (void)_coverPhotoSelectionScrubberChanged;
- (void)_galleryButtonTapped;
- (void)_cancelBarButtonItemTapped;
- (void)_emphasizedDoneBarButtonItemTapped;
- (void)_doneBarButtonItemTapped;
- (void)_nextBarButtonItemTapped;
- (void)_backBarButtonItemTapped;
- (void)configureWithUserSelectedPostTitle:(id)arg1 showSeriesTag:(_Bool)arg2;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 uploadableVideo:(id)arg2 selection:(id)arg3 configuration:(id)arg4 delegate:(id)arg5 navigationDelegate:(id)arg6 iglContext:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

