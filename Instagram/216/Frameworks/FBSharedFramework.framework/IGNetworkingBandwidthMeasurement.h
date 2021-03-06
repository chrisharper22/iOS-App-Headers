//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGNetworkingBandwidthMeasurement : FBValueObject <NSCopying, NSCoding>
{
    long long _bytes;
    double _milliseconds;
}

@property(readonly, nonatomic) double milliseconds; // @synthesize milliseconds=_milliseconds;
@property(readonly, nonatomic) long long bytes; // @synthesize bytes=_bytes;
- (id)initWithBytes:(long long)arg1 milliseconds:(double)arg2;

@end

