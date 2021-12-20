//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCanvasHeaderViewModel, IGGradientView, IGImageView, IGTapButton;
@protocol IGCanvasHeaderViewDelegate;

@interface IGCanvasHeaderView : UIView
{
    id <IGCanvasHeaderViewDelegate> _delegate;
    IGCanvasHeaderViewModel *_headerViewModel;
    IGImageView *_backgroundImageView;
    IGTapButton *_closeButton;
    IGTapButton *_volumeSettingsButton;
    IGGradientView *_gradientView;
    _Bool _isTransparent;
}

- (void).cxx_destruct;
- (void)_didTapAudioButton:(id)arg1;
- (void)_didTapCloseButton:(id)arg1;
- (void)updateAudioButtonStateWithEnabled:(_Bool)arg1;
- (_Bool)isTransparent;
- (void)configureHeader:(id)arg1 module:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithShowAudioIcon:(_Bool)arg1 delegate:(id)arg2;

@end

