//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGTailFetchSignalsValueProducerConfig : NSObject
{
    double _seenLoadingSpinnerScore;
    double _willFetchScore;
    double _didFetchScore;
    double _consumeFirstMediaScore;
    double _fetchedBeforeConsumedScore;
    struct _NSRange _workingRange;
}

@property(readonly, nonatomic) double fetchedBeforeConsumedScore; // @synthesize fetchedBeforeConsumedScore=_fetchedBeforeConsumedScore;
@property(readonly, nonatomic) double consumeFirstMediaScore; // @synthesize consumeFirstMediaScore=_consumeFirstMediaScore;
@property(readonly, nonatomic) double didFetchScore; // @synthesize didFetchScore=_didFetchScore;
@property(readonly, nonatomic) double willFetchScore; // @synthesize willFetchScore=_willFetchScore;
@property(readonly, nonatomic) double seenLoadingSpinnerScore; // @synthesize seenLoadingSpinnerScore=_seenLoadingSpinnerScore;
@property(readonly, nonatomic) struct _NSRange workingRange; // @synthesize workingRange=_workingRange;
- (id)initWithWorkingRange:(struct _NSRange)arg1 seenLoadingSpinnerScore:(double)arg2 willFetchScore:(double)arg3 didFetchScore:(double)arg4 consumeFirstMediaScore:(double)arg5 fetchedBeforeConsumedScore:(double)arg6;

@end
