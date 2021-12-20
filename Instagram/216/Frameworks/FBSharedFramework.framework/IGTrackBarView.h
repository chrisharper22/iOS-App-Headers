//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView;

@interface IGTrackBarView : UIView
{
    double _trackValue;
    UIView *_trackView;
    UIView *_trackValueView;
    UIView *_backgroundView;
    UIView *_effectiveContentView;
    UIVisualEffectView *_visualEffectView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(readonly, nonatomic) UIView *effectiveContentView; // @synthesize effectiveContentView=_effectiveContentView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIView *trackValueView; // @synthesize trackValueView=_trackValueView;
@property(readonly, nonatomic) UIView *trackView; // @synthesize trackView=_trackView;
@property(nonatomic) double trackValue; // @synthesize trackValue=_trackValue;
- (_Bool)_isVisualEffectEnabled;
- (void)layoutSubviews;
- (void)setTrackValueTintColor:(id)arg1;
- (void)setTrackTintColor:(id)arg1;
- (void)setBackgroundOverlayColor:(id)arg1;
- (void)setBackgroundOverlayAlpha:(double)arg1;
- (void)setBackgroundOverlayVisualEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
