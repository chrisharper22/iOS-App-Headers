//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGDynamics1D, UIImageView, UILabel, UIView;

@interface IGSpringButton : UIControl
{
    _Bool _springEnabled;
    _Bool _useDynamicSizing;
    _Bool _hidesAccessoryToFitText;
    UIView *_contentView;
    double _titleLabelPadding;
    double _minimumWidth;
    double _maximumWidth;
    double _verbosePadding;
    unsigned long long _displayType;
    unsigned long long _accessoryPosition;
    unsigned long long _alignment;
    double _additionalLeftInset;
    UIImageView *_springContentView;
    UIImageView *_accessoryImageView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    double _currentScale;
    IGDynamics1D *_spring;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IGDynamics1D *spring; // @synthesize spring=_spring;
@property(nonatomic) double currentScale; // @synthesize currentScale=_currentScale;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(retain, nonatomic) UIImageView *springContentView; // @synthesize springContentView=_springContentView;
@property(nonatomic) _Bool hidesAccessoryToFitText; // @synthesize hidesAccessoryToFitText=_hidesAccessoryToFitText;
@property(nonatomic) double additionalLeftInset; // @synthesize additionalLeftInset=_additionalLeftInset;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) unsigned long long accessoryPosition; // @synthesize accessoryPosition=_accessoryPosition;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) double verbosePadding; // @synthesize verbosePadding=_verbosePadding;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic) _Bool useDynamicSizing; // @synthesize useDynamicSizing=_useDynamicSizing;
@property(nonatomic) double titleLabelPadding; // @synthesize titleLabelPadding=_titleLabelPadding;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isSpringEnabled) _Bool springEnabled; // @synthesize springEnabled=_springEnabled;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_contentWidth;
- (double)_titleWidth;
- (struct CGSize)_titleSize;
- (_Bool)_willAccessoryCauseClash;
- (double)_maxTitleWidth;
- (double)_accessoryWidth;
- (void)layoutSubviews;
- (_Bool)_shouldShowTitle;
- (void)_scaleUp:(_Bool)arg1 withVelocity:(_Bool)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
