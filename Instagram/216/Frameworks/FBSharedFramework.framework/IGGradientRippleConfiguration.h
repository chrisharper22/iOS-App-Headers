//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIColor;

@interface IGGradientRippleConfiguration : NSObject
{
    NSArray *_colors;
    NSArray *_stops;
    double _interval;
    double _duration;
    UIColor *_backgroundColor;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, copy, nonatomic) NSArray *stops; // @synthesize stops=_stops;
@property(readonly, copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (id)initWithGradientColors:(id)arg1 stops:(id)arg2 rippleInterval:(double)arg3 duration:(double)arg4 backgroundColor:(id)arg5;

@end

