//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGGatedMediaViewDelegate-Protocol.h>

@class IGGatedMediaView, IGImageView, NSString, UIImageView, UIVisualEffectView;
@protocol IGTVBlurredOverlayDetailedViewDelegate;

@interface IGTVBlurredOverlayDetailedView : UIView <IGGatedMediaViewDelegate>
{
    id <IGTVBlurredOverlayDetailedViewDelegate> _delegate;
    IGImageView *_backgroundImageView;
    UIVisualEffectView *_visualEffectView;
    IGGatedMediaView *_gatedMediaView;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
- (void)didTapCenterButton;
- (void)didTapRightButton;
- (void)didTapBottomOrLeftButton;
- (void)_matchGatedWithBackground:(id)arg1;
- (void)_matchHidden;
- (void)_matchNone;
- (void)configureWithDetailedViewModel:(id)arg1 animated:(_Bool)arg2;
- (void)configureWithCompactViewModel:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
