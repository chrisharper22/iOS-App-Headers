//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGVideoPlaybackWatchTimeCollector : NSObject
{
    double _aggregateWatchTime;
    long long _numberOfPlaybackFragments;
}

@property(readonly, nonatomic) long long numberOfPlaybackFragments;
@property(readonly, nonatomic) double watchTime;
- (void)addPlaybackFragmentWithCurrentPosition:(double)arg1 lsp:(double)arg2 loopCount:(long long)arg3 duration:(double)arg4;
- (id)init;

@end

