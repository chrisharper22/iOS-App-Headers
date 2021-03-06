//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, CAShapeLayer, IGPanGestureRecognizer, IGTapGestureRecognizer, NSArray, NSMutableArray, UIImage;
@protocol IGAudioEditorHandDragScrubberViewDelegate;

@interface IGAudioEditorHandDragScrubberView : UIView
{
    CAGradientLayer *_frontTrackBackgroundLayer;
    CAShapeLayer *_backTrackLayer;
    CAShapeLayer *_frontTrackLayer;
    CALayer *_thumbLayer;
    CALayer *_thumbImageLayer;
    CAShapeLayer *_thumbBackgroundLayer;
    CALayer *_handDragImageLayer;
    NSMutableArray *_highlightLayers;
    IGPanGestureRecognizer *_panGesture;
    IGTapGestureRecognizer *_tapGesture;
    _Bool _isSliding;
    id <IGAudioEditorHandDragScrubberViewDelegate> _delegate;
    double _currentValue;
    double _minValue;
    double _maxValue;
    NSArray *_highlightsInValues;
    UIImage *_handDragImage;
    UIImage *_thumbIconImage;
    double _trackHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double trackHeight; // @synthesize trackHeight=_trackHeight;
@property(retain, nonatomic) UIImage *thumbIconImage; // @synthesize thumbIconImage=_thumbIconImage;
@property(retain, nonatomic) UIImage *handDragImage; // @synthesize handDragImage=_handDragImage;
@property(retain, nonatomic) NSArray *highlightsInValues; // @synthesize highlightsInValues=_highlightsInValues;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) _Bool isSliding; // @synthesize isSliding=_isSliding;
@property(nonatomic) __weak id <IGAudioEditorHandDragScrubberViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTap:(id)arg1;
- (void)_didPan:(id)arg1;
@property(nonatomic) _Bool handDragHidden;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)stopHandDragAnimation;
- (void)startHandDragAnimation;
- (_Bool)_isAnimating;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

