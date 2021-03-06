//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGDataUsageSession : NSObject
{
    _Bool _isOnWifi;
    unsigned long long _requestType;
    unsigned long long _behavior;
    NSString *_module;
    unsigned long long _bytesSent;
    unsigned long long _bytesReceived;
    long long _totalRequestsInBatch;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long totalRequestsInBatch; // @synthesize totalRequestsInBatch=_totalRequestsInBatch;
@property(readonly, nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(readonly, nonatomic) _Bool isOnWifi; // @synthesize isOnWifi=_isOnWifi;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (void)addBytesReceived:(unsigned long long)arg1 bytesSent:(unsigned long long)arg2;
- (id)initWithRequestType:(unsigned long long)arg1 behavior:(unsigned long long)arg2 isOnWifi:(_Bool)arg3 module:(id)arg4;

@end

