//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FNFMpdTimelineEntry : NSObject
{
    NSURL *_mediaUrl;
    unsigned int _duration;
    unsigned int _repetition;
    int _mediaNumber;
    unsigned long long _time;
    NSString *_mediaTemplate;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *mediaTemplate; // @synthesize mediaTemplate=_mediaTemplate;
@property(readonly, nonatomic) int mediaNumber; // @synthesize mediaNumber=_mediaNumber;
@property(readonly, nonatomic) unsigned int repetition; // @synthesize repetition=_repetition;
@property(readonly, nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long time; // @synthesize time=_time;
- (id)mediaUrl;
- (id)initWithTime:(unsigned long long)arg1 duration:(unsigned int)arg2 repetition:(unsigned int)arg3 mediaNumber:(int)arg4;
- (id)initWithTime:(unsigned long long)arg1 duration:(unsigned int)arg2 mediaTemplate:(id)arg3 mediaNumber:(int)arg4;
- (id)initWithTime:(unsigned long long)arg1 duration:(unsigned int)arg2 mediaUrl:(id)arg3 mediaNumber:(int)arg4;
- (id)initWithTime:(unsigned long long)arg1 duration:(unsigned int)arg2 mediaUrl:(id)arg3;

@end

