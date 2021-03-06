//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableOrderedSet, NSMutableSet, NSString, UIImageView, UIViewPropertyAnimator;
@protocol IGScalingTransitionImageViewDelegate;

@interface IGScalingTransitionImageView : UIView
{
    NSMutableOrderedSet *_queuedImageURLs;
    NSMutableSet *_pendingImageDownloads;
    NSMutableOrderedSet *_availableImages;
    NSString *_module;
    UIViewPropertyAnimator *_primaryAnimator;
    NSMutableSet *_allAnimators;
    NSMutableSet *_animatedViews;
    UIImageView *_orphanImageView;
    unsigned long long _currentIndex;
    _Bool _wantsPlaybackOnImageLoad;
    _Bool _shouldShowBorder;
    double _imageZoomMultiplier;
    double _imageTransitionDuration;
    double _imageFadeDuration;
    id <IGScalingTransitionImageViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGScalingTransitionImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_queueImageRequestForURL:(id)arg1 allowRetry:(_Bool)arg2;
- (void)_purgeExistingConfiguration;
- (void)_imageDownloadReceivedForRequest:(id)arg1 withImage:(id)arg2 allowRetry:(_Bool)arg3 error:(id)arg4 imageRequestSummary:(id)arg5 loadSource:(unsigned long long)arg6;
- (void)_displayFrozenState;
- (void)_setupNewAnimationPhase;
- (void)_beginNewAnimationPhase;
- (void)_attemptAnimationIteration;
- (void)stopPlayback;
- (void)pausePlayback;
- (void)startPlayback;
- (void)preparePlayback;
- (void)configureWithPhotos:(id)arg1 shouldShowBorder:(_Bool)arg2 module:(id)arg3;
- (void)dealloc;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 imageZoomMultiplier:(double)arg2 imageTransitionDuration:(double)arg3 imageFadeDuration:(double)arg4;

@end

