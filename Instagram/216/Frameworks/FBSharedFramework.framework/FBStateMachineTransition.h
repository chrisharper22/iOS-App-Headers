//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBStateMachineTransition : NSObject
{
    id _originState;
    id _destinationState;
}

+ (id)transitionFromState:(id)arg1 toState:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) id destinationState;
@property(readonly, copy, nonatomic) id originState;

@end

