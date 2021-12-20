//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSArray, UIColor, UIImage;

@interface IGDirectGradient : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSArray *_instagramGradient_colors;
    long long _instagramGradient_direction;
    UIImage *_layerContentsImage;
    UIColor *_staticColor;
}

+ (id)staticColor:(id)arg1;
+ (id)layerContentsImage:(id)arg1;
+ (id)instagramGradientWithColors:(id)arg1 direction:(long long)arg2;
- (void).cxx_destruct;
- (void)matchInstagramGradient:(CDUnknownBlockType)arg1 layerContentsImage:(CDUnknownBlockType)arg2 staticColor:(CDUnknownBlockType)arg3;

@end
