//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGImageProgressViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGBlurredImageView, IGDirectGradientView, IGDirectHscrollXMACTAButton, IGDirectHscrollXMAMessageSingleItemViewModel, IGDirectMessageBubbleView, IGDirectReshareMessageFooterView, IGDirectReshareMessageHeaderView, IGDirectReshareMessageMediaView, IGDirectXMAPrivateMediaOverlayView, IGImageProgressView, IGMediaOverlayIconAndTextView, IGVideoIndicatorView, NSString, UIImageView, UITapGestureRecognizer, UIView;
@protocol IGDirectHscrollXMASingleItemViewDelegate;

@interface IGDirectHscrollXMASingleItemView : UICollectionViewCell <IGImageProgressViewDelegate, UIGestureRecognizerDelegate>
{
    IGDirectHscrollXMAMessageSingleItemViewModel *_itemViewModel;
    IGDirectMessageBubbleView *_messageContentView;
    UIView *_messageContentWrapperView;
    IGDirectReshareMessageHeaderView *_headerView;
    IGImageProgressView *_previewImageView;
    IGBlurredImageView *_blurredImageView;
    IGMediaOverlayIconAndTextView *_overlayView;
    IGDirectXMAPrivateMediaOverlayView *_privateMediaOverlayView;
    UIImageView *_contentIndicatorView;
    IGVideoIndicatorView *_videoIndicatorView;
    IGDirectReshareMessageMediaView *_gridView;
    IGDirectReshareMessageFooterView *_xmaFooterView;
    IGDirectHscrollXMACTAButton *_firstCTAButtonView;
    IGDirectHscrollXMACTAButton *_secondCTAButtonView;
    IGDirectHscrollXMACTAButton *_thirdCTAButtonView;
    UITapGestureRecognizer *_tapGesture;
    UITapGestureRecognizer *_firstCTATapGesture;
    UITapGestureRecognizer *_secondCTATapGesture;
    UITapGestureRecognizer *_thirdCTATapGesture;
    UITapGestureRecognizer *_playPauseButtonTapGesture;
    _Bool _playPauseButtonIsPlaying;
    id <IGDirectHscrollXMASingleItemViewDelegate> _delegate;
    double _playPauseButtonProgress;
    IGDirectGradientView *_playPauseButtonGradientView;
    long long _hScrollXMACTAButtonListStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long hScrollXMACTAButtonListStyle; // @synthesize hScrollXMACTAButtonListStyle=_hScrollXMACTAButtonListStyle;
@property(readonly, nonatomic) IGDirectGradientView *playPauseButtonGradientView; // @synthesize playPauseButtonGradientView=_playPauseButtonGradientView;
@property(nonatomic) _Bool playPauseButtonIsPlaying; // @synthesize playPauseButtonIsPlaying=_playPauseButtonIsPlaying;
@property(nonatomic) double playPauseButtonProgress; // @synthesize playPauseButtonProgress=_playPauseButtonProgress;
@property(nonatomic) __weak id <IGDirectHscrollXMASingleItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)progressImageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)_didTapPlayPauseButton:(id)arg1;
- (struct CGRect)_playPauseButtonInSingleItemViewFrameWithTapPadding;
- (void)_didTapCTAButton:(id)arg1;
- (void)_didTapOnView;
- (void)_setIndicatorViewImage:(id)arg1;
- (void)_setupSubviews;
- (void)layoutSubviews;
- (void)_configureAccessibility;
- (void)reset;
- (void)configureWithItemViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

