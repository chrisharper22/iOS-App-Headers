//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface IGTimeRulerView : UIView
{
    double _pixelsPerSecond;
    double _totalTime;
    long long _style;
    UIColor *_tickColor;
    long long _tickFrequency;
    long long _tickLabelfrequency;
}

- (void).cxx_destruct;
@property(nonatomic) long long tickLabelfrequency; // @synthesize tickLabelfrequency=_tickLabelfrequency;
@property(nonatomic) long long tickFrequency; // @synthesize tickFrequency=_tickFrequency;
@property(retain, nonatomic) UIColor *tickColor; // @synthesize tickColor=_tickColor;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double pixelsPerSecond; // @synthesize pixelsPerSecond=_pixelsPerSecond;
- (void)_sizeToFitTickFrequency:(double)arg1;
- (void)_updateTickValues;
- (void)sizeToFitNextMinorTick;
- (void)sizeToFitNextMajorTick;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
