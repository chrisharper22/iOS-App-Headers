//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCacheEvictionLogger, IGHTTPResponse, IGNetworkLinkConditioner, IGSparseDiskCache, IGStreamingVideoCacheLogger, IGStreamingVideoCacheOutputStream, IGStreamingVideoCacheRequest, IGStreamingVideoMetaDataCacheEntry, IGVideoBandwithEstimateInformation, IGVideoCompetingRequestTracker, IGVideoConcurrentRequestTracker, NSString;
@protocol IGFNFStitchContextUpdater, IGRequestToken, IGStreamingVideoNetworkLoadingDelegate, IGUserLauncherSetProviding, OS_dispatch_queue;

@interface IGStreamingVideoNetworkDataLoader : NSObject
{
    IGStreamingVideoCacheRequest *_originalRequest;
    IGSparseDiskCache *_diskCache;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _requestBehavior;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    id <IGStreamingVideoNetworkLoadingDelegate> _delegate;
    _Bool _usingTollFree;
    IGStreamingVideoCacheLogger *_cacheDataLoadingLogger;
    IGCacheEvictionLogger *_cacheEvictionLogger;
    IGVideoBandwithEstimateInformation *_bandwithEstimateInformation;
    IGVideoConcurrentRequestTracker *_videoRequestTracker;
    IGVideoCompetingRequestTracker *_competingNetworkRequestTracker;
    double _requestQueuedTime;
    double _requestStartTime;
    double _timeToFirstByte;
    NSObject *_bweStatsLock;
    IGHTTPResponse *_response;
    id <IGRequestToken> _requestToken;
    IGStreamingVideoMetaDataCacheEntry *_metaDataEntry;
    _Bool _errorInDiskCacheStream;
    IGStreamingVideoCacheOutputStream *_outputStream;
    unsigned long long _totalBytesReceivedThisRequest;
    long long _numberOfRetries;
    unsigned long long _numberOfBytesWritten;
    NSString *_competingRequestTrackerId;
    _Bool _bandwidthEstimatorUpdated;
    IGNetworkLinkConditioner *_networkLinkConditioner;
    id <IGFNFStitchContextUpdater> _stitchContextUpdater;
}

- (void).cxx_destruct;
- (void)_logBandwidthReportForRequestWithQueuedTime:(double)arg1 startTime:(double)arg2 numberOfBytesDownloaded:(unsigned long long)arg3 numberOfRetries:(unsigned long long)arg4 numberOfCompetingRequests:(double)arg5;
- (void)_updateStitchContext;
- (void)_updateBandwidthEstimator;
- (void)_updateStatsWithReceivedBuffer:(const char *)arg1 length:(unsigned long long)arg2;
- (id)_urlRequestForRequestRange:(struct _NSRange)arg1;
- (void)_requestCompletedWithNetworkError:(id)arg1 diskCacheOutputStream:(id)arg2 request:(id)arg3;
- (void)_handleReceivedResponse:(id)arg1 requestRange:(struct _NSRange)arg2 diskCacheOutputStream:(id)arg3;
- (void)convertToTollFree;
- (void)setRequestBehavior:(unsigned long long)arg1;
- (void)cancelRequest;
- (void)loadDataFromNetworkForRange:(struct _NSRange)arg1;
- (id)initWithRequest:(id)arg1 requestBehavior:(unsigned long long)arg2 diskCache:(id)arg3 queue:(id)arg4 videoRequestTracker:(id)arg5 competingNetworkRequestTracker:(id)arg6 isTollFreeRequest:(_Bool)arg7 launcherSetProvider:(id)arg8 delegate:(id)arg9;

@end

