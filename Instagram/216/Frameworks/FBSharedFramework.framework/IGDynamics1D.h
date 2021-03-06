//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDynamicsModel.h>

@interface IGDynamics1D : IGDynamicsModel
{
    _Bool _disabled;
    double _currentValue;
    double _targetValue;
    double _velocity;
    double _minValue;
    CDUnknownBlockType _stepBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType stepBlock; // @synthesize stepBlock=_stepBlock;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
- (id)description;
- (_Bool)notify;
- (void)step:(double)arg1;
- (_Bool)isDone;
- (id)init;

@end

