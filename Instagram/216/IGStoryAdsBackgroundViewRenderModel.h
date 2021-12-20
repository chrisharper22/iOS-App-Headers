//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGPhoto, NSArray, UIColor;

@interface IGStoryAdsBackgroundViewRenderModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    UIColor *_monoColorBackground_color;
    double _monoColorBackground_dimmingViewAlpha;
    NSArray *_gradientBackground_colors;
    double _gradientBackground_dimmingViewAlpha;
    IGPhoto *_imageBackground_image;
    _Bool _imageBackground_blurred;
    double _imageBackground_dimmingViewAlpha;
}

+ (id)monoColorBackgroundWithColor:(id)arg1 dimmingViewAlpha:(double)arg2;
+ (id)imageBackgroundWithImage:(id)arg1 blurred:(_Bool)arg2 dimmingViewAlpha:(double)arg3;
+ (id)gradientBackgroundWithColors:(id)arg1 dimmingViewAlpha:(double)arg2;
- (void).cxx_destruct;
- (void)matchMonoColorBackground:(CDUnknownBlockType)arg1 gradientBackground:(CDUnknownBlockType)arg2 imageBackground:(CDUnknownBlockType)arg3;

@end
