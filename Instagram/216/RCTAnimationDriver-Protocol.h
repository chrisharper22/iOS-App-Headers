//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, RCTValueAnimatedNode;

@protocol RCTAnimationDriver <NSObject>
@property(readonly, nonatomic) _Bool animationHasFinished;
@property(readonly, nonatomic) _Bool animationHasBegun;
@property(readonly, nonatomic) RCTValueAnimatedNode *valueNode;
@property(readonly, nonatomic) NSNumber *animationId;
- (void)resetAnimationConfig:(NSDictionary *)arg1;
- (void)stopAnimation;
- (void)stepAnimationWithTime:(double)arg1;
- (void)startAnimation;
- (id)initWithId:(NSNumber *)arg1 config:(NSDictionary *)arg2 forNode:(RCTValueAnimatedNode *)arg3 callBack:(void (^)(NSArray *))arg4;
@end
