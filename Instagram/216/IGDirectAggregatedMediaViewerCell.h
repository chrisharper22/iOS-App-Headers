//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGSoundStateListenerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGDirectAggregatedMedia, IGFeedItemVideoView, IGImageProgressView, IGSoundStateListener, IGUserSession, IGVideoPlaybackController, NSString, UIScrollView;
@protocol IGDirectAggregatedMediaViewerCellDelegate;

@interface IGDirectAggregatedMediaViewerCell : UICollectionViewCell <IGSoundStateListenerDelegate, UIScrollViewDelegate>
{
    IGUserSession *_userSession;
    UIScrollView *_scrollView;
    IGImageProgressView *_imageView;
    IGVideoPlaybackController *_playbackController;
    IGFeedItemVideoView *_videoView;
    IGSoundStateListener *_soundStateListener;
    IGDirectAggregatedMedia *_media;
    id <IGDirectAggregatedMediaViewerCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectAggregatedMediaViewerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)soundListenerDidSetStickySoundState:(id)arg1;
- (void)soundListenerDidUpdate:(id)arg1;
- (void)_stopVideoIfNeededWithReason:(long long)arg1;
- (void)_playVideoIfNeeded;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_didTapMedia:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)didDisappear;
- (void)willAppear;
- (void)layoutSubviews;
- (id)previewImage;
- (void)configureWithMedia:(id)arg1 previewImage:(id)arg2 userSession:(id)arg3 analyticsModule:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

