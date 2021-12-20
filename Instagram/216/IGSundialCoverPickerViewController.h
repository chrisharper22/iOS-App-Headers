//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGTVGalleryViewControllerDelegate-Protocol.h"
#import "IGTabControlSegment-Protocol.h"
#import "IGVideoTimelineThumbnailProviderDelegate-Protocol.h"

@class IGAVAssetThumbnailProvider, IGAsyncTask, IGCoverPickerSelection, IGCoverPickerView, IGIGLContext, IGUserSession, IGVideoComposition, NSString;
@protocol IGSundialCoverPickerViewControllerDelegate;

@interface IGSundialCoverPickerViewController : IGViewController <IGVideoTimelineThumbnailProviderDelegate, IGTVGalleryViewControllerDelegate, IGTabControlSegment>
{
    IGAsyncTask *_outputVideo;
    IGVideoComposition *_videoComposition;
    IGUserSession *_userSession;
    IGCoverPickerView *_coverPickerView;
    IGAVAssetThumbnailProvider *_thumbnailProvider;
    IGCoverPickerSelection *_selection;
    IGIGLContext *_iglContext;
    _Bool _useFbIgluFilters;
    struct CGSize _thumbnailSize;
    _Bool _showButtonBar;
    long long _coverPickerStyle;
    IGCoverPickerSelection *_oldSelection;
    _Bool _didUpdateCoverPhoto;
    _Bool _coverPhotoThumbnailsReady;
    id <IGSundialCoverPickerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSundialCoverPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)analyticsModule;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)_configureSelection;
- (void)_configureScrubberThumbnails;
- (void)thumbnailProvider:(id)arg1 didGenerateImages:(id)arg2;
- (void)thumbnailProvider:(id)arg1 didGeneratePixelBuffers:(id)arg2;
- (void)galleryViewController:(id)arg1 didSelectAsset:(id)arg2 withThumbnail:(id)arg3 fromView:(id)arg4;
- (void)galleryViewControllerDidTapClose:(id)arg1;
- (void)_galleryButtonTapped;
- (void)_coverPhotoSelectionScrubberChanged;
- (void)_onVideoRenderCompletion:(id)arg1;
- (void)_dismissViewController;
- (void)cancelBarButtonItemTapped;
- (void)prepareForExitWhenCoverImageToCropIsUpdated;
- (_Bool)wasCoverPhotoImageUpdated;
- (void)doneBarButtonItemTapped;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithOutputVideo:(id)arg1 coverPhotoSelection:(id)arg2 userSession:(id)arg3 showButtonBar:(_Bool)arg4 coverPickerStyle:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

