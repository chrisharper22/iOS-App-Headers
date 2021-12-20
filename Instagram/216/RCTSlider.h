//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIImage;

@interface RCTSlider : UISlider
{
    float _unclippedValue;
    float _step;
    float _lastValue;
    CDUnknownBlockType _onValueChange;
    CDUnknownBlockType _onSlidingComplete;
    UIImage *_trackImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *trackImage; // @synthesize trackImage=_trackImage;
@property(nonatomic) float lastValue; // @synthesize lastValue=_lastValue;
@property(nonatomic) float step; // @synthesize step=_step;
@property(copy, nonatomic) CDUnknownBlockType onSlidingComplete; // @synthesize onSlidingComplete=_onSlidingComplete;
@property(copy, nonatomic) CDUnknownBlockType onValueChange; // @synthesize onValueChange=_onValueChange;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
@property(retain, nonatomic) UIImage *thumbImage;
@property(retain, nonatomic) UIImage *maximumTrackImage;
@property(retain, nonatomic) UIImage *minimumTrackImage;
- (void)setMaximumValue:(float)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setValue:(float)arg1;

@end

