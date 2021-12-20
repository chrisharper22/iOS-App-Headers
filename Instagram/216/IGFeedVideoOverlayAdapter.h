//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGVideoPlayerAudioIndicatorOverlayDelegate-Protocol.h"
#import "IGVideoPlayerIGTVIndicatorOverlayDelegate-Protocol.h"
#import "IGVideoPlayerPreviewOverlayDelegate-Protocol.h"
#import "IGVideoPlayerScrubberOverlayDelegate-Protocol.h"
#import "IGVideoPlayerSundialIndicatorOverlayDelegate-Protocol.h"
#import "IGVideoPlayerTagIndicatorOverlayDelegate-Protocol.h"
#import "IGVideoPlayerTimeIndicatorOverlayDelegate-Protocol.h"
#import "IGWatchAndMoreVideoOverlayContext-Protocol.h"

@class IGMediaIndicator, IGUserSession, IGVideoPlayerAudioIndicatorOverlay, IGVideoPlayerCaptionOverlay, IGVideoPlayerFullScreenHintOverlay, IGVideoPlayerIGTVIndicatorOverlay, IGVideoPlayerPreviewOverlay, IGVideoPlayerScrubberOverlay, IGVideoPlayerSundialIndicatorOverlay, IGVideoPlayerSundialPreviewChainOverlay, IGVideoPlayerTagIndicatorOverlay, IGVideoPlayerTimeIndicatorOverlay, IGVideoPlayerVideoIndicatorOverlay, IGVideoPlayerWatchAndMoreOverlay, NSString;
@protocol IGFeedVideoOverlayAdapterDelegate, IGVideoPlayerOverlayStatusAdapterType, IGWatchAndMoreVideoOverlayContextDelegate;

