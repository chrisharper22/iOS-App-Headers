//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FNFSharedLoggingEvent : NSObject
{
    long long _videoID;
    long long _clientTimestampMs;
    long long _videoPosition;
    unsigned long long _eventName;
    NSString *_sessionValidationToken;
    Optional_008fc322 _initialProductExtras;
    Optional_269585c6 _dynamicProductExtras;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) Optional_008fc322 initialProductExtras; // @synthesize initialProductExtras=_initialProductExtras;
@property(readonly, nonatomic) Optional_269585c6 dynamicProductExtras; // @synthesize dynamicProductExtras=_dynamicProductExtras;
@property(readonly, nonatomic) NSString *sessionValidationToken; // @synthesize sessionValidationToken=_sessionValidationToken;
@property(readonly, nonatomic) unsigned long long eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) long long videoPosition; // @synthesize videoPosition=_videoPosition;
@property(readonly, nonatomic) long long clientTimestampMs; // @synthesize clientTimestampMs=_clientTimestampMs;
@property(readonly, nonatomic) long long videoID; // @synthesize videoID=_videoID;
- (id)initWithVideoID:(long long)arg1 eventName:(unsigned long long)arg2 initialProductExtras:(Optional_008fc322)arg3 dynamicProductExtras:(Optional_269585c6)arg4 sessionValidationToken:(id)arg5 videoPositionMs:(long long)arg6;

@end

