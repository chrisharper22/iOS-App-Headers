//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGRenderingLoggingProviding-Protocol.h"
#import "IGShowreelNativeViewDelegate-Protocol.h"
#import "IGStoryPlayerMediaViewType-Protocol.h"
#import "IGStoryStaticMediaProgressManagerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGRenderedComponentArray, IGShowreelNativeView, IGStoryStaticMediaProgressManager, IGUserSession, IGVPVDImpressionHelper, NSDictionary, NSString, UIScrollView;
@protocol IGStoryItemType, IGStoryPlayerMediaViewDelegate, IGStoryShowreelNativeViewDelegate;

@interface IGStoryShowreelNativeView : UIView <IGStoryStaticMediaProgressManagerDelegate, IGShowreelNativeViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, IGRenderingLoggingProviding, IGStoryPlayerMediaViewType>
{
    id <IGStoryPlayerMediaViewDelegate> _storyPlayerMediaViewDelegate;
    id <IGStoryShowreelNativeViewDelegate> _storyShowreelNativeViewDelegate;
    IGStoryStaticMediaProgressManager *_progressManager;
    IGShowreelNativeView *_snStoryView;
    IGShowreelNativeView *_snCaptionView;
    UIScrollView *_snCaptionScrollView;
    double _snCaptionScrollViewAvailableHeight;
    UIView *_snStoryDimmingView;
    unsigned long long _snPlaybackState;
    UIView *_snStoryPlayerView;
    NSDictionary *_initialShowreelNativeMediaViewLayoutExtras;
    IGRenderedComponentArray *_preparedShowreelNativeRenderingLogInfo;
    struct CGSize _multiDocumentSize;
    IGUserSession *_userSession;
    _Bool _postImpressionDetectionIsEnabled;
    IGVPVDImpressionHelper *vpvdImpressionHelper;
    IGVPVDImpressionHelper *merlinVpvdImpressionHelper;
    id <IGStoryItemType> _item;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool postImpressionDetectionIsEnabled; // @synthesize postImpressionDetectionIsEnabled=_postImpressionDetectionIsEnabled;
@property(readonly, nonatomic) id <IGStoryItemType> item; // @synthesize item=_item;
@property(retain, nonatomic) IGVPVDImpressionHelper *merlinVpvdImpressionHelper; // @synthesize merlinVpvdImpressionHelper;
@property(retain, nonatomic) IGVPVDImpressionHelper *vpvdImpressionHelper; // @synthesize vpvdImpressionHelper;
- (id)renderedComponentLoggingInfo;
- (void)showreelNativeViewDidTapRetryButton:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)isShowingContent;
- (_Bool)isViewFinishedLoading;
- (void)storyStaticMediaProgressManagerDidPlayToEnd:(id)arg1;
- (void)storyStaticMediaProgressManager:(id)arg1 didUpdateProgress:(double)arg2;
- (void)_didCollapseCaptionWithType:(unsigned long long)arg1;
- (void)_didTapCaption:(id)arg1;
- (void)_didLongPressOnSNStoryView:(id)arg1;
- (void)_didSwipeDownOnCaption:(id)arg1;
- (void)_didTapSNStoryView:(id)arg1;
- (void)_didExpandCaption;
- (void)_didFailToLoadSource;
- (void)_didLoadSource;
- (void)_willLoadURL:(id)arg1;
- (void)_updateMultiDocumentSize:(struct CGSize)arg1;
- (void)_handleMediaViewStateWithSNPlaybackState:(unsigned long long)arg1;
- (void)_animateCaptionDimmingViewWithHidden:(_Bool)arg1;
- (_Bool)_removeMultiDocumentWithName:(id)arg1;
- (id)_showreelNativeCaptionScrollView;
- (id)_getShowreelNativeMediaViewLayoutExtras;
- (void)_setPlaybackState:(unsigned long long)arg1;
- (void)playerViewDidFinishPreparingAssets:(id)arg1 templateName:(id)arg2 clientName:(id)arg3;
- (double)cellPlayTime;
- (double)mediaCurrentFrameTime;
- (double)mediaCurrentTime;
- (struct CGSize)mediaSize;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)prepareForReuse;
- (void)seekToBeginningAndPause;
- (void)seekToBeginning;
- (_Bool)isPlaying;
- (void)stopWithReason:(long long)arg1 pauseReasonDebugString:(id)arg2;
- (void)pauseWithReason:(long long)arg1;
- (void)play;
- (void)retryLoadItem:(id)arg1 currentLoadingError:(id)arg2;
- (void)configureWithItem:(id)arg1 delegate:(id)arg2 videoLogger:(id)arg3 videoLoggingConfig:(id)arg4 videoLoggingDataProvider:(id)arg5 launcherSetProvider:(id)arg6 launcherSet:(id)arg7 module:(id)arg8;
- (void)removeMultiDocumentWithName:(id)arg1;
- (void)updateMultiDocumentSize:(struct CGSize)arg1;
- (void)addMultiDocumentWithPlayerView:(id)arg1;
- (void)updatePlayBackState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 storyShowreelNativeViewDelegate:(id)arg2 playerView:(id)arg3 playbackState:(unsigned long long)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

