//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkStatChangeProvider-Protocol.h>

@class FBExponentialGeometricMovingAverage, NSLock, NSMutableArray, NSString;
@protocol IGNetworkBandwidthEstimatorLegacyProtocol, IGNetworkStatTimer;

@interface IGNetworkStat : NSObject <IGNetworkStatChangeProvider>
{
    NSMutableArray *_rates;
    unsigned long long _insertionIndex;
    double _lastCaptureTime;
    unsigned long long _captureBytes;
    unsigned long long _previousCaptureBytes;
    double _currentAverage;
    double _averagedSum;
    long long _samples;
    id <IGNetworkStatTimer> _sampler;
    long long _currentRate;
    NSMutableArray *_estimatorRates;
    long long _estimatorIndex;
    NSLock *_estimatorLock;
    id <IGNetworkBandwidthEstimatorLegacyProtocol> _bandwidthEstimator;
    FBExponentialGeometricMovingAverage *_averageBandwidth;
    FBExponentialGeometricMovingAverage *_averageLatency;
    CDUnknownBlockType _transferRateStatusChangeBlock;
}

+ (id)sharedStat;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType transferRateStatusChangeBlock; // @synthesize transferRateStatusChangeBlock=_transferRateStatusChangeBlock;
- (double)getAverageLatency;
- (void)addLatency:(double)arg1;
- (double)getAverageBandwidth;
- (void)_addBandwidthWithBytes:(unsigned long long)arg1 downloadDuration:(double)arg2;
- (long long)mostRecentWeightedAverageTransferRate;
- (id)mostRecentTransferRateString;
- (double)mostRecentBayesianAverageTransferRate;
- (long long)mostRecentTransferRate;
- (double)mostRecentAverageTransferRate;
- (void)addResponseSize:(unsigned long long)arg1 requestType:(unsigned long long)arg2 downloadDuration:(double)arg3;
- (void)addTransferData:(unsigned long long)arg1;
- (double)_averageTransferRate;
- (void)_addTransferRate:(double)arg1;
- (void)_startSampling;
- (void)_stopSampling;
- (void)_sample;
- (void)_notifyForNetworkStatChange;
- (id)initWithTimerGenerator:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
