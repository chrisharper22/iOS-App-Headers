//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGDiscoveryBreatherButtonGroup, IGDiscoveryBreatherHeaderTitleButton, IGTapButton, UIView;
@protocol IGDiscoveryBreatherHeaderCellDelegate;

@interface IGDiscoveryBreatherHeaderCell : UICollectionViewCell
{
    IGDiscoveryBreatherButtonGroup *_accessoryButtonGroup;
    IGTapButton *_hideButton;
    IGTapButton *_interestedButton;
    UIView *_accessoryView;
    IGDiscoveryBreatherHeaderTitleButton *_headerTitleButton;
    id <IGDiscoveryBreatherHeaderCellDelegate> _delegate;
    _Bool _animatesControlsBackground;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animatesControlsBackground; // @synthesize animatesControlsBackground=_animatesControlsBackground;
- (void)_onInterestedToggled:(id)arg1;
- (void)_onHideTapped:(id)arg1;
- (void)_onTitleTapped;
- (void)_setAccessoryView:(id)arg1;
- (id)_positiveNegativeButtonGroup;
- (id)_negativeButtonGroup;
- (id)_interestedButton;
- (id)_hideButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)setTitle:(id)arg1 style:(unsigned long long)arg2 isInterested:(_Bool)arg3 delegate:(id)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
