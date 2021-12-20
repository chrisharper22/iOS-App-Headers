//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <FBSharedFramework/IGRenderingLoggingTrackable-Protocol.h>

@class IGImageSpecifier, IGImageViewDisplayState, IGImageViewLogger, NSData, NSMutableDictionary, NSString, UIImage;
@protocol IGImageProcessor, IGImageViewAnimatedTransitioningProviding, IGImageViewDelegate, IGImageViewPlaceholderProviding, MOSImageRequestInterfacing;

@interface IGImageView : UIImageView <IGRenderingLoggingTrackable>
{
    id <MOSImageRequestInterfacing> _currentRequest;
    IGImageViewDisplayState *_currentDisplayState;
    _Bool _shouldUseProgressiveJPEG;
    IGImageViewLogger *_imageViewLogger;
    NSMutableDictionary *_debugOptionsToDebugViews;
    id _cachedImageHolder;
    _Bool _clearImageForReuseIfNecessary;
    IGImageSpecifier *_imageSpecifier;
    NSData *_previewImageData;
    id <IGImageViewPlaceholderProviding> _placeholderImageProvider;
    id <IGImageViewAnimatedTransitioningProviding> _animatedTransitionProvider;
    id <IGImageProcessor> _imageProcessor;
    id <IGImageViewDelegate> _delegate;
}

+ (void)configureWithUserSession:(id)arg1;
+ (id)imageViewWithRemoteAssetImageSpecifier:(id)arg1 placeholderProvider:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool clearImageForReuseIfNecessary; // @synthesize clearImageForReuseIfNecessary=_clearImageForReuseIfNecessary;
@property(nonatomic) __weak id <IGImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <IGImageProcessor> imageProcessor; // @synthesize imageProcessor=_imageProcessor;
@property(retain, nonatomic) id <IGImageViewAnimatedTransitioningProviding> animatedTransitionProvider; // @synthesize animatedTransitionProvider=_animatedTransitionProvider;
@property(retain, nonatomic) id <IGImageViewPlaceholderProviding> placeholderImageProvider; // @synthesize placeholderImageProvider=_placeholderImageProvider;
@property(retain, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(retain, nonatomic) IGImageSpecifier *imageSpecifier; // @synthesize imageSpecifier=_imageSpecifier;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateDebugViewsIfNeeded;
- (void)_toggleDebugViewsIfNeeded;
- (void)_prepareImageViewForReuse:(_Bool)arg1;
- (void)_showPlaceholderImageIfNeeded;
- (void)_showFinalImage:(id)arg1 summary:(id)arg2 loadSource:(unsigned long long)arg3 shouldCallDelegateCallback:(_Bool)arg4;
- (void)_loadURLWithMosaicPipeline:(id)arg1 module:(id)arg2 imageFetchPriority:(long long)arg3 usingCache:(_Bool)arg4;
- (void)_loadURL:(id)arg1 module:(id)arg2 imageFetchPriority:(long long)arg3 usingCache:(_Bool)arg4 scanEnd:(id)arg5;
- (void)_showImage:(id)arg1 withDisplayState:(id)arg2;
- (void)_externalImageResolvingFailedWithError:(id)arg1 resolvedImageSpecifier:(id)arg2;
- (void)_handleResolvedExternalImage:(id)arg1 resolvedImageSpecifier:(id)arg2 module:(id)arg3;
- (void)_setImageSpecifier:(id)arg1 usingCache:(_Bool)arg2;
- (_Bool)isPlaceholderImageShown;
- (void)retryImageLoadUsingCache:(_Bool)arg1;
- (void)cancelImageLoad;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 shouldUseProgressiveJPEG:(_Bool)arg2 placeholderProvider:(id)arg3;
- (void)dealloc;
- (id)renderedComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