@interface IGFeedVideoOverlayAdapter : NSObject <IGVideoPlayerAudioIndicatorOverlayDelegate, IGVideoPlayerIGTVIndicatorOverlayDelegate, IGVideoPlayerPreviewOverlayDelegate, IGVideoPlayerTagIndicatorOverlayDelegate, IGVideoPlayerTimeIndicatorOverlayDelegate, IGVideoPlayerScrubberOverlayDelegate, IGVideoPlayerSundialIndicatorOverlayDelegate, IGWatchAndMoreVideoOverlayContext>
{
    id <IGVideoPlayerOverlayStatusAdapterType> _statusAdapter;
    IGUserSession *_userSession;
    CDStruct_10ab8798 _overlayOptions;
    _Bool _isTapToEnterEnabled;
    id <IGWatchAndMoreVideoOverlayContextDelegate> _watchAndMoreDelegate;
    id <IGFeedVideoOverlayAdapterDelegate> _delegate;
    IGVideoPlayerAudioIndicatorOverlay *_audioIndicatorOverlay;
    IGVideoPlayerTagIndicatorOverlay *_tagIndicatorOverlay;
    IGVideoPlayerIGTVIndicatorOverlay *_igtvIndicatorOverlay;
    IGVideoPlayerIGTVIndicatorOverlay *_simplifiedVideoIndicatorOverlay;
    IGVideoPlayerSundialIndicatorOverlay *_sundialIndicatorOverlay;
    IGVideoPlayerPreviewOverlay *_previewableVideoAdsOverlay;
    IGVideoPlayerPreviewOverlay *_igtvPreviewOverlay;
    IGVideoPlayerPreviewOverlay *_simplifiedVideoPreviewOverlay;
    IGVideoPlayerPreviewOverlay *_sundialPreviewOverlay;
    IGVideoPlayerSundialPreviewChainOverlay *_sundialPreviewChainOverlay;
    IGVideoPlayerCaptionOverlay *_captionOverlay;
    IGVideoPlayerVideoIndicatorOverlay *_videoIndicatorOverlay;
    IGVideoPlayerTimeIndicatorOverlay *_timeIndicatorOverlay;
    IGVideoPlayerScrubberOverlay *_scrubberOverlay;
    IGVideoPlayerWatchAndMoreOverlay *_watchAndMoreOverlay;
    IGVideoPlayerFullScreenHintOverlay *_fullScreenHintOverlay;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGVideoPlayerFullScreenHintOverlay *fullScreenHintOverlay; // @synthesize fullScreenHintOverlay=_fullScreenHintOverlay;
@property(retain, nonatomic) IGVideoPlayerWatchAndMoreOverlay *watchAndMoreOverlay; // @synthesize watchAndMoreOverlay=_watchAndMoreOverlay;
@property(retain, nonatomic) IGVideoPlayerScrubberOverlay *scrubberOverlay; // @synthesize scrubberOverlay=_scrubberOverlay;
@property(retain, nonatomic) IGVideoPlayerTimeIndicatorOverlay *timeIndicatorOverlay; // @synthesize timeIndicatorOverlay=_timeIndicatorOverlay;
@property(retain, nonatomic) IGVideoPlayerVideoIndicatorOverlay *videoIndicatorOverlay; // @synthesize videoIndicatorOverlay=_videoIndicatorOverlay;
@property(retain, nonatomic) IGVideoPlayerCaptionOverlay *captionOverlay; // @synthesize captionOverlay=_captionOverlay;
@property(retain, nonatomic) IGVideoPlayerSundialPreviewChainOverlay *sundialPreviewChainOverlay; // @synthesize sundialPreviewChainOverlay=_sundialPreviewChainOverlay;
@property(retain, nonatomic) IGVideoPlayerPreviewOverlay *sundialPreviewOverlay; // @synthesize sundialPreviewOverlay=_sundialPreviewOverlay;
@property(retain, nonatomic) IGVideoPlayerPreviewOverlay *simplifiedVideoPreviewOverlay; // @synthesize simplifiedVideoPreviewOverlay=_simplifiedVideoPreviewOverlay;
@property(retain, nonatomic) IGVideoPlayerPreviewOverlay *igtvPreviewOverlay; // @synthesize igtvPreviewOverlay=_igtvPreviewOverlay;
@property(retain, nonatomic) IGVideoPlayerPreviewOverlay *previewableVideoAdsOverlay; // @synthesize previewableVideoAdsOverlay=_previewableVideoAdsOverlay;
@property(retain, nonatomic) IGVideoPlayerSundialIndicatorOverlay *sundialIndicatorOverlay; // @synthesize sundialIndicatorOverlay=_sundialIndicatorOverlay;
@property(retain, nonatomic) IGVideoPlayerIGTVIndicatorOverlay *simplifiedVideoIndicatorOverlay; // @synthesize simplifiedVideoIndicatorOverlay=_simplifiedVideoIndicatorOverlay;
@property(retain, nonatomic) IGVideoPlayerIGTVIndicatorOverlay *igtvIndicatorOverlay; // @synthesize igtvIndicatorOverlay=_igtvIndicatorOverlay;
@property(retain, nonatomic) IGVideoPlayerTagIndicatorOverlay *tagIndicatorOverlay; // @synthesize tagIndicatorOverlay=_tagIndicatorOverlay;
@property(retain, nonatomic) IGVideoPlayerAudioIndicatorOverlay *audioIndicatorOverlay; // @synthesize audioIndicatorOverlay=_audioIndicatorOverlay;
@property(nonatomic) __weak id <IGFeedVideoOverlayAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isTapToEnterEnabled; // @synthesize isTapToEnterEnabled=_isTapToEnterEnabled;
@property(nonatomic) __weak id <IGWatchAndMoreVideoOverlayContextDelegate> watchAndMoreDelegate; // @synthesize watchAndMoreDelegate=_watchAndMoreDelegate;
- (void)videoPlayerScrubberOverlayDidFinishScrubbing:(id)arg1;
- (void)videoPlayerScrubberOverlay:(id)arg1 didScrubToPosition:(double)arg2;
- (void)videoPlayerScrubberOverlayDidBeginScrubbing:(id)arg1;
- (void)_showClipsVideoIndicatorIfNeeded;
- (void)videoPlayerTimeIndicatorOverlayDidHideAfterVisibleDuration:(id)arg1;
- (void)videoPlayerTimeIndicatorOverlayWillNotShowDueToVideoDuration:(id)arg1;
- (void)videoPlayerSundialIndicatorOverlayDidTapSundialIndicator:(id)arg1;
- (void)videoPlayerPreviewOverlayDidTapReplayButton:(id)arg1;
- (void)videoPlayerPreviewOverlayDidDisplay:(id)arg1;
- (void)videoPlayerPreviewOverlayDidTapKeepWatchingButton:(id)arg1;
- (void)videoPlayerIGTVIndicatorOverlayDidTapIGTVIndicator:(id)arg1;
- (void)videoPlayerTagIndicatorOverlayDidTapTagIndicatorOverlay:(id)arg1 mediaIndicator:(id)arg2;
- (void)videoPlayerAudioIndicatorOverlayDidRecieveTap:(id)arg1;
- (void)toggleWatchAndMoreButtonWithType:(unsigned long long)arg1;
- (id)_topToolbarConfigWithOptions:(CDStruct_10ab8798)arg1;
- (id)_bottomToolbarConfigWithOptions:(CDStruct_10ab8798)arg1 indicatorConfiguration:(id)arg2;
- (id)_overlaysWithOptions:(CDStruct_10ab8798)arg1;
- (void)hidePreviewOverlayButtons:(_Bool)arg1 animated:(_Bool)arg2;
- (void)peekIndicatorsWithExpandedLeftIndicator:(_Bool)arg1 withCollapseDelay:(double)arg2;
@property(readonly, nonatomic) _Bool isShowingContentIndicator;
@property(nonatomic) _Bool videoIndicatorEnabled;
@property(readonly, nonatomic) _Bool isShowingPreviewOverlay;
@property(readonly, nonatomic) _Bool isShowingAudioIndicatorOverlay;
- (void)collapseIGTVIndicatorAnimated:(_Bool)arg1;
- (void)expandIGTVIndicatorAnimated:(_Bool)arg1;
- (id)createOverlayConfigurationWithOptions:(CDStruct_10ab8798)arg1 userSession:(id)arg2 indicatorConfiguration:(id)arg3;
@property(readonly, nonatomic) IGMediaIndicator *audioIndicator;
- (id)initWithStatusAdapter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

