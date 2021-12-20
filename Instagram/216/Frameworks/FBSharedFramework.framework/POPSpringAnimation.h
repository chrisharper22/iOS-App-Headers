//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/POPPropertyAnimation.h>

@interface POPSpringAnimation : POPPropertyAnimation
{
}

+ (id)animationWithPropertyNamed:(id)arg1;
+ (id)animation;
+ (void)convertTension:(double)arg1 friction:(double)arg2 toBounciness:(double *)arg3 speed:(double *)arg4;
+ (void)convertBounciness:(double)arg1 speed:(double)arg2 toTension:(double *)arg3 friction:(double *)arg4 mass:(double *)arg5;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (void)_updatedDynamicsMass;
- (void)_updatedDynamicsFriction;
- (void)_updatedDynamicsTension;
- (void)setSolver:(void *)arg1;
- (void *)solver;
@property(nonatomic) double springBounciness;
@property(nonatomic) double springSpeed;
@property(nonatomic) double dynamicsMass;
@property(nonatomic) double dynamicsFriction;
@property(nonatomic) double dynamicsTension;
@property(copy, nonatomic) id velocity;
- (void)dealloc;
- (id)init;
- (void)_initState;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

