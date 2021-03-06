//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, CAShapeLayer, IGAudioIndicatorBars, UIImageView, UILabel, UIView;

@interface IGStoryStickerTrayMusicStickerCell : UICollectionViewCell
{
    CAShapeLayer *_backdropLayer;
    CAGradientLayer *_gradientLayer;
    UIView *_gradientWrapperView;
    UIView *_gradientMaskView;
    UIImageView *_musicIconImageView;
    IGAudioIndicatorBars *_audioIndicatorBars;
    UILabel *_label;
    _Bool _showMusicIcon;
    _Bool _showAudioIndicatorBars;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isShowingAudioIndicatorBars) _Bool showAudioIndicatorBars; // @synthesize showAudioIndicatorBars=_showAudioIndicatorBars;
@property(nonatomic, getter=isShowingMusicIcon) _Bool showMusicIcon; // @synthesize showMusicIcon=_showMusicIcon;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

