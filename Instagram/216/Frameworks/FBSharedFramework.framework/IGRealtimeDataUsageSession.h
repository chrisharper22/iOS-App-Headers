//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGRealtimeDataUsageSession : NSObject
{
    _Bool _isOnWifi;
    NSString *_topic;
    unsigned long long _bytesSent;
    unsigned long long _bytesReceived;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) _Bool isOnWifi; // @synthesize isOnWifi=_isOnWifi;
- (void)addBytesReceived:(unsigned long long)arg1 bytesSent:(unsigned long long)arg2;
- (id)initWithTopic:(id)arg1 isOnWifi:(_Bool)arg2;

@end

