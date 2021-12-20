//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/POPAnimation.h>

@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation
{
}

+ (id)animationWithCustomPropertyReadBlock:(CDUnknownBlockType)arg1 writeBlock:(CDUnknownBlockType)arg2;
+ (id)animationWithCustomPropertyNamed:(id)arg1 readBlock:(CDUnknownBlockType)arg2 writeBlock:(CDUnknownBlockType)arg3;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (id)currentValue;
@property(copy, nonatomic) id toValue;
@property(copy, nonatomic) id fromValue;
- (void)setProgressMarkers:(id)arg1;
- (id)progressMarkers;
@property(retain, nonatomic) POPAnimatableProperty *property;
@property(nonatomic) unsigned long long clampMode;
@property(nonatomic) double roundingFactor;
@property(nonatomic, getter=isAdditive) _Bool additive;
- (void)_initState;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

