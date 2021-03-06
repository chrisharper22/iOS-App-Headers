//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, IGBouncyButton, NSString, UIControl, UILabel, UIView, UIVisualEffectView;

@interface IGVideoLayerCell : UICollectionViewCell
{
    UIVisualEffectView *_backdropView;
    UIView *_backgroundView;
    UIView *_highlightView;
    UIView *_selectionView;
    UILabel *_textLabel;
    CAGradientLayer *_textLabelMask;
    IGBouncyButton *_moreOptionsIndicator;
    _Bool _ig_selected;
    _Bool _showMoreOptions;
    UIView *_thumbnail;
    UIView *_indicatorView;
}

- (void).cxx_destruct;
@property(nonatomic, getter=shouldShowMoreOptions) _Bool showMoreOptions; // @synthesize showMoreOptions=_showMoreOptions;
@property(nonatomic) _Bool ig_selected; // @synthesize ig_selected=_ig_selected;
@property(readonly, nonatomic) UIControl *moreOptionsIndicator; // @synthesize moreOptionsIndicator=_moreOptionsIndicator;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *thumbnail; // @synthesize thumbnail=_thumbnail;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateStyleForCurrentStateWithAnimation:(_Bool)arg1;
@property(retain, nonatomic) NSString *text;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

