//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSArray;

@interface IGShoppingProductTaggingFlowCoordinator : NSObject
{
    IGUserSession *_userSession;
    NSArray *_sponsorPartners;
    long long _surfaceType;
    long long _currentStep;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sponsorPartners; // @synthesize sponsorPartners=_sponsorPartners;
@property(readonly, nonatomic) long long currentStep; // @synthesize currentStep=_currentStep;
- (_Bool)_isStepEligible:(long long)arg1;
- (void)_findCurrentStep;
- (_Bool)stepForward;
- (id)initWithUserSession:(id)arg1 sponsorPartners:(id)arg2 surfaceType:(long long)arg3;

@end
