//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGNametagBackgroundConfiguration.h"

@class UIColor, UIImage;

@interface IGNametagSelfieBackgroundConfiguration : IGNametagBackgroundConfiguration
{
    UIImage *_image;
    double _heightFactor;
    double _offsetFactor;
    UIColor *_backgroundColor;
}

+ (id)selfieBackgroundConfigurations;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double offsetFactor; // @synthesize offsetFactor=_offsetFactor;
@property(readonly, nonatomic) double heightFactor; // @synthesize heightFactor=_heightFactor;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)_initWithImage:(id)arg1 heightFactor:(double)arg2 offsetFactor:(double)arg3;

@end
