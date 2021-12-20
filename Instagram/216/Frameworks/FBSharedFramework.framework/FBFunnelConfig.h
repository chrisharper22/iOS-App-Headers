//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBFunnelConfig : NSObject
{
    _Bool _shouldEndOnBackgrounding;
    _Bool _enableFunnelPseudoEnding;
    _Bool _reuseFunnelIfExists;
    _Bool _shouldEnableFunnelLevelDataLoss;
    _Bool _shouldEnableContinuousFlushing;
    long long _maxFunnelActions;
    double _timeout;
    double _timeoutSinceStart;
    unsigned long long _version;
}

@property(readonly, nonatomic) _Bool shouldEnableContinuousFlushing; // @synthesize shouldEnableContinuousFlushing=_shouldEnableContinuousFlushing;
@property(readonly, nonatomic) _Bool shouldEnableFunnelLevelDataLoss; // @synthesize shouldEnableFunnelLevelDataLoss=_shouldEnableFunnelLevelDataLoss;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) double timeoutSinceStart; // @synthesize timeoutSinceStart=_timeoutSinceStart;
@property(readonly, nonatomic) _Bool reuseFunnelIfExists; // @synthesize reuseFunnelIfExists=_reuseFunnelIfExists;
@property(readonly, nonatomic) _Bool enableFunnelPseudoEnding; // @synthesize enableFunnelPseudoEnding=_enableFunnelPseudoEnding;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) long long maxFunnelActions; // @synthesize maxFunnelActions=_maxFunnelActions;
@property(readonly, nonatomic) _Bool shouldEndOnBackgrounding; // @synthesize shouldEndOnBackgrounding=_shouldEndOnBackgrounding;
- (id)initWithShouldEndOnBackgrounding:(_Bool)arg1 timeout:(double)arg2 enableFunnelPseudoEnding:(_Bool)arg3 reuseFunnelIfExists:(_Bool)arg4 timeoutSinceStart:(double)arg5 version:(unsigned long long)arg6 shouldEnableFunnelLevelDataLoss:(_Bool)arg7 shouldEnableContinuousFlushing:(_Bool)arg8 maxFunnelActions:(long long)arg9;

@end

