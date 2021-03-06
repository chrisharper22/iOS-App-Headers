//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGFeedItemMediaCell.h>

#import "IGAudioPlayerListener-Protocol.h"
#import "IGFeedPhotoViewDelegate-Protocol.h"
#import "IGFeedSectionSavedCollectionUpsellCompatible-Protocol.h"
#import "IGModernFeedAudioCompatible-Protocol.h"
#import "IGPlaybackTimeIndicatorControllerDelegate-Protocol.h"
#import "IGRenderingLoggingProviding-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGAudioPlayer_DEPRECATED_REWRITE_IN_OBJC, IGFeedPhotoView, IGFeedVideoTimeIndicatorView, IGMedia, IGPhotoIndicatorView, IGPlaybackTimeIndicatorConfiguration, IGPlaybackTimeIndicatorController, IGShareGutterScrollView, IGShareGutterView, IGSundialMusicAsset, IGUserSession, IGZoomController, NSString, UILongPressGestureRecognizer;
@protocol IGFeedItemPhotoCellDelegate, IGSponsoredInfoProviding, IGZoomControllerZoomingDelegate;

@interface IGFeedItemPhotoCell : IGFeedItemMediaCell <IGAudioPlayerListener, IGFeedPhotoViewDelegate, IGPlaybackTimeIndicatorControllerDelegate, UIScrollViewDelegate, IGRenderingLoggingProviding, IGFeedSectionSavedCollectionUpsellCompatible, IGModernFeedAudioCompatible>
{
    IGFeedVideoTimeIndicatorView *_timeIndicatorView;
    IGPlaybackTimeIndicatorController *_timeIndicatorController;
    IGPlaybackTimeIndicatorConfiguration *_timeIndicatorConfiguration;
    IGPhotoIndicatorView *_indicatorView;
    IGAudioPlayer_DEPRECATED_REWRITE_IN_OBJC *_audioPlayer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    id <IGSponsoredInfoProviding> _sponsoredInfoProvider;
    _Bool _feedItemMediaLoadingUpdateEnabled;
    long long _audioStatus;
    IGSundialMusicAsset *_musicAsset;
    IGShareGutterScrollView *_shareGutterScrollView;
    IGShareGutterView *_shareGutterView;
    IGUserSession *_userSession;
    struct UIEdgeInsets _contentInsets;
    _Bool _persistentOverlayIndicator;
    _Bool _interactiveTagHints;
    _Bool _hasLoggedSelectedImageSize;
    IGMedia *_post;
    IGFeedPhotoView *_photoView;
    id <IGFeedItemPhotoCellDelegate> _photoCellDelegate;
    id <IGZoomControllerZoomingDelegate> _zoomingDelegate;
    IGZoomController *_zoomController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasLoggedSelectedImageSize; // @synthesize hasLoggedSelectedImageSize=_hasLoggedSelectedImageSize;
@property(retain, nonatomic) IGZoomController *zoomController; // @synthesize zoomController=_zoomController;
@property(nonatomic) _Bool interactiveTagHints; // @synthesize interactiveTagHints=_interactiveTagHints;
@property(nonatomic) _Bool persistentOverlayIndicator; // @synthesize persistentOverlayIndicator=_persistentOverlayIndicator;
@property(nonatomic) __weak id <IGZoomControllerZoomingDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
@property(nonatomic) __weak id <IGFeedItemPhotoCellDelegate> photoCellDelegate; // @synthesize photoCellDelegate=_photoCellDelegate;
@property(readonly, nonatomic) IGFeedPhotoView *photoView; // @synthesize photoView=_photoView;
- (void)setPost:(id)arg1;
- (id)post;
- (id)renderedComponentLoggingInfo;
- (void)_addPhotoViewToSuperview:(id)arg1;
- (void)_setUpShareGutterView:(id)arg1;
- (void)_setupTimeIndicatorAndLayoutViews;
- (void)_configureTimeIndicatorControllerWithConfiguration:(id)arg1;
- (void)playbackTimeIndicatorControllerDidFinishTimer:(id)arg1;
- (void)playbackTimeIndicatorControllerDidHideIndicatorView:(id)arg1;
- (void)feedPhotoView:(id)arg1 didHideTagsWithReason:(unsigned long long)arg2;
- (void)feedPhotoViewDidTapVisualSearch:(id)arg1;
- (void)feedPhotoViewDidTapAudioIndicator:(id)arg1;
- (void)feedPhotoViewDidTapOverlayIndicator:(id)arg1;
- (void)feedPhotoView:(id)arg1 didShowTagsWithReason:(unsigned long long)arg2;
- (void)feedPhotoDidDoubleTapToLike:(id)arg1 locationInfo:(id)arg2;
- (void)feedPhotoViewDidTap:(id)arg1;
- (void)feedPhotoViewDidFailLoad:(id)arg1 error:(id)arg2 networkRequestSummary:(id)arg3;
- (void)feedPhotoViewDidLoadImage:(id)arg1 loadSource:(id)arg2 networkRequestSummary:(id)arg3;
- (void)feedPhotoView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)savedCollectionsUpsellControllerDidDismissOverlay:(id)arg1 animated:(_Bool)arg2;
- (void)savedCollectionsUpsellControllerWillPresentOverlay:(id)arg1 animated:(_Bool)arg2;
- (_Bool)savedCollectionsUpsellControllerShouldPresentOverlay:(id)arg1;
- (void)audioPlayerDidPlayToEnd:(id)arg1;
- (void)audioPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)audioPlayerDidLoadAudio:(id)arg1;
- (void)toggleAudioEnabledWith:(long long)arg1;
- (void)setAudioEnabled:(_Bool)arg1 with:(long long)arg2;
- (_Bool)isAudioEnabled;
- (long long)audioAvailability;
- (void)stopAudioPlayback;
- (void)pauseAudioPlayback;
- (void)startAudioPlayback;
- (void)prepareAudioPlayback;
- (void)setPercentVisible:(double)arg1;
- (void)clearProductTagsHints;
- (void)showTags:(_Bool)arg1 animated:(_Bool)arg2 reason:(unsigned long long)arg3;
@property(readonly, nonatomic) _Bool isShowingTags;
- (void)associateAsPhotoViewDelegate;
- (id)mediaCellCurrentlyDisplayedImage;
- (id)defaultAccessibilityElements;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setTagViewDelegate:(id)arg1;
- (void)configureWithConfiguration:(id)arg1;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

