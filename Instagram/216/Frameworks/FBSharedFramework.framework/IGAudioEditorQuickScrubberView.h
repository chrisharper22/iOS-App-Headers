//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, IGPanGestureRecognizer, IGTapGestureRecognizer, NSArray, NSMutableArray;
@protocol IGAudioEditorQuickScrubberViewDelegate;

@interface IGAudioEditorQuickScrubberView : UIView
{
    CAShapeLayer *_trackLayer;
    CAShapeLayer *_thumbLayer;
    NSMutableArray *_highlightLayers;
    IGPanGestureRecognizer *_panGesture;
    IGTapGestureRecognizer *_tapGesture;
    _Bool _isSliding;
    _Bool _showColorsForLightMode;
    id <IGAudioEditorQuickScrubberViewDelegate> _delegate;
    double _clipStartTime;
    double _clipDuration;
    double _totalDuration;
    NSArray *_highlightsInSeconds;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showColorsForLightMode; // @synthesize showColorsForLightMode=_showColorsForLightMode;
@property(retain, nonatomic) NSArray *highlightsInSeconds; // @synthesize highlightsInSeconds=_highlightsInSeconds;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) double clipDuration; // @synthesize clipDuration=_clipDuration;
@property(nonatomic) double clipStartTime; // @synthesize clipStartTime=_clipStartTime;
@property(nonatomic) _Bool isSliding; // @synthesize isSliding=_isSliding;
@property(nonatomic) __weak id <IGAudioEditorQuickScrubberViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTap:(id)arg1;
- (void)_didPan:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

