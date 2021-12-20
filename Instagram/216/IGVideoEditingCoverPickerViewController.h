//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGTVGalleryViewControllerDelegate-Protocol.h"
#import "IGVideoTimelineThumbnailProviderDelegate-Protocol.h"

@class FBMetalSurfaceView, IGAVAssetThumbnailProvider, IGCoverPickerControlsView, IGCoverPickerSelection, IGIGLContext, IGSurfaceView, IGUserSession, IGVideoClip, NSString, UIImage;
@protocol IGVideoEditingCoverPickerViewControllerDelegate;

@interface IGVideoEditingCoverPickerViewController : IGViewController <IGVideoTimelineThumbnailProviderDelegate, IGTVGalleryViewControllerDelegate>
{
    IGVideoClip *_videoClip;
    IGCoverPickerControlsView *_coverPickerView;
    IGAVAssetThumbnailProvider *_thumbnailProvider;
    IGCoverPickerSelection *_selection;
    UIImage *_selectedImage;
    struct CGSize _thumbnailSize;
    _Bool _useFbIgluFilters;
    IGIGLContext *_iglContext;
    IGUserSession *_userSession;
    id <IGVideoEditingCoverPickerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoEditingCoverPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)galleryViewController:(id)arg1 didSelectAsset:(id)arg2 withThumbnail:(id)arg3 fromView:(id)arg4;
- (void)galleryViewControllerDidTapClose:(id)arg1;
- (void)thumbnailProvider:(id)arg1 didGenerateImages:(id)arg2;
- (void)thumbnailProvider:(id)arg1 didGeneratePixelBuffers:(id)arg2;
- (void)_galleryButtonTapped;
- (void)_setSelectedImage:(id)arg1 fromCameraRoll:(_Bool)arg2;
- (void)_coverPhotoSelectionScrubberChanged;
@property(readonly, nonatomic) FBMetalSurfaceView *fbSelectedThumbnailIndicatorSurfaceView;
@property(readonly, nonatomic) IGSurfaceView *igSelectedThumbnailIndicatorSurfaceView;
- (void)configureCoverThumbnail;
- (void)configureScrubberThumbnailsWithAsset:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)initWithVideoClip:(id)arg1 keyPosition:(double)arg2 userSession:(id)arg3 useFbIgluFilters:(_Bool)arg4 iglContext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

