//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGCoWatchableMedia;

@interface IGCoWatchItem : NSObject
{
    id <IGCoWatchableMedia> _media;
    duration_15f873c1 _time;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) duration_15f873c1 time; // @synthesize time=_time;
@property(readonly, nonatomic) id <IGCoWatchableMedia> media; // @synthesize media=_media;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoWatchableMedia:(id)arg1 time:(duration_15f873c1)arg2;

@end
