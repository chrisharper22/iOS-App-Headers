//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface MOSAdaptiveImageDownloadScansProfileThresholdConfig : FBValueObject <NSCopying, NSCoding>
{
    long long _bandwidthThresholdInKilobytesPerSecond;
    NSString *_urlQueryParameterLowBandwidthKey;
    NSString *_urlQueryParameterLowBandwidthValue;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *urlQueryParameterLowBandwidthValue; // @synthesize urlQueryParameterLowBandwidthValue=_urlQueryParameterLowBandwidthValue;
@property(readonly, copy, nonatomic) NSString *urlQueryParameterLowBandwidthKey; // @synthesize urlQueryParameterLowBandwidthKey=_urlQueryParameterLowBandwidthKey;
@property(readonly, nonatomic) long long bandwidthThresholdInKilobytesPerSecond; // @synthesize bandwidthThresholdInKilobytesPerSecond=_bandwidthThresholdInKilobytesPerSecond;
- (id)initWithBandwidthThresholdInKilobytesPerSecond:(long long)arg1 urlQueryParameterLowBandwidthKey:(id)arg2 urlQueryParameterLowBandwidthValue:(id)arg3;

@end

