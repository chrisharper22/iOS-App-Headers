//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSundialAudioFeedPrefetchConfig, NSDate, NSMutableArray, NSString;

@interface IGSundialAudioFeedPrefetchScoreModel : NSObject
{
    IGSundialAudioFeedPrefetchConfig *_config;
    NSMutableArray *_trackedSignals;
    NSMutableArray *_pendingSignals;
    long long _score;
    NSString *_audioId;
    NSDate *_unlockDate;
    _Bool _locked;
}

- (void).cxx_destruct;
- (void)resetScore;
- (long long)score;
- (long long)recalculate;
- (unsigned long long)pendingSignalsCount;
- (void)addSignal:(unsigned long long)arg1;
- (id)audioId;
- (_Bool)isLocked;
- (void)lockWithTimeInterval:(double)arg1;
- (id)initWithAudioId:(id)arg1 config:(id)arg2;

@end

