//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface QPEligibilityEvaluator : NSObject
{
    _Bool _shouldLogEligibilityWaterfall;
    NSArray *_validators;
}

+ (void)_logEligibilityResult:(id)arg1 forQP:(id)arg2 eligibilityContext:(id)arg3 step:(id)arg4;
- (void).cxx_destruct;
@property(readonly, copy) NSArray *validators; // @synthesize validators=_validators;
- (id)evaluateForQP:(id)arg1 eligibilityContext:(id)arg2;
- (id)initWithEvaluatorType:(long long)arg1;

@end

