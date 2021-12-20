//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGSundialViewerAttributionViewProtocol-Protocol.h"

@class IGSundialAdditionalAudioInfo, IGSundialViewerAttributionWithIcon, IGSundialViewerCombinedAttributionViewConfig, IGSundialViewerCombinedAudioAndEffectsAttributionView, NSArray, NSString, UIControl, UIView;
@protocol IGSundialAudioAssetProtocol;

@interface IGSundialViewerCombinedAttributionView : IGPassthroughView <IGSundialViewerAttributionViewProtocol>
{
    IGSundialViewerCombinedAttributionViewConfig *_config;
    IGSundialViewerCombinedAudioAndEffectsAttributionView *_audioAndEffectsAttributionView;
    IGSundialViewerAttributionWithIcon *_viewProductsEntryPointView;
    UIView *_secondaryView;
    _Bool _showViewProductsEntryPoint;
    _Bool _showAudioTrendingIcon;
    UIControl *_inThisReelEntryPoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *inThisReelEntryPoint; // @synthesize inThisReelEntryPoint=_inThisReelEntryPoint;
- (void)_setSecondaryAttributionViewVisibility;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)setShowStickerResultsEntryPoint:(_Bool)arg1 title:(id)arg2;
- (void)setRemixInfo:(id)arg1;
- (void)setShowPeopleTagsAttribution:(_Bool)arg1 title:(id)arg2;
- (void)setShowInThisReelEntryPoint:(_Bool)arg1 title:(id)arg2;
- (void)setShowViewProductsEntryPoint:(_Bool)arg1 title:(id)arg2;
@property(readonly, nonatomic) UIControl *viewProductsEntryPoint;
@property(readonly, nonatomic) UIControl *effectsAttribution;
@property(retain, nonatomic) NSArray *effectConfigs;
- (void)setLocationString:(id)arg1;
@property(nonatomic) _Bool showMusicNoteIcon;
- (void)setShowAudioMix:(_Bool)arg1;
- (_Bool)showAudioMix;
@property(nonatomic) _Bool showReactiveAudio;
@property(nonatomic) _Bool showAudioTrendingIcon;
@property(nonatomic) _Bool implicitlyResetMarqueeAnimationTiming;
@property(readonly, nonatomic) UIControl *audioAttribution;
@property(retain, nonatomic) IGSundialAdditionalAudioInfo *additionalAudioInfo;
@property(retain, nonatomic) id <IGSundialAudioAssetProtocol> audioAsset;
- (void)_updateHiddenState;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
