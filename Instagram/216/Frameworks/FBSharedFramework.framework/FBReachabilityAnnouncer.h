//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBReachabilityMonitorDelegate-Protocol.h>
#import <FBSharedFramework/FBReachabilityQualityMonitorDelegate-Protocol.h>

@class FBReachabilityListenerAnnouncer, FBReachabilityQualityMonitor, NSArray, NSData, NSDictionary, NSString;
@protocol FBReachabilityMonitor, FBReachabilityQualityDelegate, OS_dispatch_queue;

@interface FBReachabilityAnnouncer : NSObject <FBReachabilityMonitorDelegate, FBReachabilityQualityMonitorDelegate>
{
    unsigned long long _currentReachabilityState;
    unsigned long long _previousReachabilityState;
    unsigned long long _backgroundedReachabilityState;
    unsigned long long _currentDownloadBandwidthState;
    unsigned long long _previousDownloadBandwidthState;
    unsigned long long _backgroundedDownloadBandwidthState;
    unsigned long long _currentUploadBandwidthState;
    unsigned long long _previousUploadBandwidthState;
    unsigned long long _backgroundedUploadBandwidthState;
    unsigned long long _currentLatencyState;
    unsigned long long _previousLatencyState;
    unsigned long long _backgroundedLatencyState;
    id <FBReachabilityMonitor> _ipv4ReachabilityMonitor;
    id <FBReachabilityMonitor> _ipv6ReachabilityMonitor;
    id <FBReachabilityMonitor> _networkPathMonitor;
    FBReachabilityQualityMonitor *_qualityMonitor;
    FBReachabilityListenerAnnouncer *_codeGenForegroundAnnouncer;
    FBReachabilityListenerAnnouncer *_codeGenBackgroundAnnouncer;
    NSArray *_cached_net_info_ifs;
    NSDictionary *_cached_net_info;
    _Bool _backgrounded;
    _Bool _issueReachabilityUpdateOnForeground;
    _Bool _issueDownloadBandwidthUpdateOnForeground;
    _Bool _issueUploadBandwidthUpdateOnForeground;
    _Bool _issueLatencyUpdateOnForeground;
    NSObject<OS_dispatch_queue> *_targetQueue;
    struct mutex _reachabilityLock;
    struct mutex _qualityLock;
    struct SharedMutexImpl<false, void, std::atomic, folly::SharedMutexPolicyDefault> _netInfoLock;
    _Bool _networkPathMonitorEnabled;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool networkPathMonitorEnabled; // @synthesize networkPathMonitorEnabled=_networkPathMonitorEnabled;
- (void)latencyEstimateChanged:(double)arg1 isFallback:(_Bool)arg2;
- (void)uploadBandwidthEstimateChanged:(double)arg1 isFallback:(_Bool)arg2;
- (void)downloadBandwidthEstimateChanged:(double)arg1 isFallback:(_Bool)arg2;
- (void)reachabilityStateChanged;
- (void)removeListener:(id)arg1;
- (void)addListenerHandler:(id)arg1 receiveBackgroundUpdates:(_Bool)arg2;
- (void)addListener:(id)arg1 receiveBackgroundUpdates:(_Bool)arg2;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) _Bool connectedToVPN;
- (void)_syncNetInfoFromApple;
@property(readonly, nonatomic) NSString *networkName;
@property(readonly, nonatomic) NSData *networkSSID;
@property(readonly, nonatomic) NSString *networkBSSID;
- (id)_firstValueForNetInfoKey:(id)arg1;
@property(readonly, nonatomic) id <FBReachabilityQualityDelegate> qualityDelegate;
@property(readonly, nonatomic) unsigned long long currentLatencyState;
@property(readonly, nonatomic) struct FBQualityEstimate currentLatencyEstimateDetail;
@property(readonly, nonatomic) double currentLatencyEstimate;
@property(readonly, nonatomic) unsigned long long currentUploadBandwidthState;
@property(readonly, nonatomic) struct FBQualityEstimate currentUploadBandwidthEstimateDetail;
@property(readonly, nonatomic) double currentUploadBandwidthEstimate;
@property(readonly, nonatomic) unsigned long long currentDownloadBandwidthState;
@property(readonly, nonatomic) struct FBQualityEstimate currentDownloadBandwidthEstimateDetail;
@property(readonly, nonatomic) double currentDownloadBandwidthEstimate;
@property(readonly, nonatomic) unsigned long long currentReachabilityState;
- (void)didEnterBackgroundHandler;
- (void)didEnterBackground;
- (void)didBecomeActiveHandler;
- (void)didBecomeActive;
- (id)initWithCodeGenForegroundAnnouncer:(id)arg1 codeGenBackgroundAnnouncer:(id)arg2 targetQueue:(id)arg3 ipv4ReachabilityMonitorFactory:(CDUnknownBlockType)arg4 ipv6ReachabilityMonitorFactory:(CDUnknownBlockType)arg5 networkPathMonitorFactory:(CDUnknownBlockType)arg6 qualityMonitorFactory:(CDUnknownBlockType)arg7 notificationCenter:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

