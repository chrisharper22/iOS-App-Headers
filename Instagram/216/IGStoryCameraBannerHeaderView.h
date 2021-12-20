//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGCameraEffectNetworkConsentPillDelegate-Protocol.h"
#import "IGStoryCameraBannerCenterHeaderViewDelegate-Protocol.h"
#import "IGStoryCameraHeaderViewType-Protocol.h"

@class IGAREffectAttributionPillView, IGAudioAlbumArtButton, IGStackView, IGStoryCameraBannerCenterHeaderView, IGStoryCameraHeaderPill, IGTapButton, NSString, UIControl, UIView;
@protocol IGStoryCameraHeaderViewDelegate;

@interface IGStoryCameraBannerHeaderView : IGPassthroughView <IGStoryCameraBannerCenterHeaderViewDelegate, IGCameraEffectNetworkConsentPillDelegate, IGStoryCameraHeaderViewType>
{
    IGStoryCameraBannerCenterHeaderView *_centerHeaderView;
    IGTapButton *_closeButton;
    IGStackView *_topControlsView;
    IGPassthroughView *_controlsView;
    IGStoryCameraHeaderPill *_cameraHeaderPill;
    IGAudioAlbumArtButton *_albumArtButton;
    UIView *_albumView;
    _Bool _showCloseButton;
    unsigned long long _controlsAlignment;
    _Bool _settingsButtonHidden;
    _Bool _retakeButtonHidden;
    id <IGStoryCameraHeaderViewDelegate> _delegate;
    IGAREffectAttributionPillView *_arEffectAttributionView;
    UIControl *_muteButton;
    IGTapButton *_musicButton;
    IGTapButton *_retakeButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool retakeButtonHidden; // @synthesize retakeButtonHidden=_retakeButtonHidden;
@property(retain, nonatomic) IGTapButton *retakeButton; // @synthesize retakeButton=_retakeButton;
@property(readonly, nonatomic) IGTapButton *musicButton; // @synthesize musicButton=_musicButton;
@property(nonatomic) _Bool settingsButtonHidden; // @synthesize settingsButtonHidden=_settingsButtonHidden;
@property(retain, nonatomic) UIControl *muteButton; // @synthesize muteButton=_muteButton;
@property(readonly, nonatomic) IGAREffectAttributionPillView *arEffectAttributionView; // @synthesize arEffectAttributionView=_arEffectAttributionView;
@property(nonatomic) __weak id <IGStoryCameraHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cameraBannerCenterHeaderViewDidTap:(id)arg1;
- (void)_didTapAlbumButton;
- (void)_didTapMusicButton;
- (void)_muteButtonTapped;
- (void)_closeButtonTapped;
- (void)didTapCameraEffectNetworkConsentPill:(id)arg1;
- (void)setRetakeButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) double middleButtonsInterItemSpacing;
- (void)setAlbumButtonImageWithURL:(id)arg1;
- (void)setAlbumButtonHidden:(_Bool)arg1;
- (void)setMusicButtonHidden:(_Bool)arg1;
- (void)hideCameraHeaderPill;
- (void)showCameraHeaderPill:(id)arg1 pillTapBlock:(CDUnknownBlockType)arg2;
- (void)setSettingsButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)removeTopControl:(id)arg1;
- (void)addTopControl:(id)arg1;
- (void)setMuteButtonState:(_Bool)arg1;
@property(nonatomic) _Bool muteButtonHidden;
- (void)hideCloseView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideAllViewsExceptClose:(_Bool)arg1;
- (void)hideAllViewsExceptTopControls:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (id)initWithDirectConfig:(id)arg1;
- (id)initWithDisplayName:(id)arg1 format:(id)arg2 analyticsModule:(id)arg3 showCloseButton:(_Bool)arg4 showCenterHeader:(_Bool)arg5 controlsAlignment:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
