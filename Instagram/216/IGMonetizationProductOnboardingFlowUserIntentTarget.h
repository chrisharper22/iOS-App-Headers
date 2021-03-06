//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class NSString, UIViewController;

@interface IGMonetizationProductOnboardingFlowUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _presentModally;
    UIViewController *_presentingViewController;
    long long _flowType;
    long long _origin;
    long long _productType;
    NSString *_programType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool presentModally; // @synthesize presentModally=_presentModally;
@property(readonly, nonatomic) NSString *programType; // @synthesize programType=_programType;
@property(readonly, nonatomic) long long productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) long long flowType; // @synthesize flowType=_flowType;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)initWithPresentingViewController:(id)arg1 flowType:(long long)arg2 origin:(long long)arg3 productType:(long long)arg4 programType:(id)arg5 presentModally:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

