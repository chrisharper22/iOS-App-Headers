//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAutoupdaterDriverDelegate-Protocol.h"
#import "FBAutoupdaterFeedDelegate-Protocol.h"

@class FBAutoupdaterDriver, FBAutoupdaterHost, FBAutoupdaterUpdateCheckConfig, FBTimer, NSDate, NSFileManager, NSOperationQueue, NSString;
@protocol FBAutoupdaterDelegate, FBAutoupdaterFeed, FBAutoupdaterVersionComparator;

@interface FBAutoupdater : NSObject <FBAutoupdaterFeedDelegate, FBAutoupdaterDriverDelegate>
{
    NSFileManager *_fileManager;
    _Bool _serviceIsRunning;
    _Bool _fetchInProgress;
    FBTimer *_legacyFetchTimer;
    FBTimer *_updateCheckTriggerTimer;
    NSOperationQueue *_delegateQueue;
    double _minimumCheckInterval;
    double _maximumCheckInterval;
    _Bool _retryWithFullUpdateWhenDeltaFailure;
    id <FBAutoupdaterDelegate> _delegate;
    id <FBAutoupdaterVersionComparator> _versionComparator;
    id <FBAutoupdaterFeed> _feed;
    FBAutoupdaterHost *_host;
    FBAutoupdaterDriver *_driver;
    double _checkInterval;
    NSDate *_lastCheckDate;
    FBAutoupdaterUpdateCheckConfig *_updateCheckConfig;
    NSString *_otaVersion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *otaVersion; // @synthesize otaVersion=_otaVersion;
@property(retain, nonatomic) FBAutoupdaterUpdateCheckConfig *updateCheckConfig; // @synthesize updateCheckConfig=_updateCheckConfig;
@property(retain, nonatomic) NSDate *lastCheckDate; // @synthesize lastCheckDate=_lastCheckDate;
@property(nonatomic) double checkInterval; // @synthesize checkInterval=_checkInterval;
@property(retain, nonatomic) FBAutoupdaterDriver *driver; // @synthesize driver=_driver;
@property(retain, nonatomic) FBAutoupdaterHost *host; // @synthesize host=_host;
@property(retain, nonatomic) id <FBAutoupdaterFeed> feed; // @synthesize feed=_feed;
@property(retain, nonatomic) id <FBAutoupdaterVersionComparator> versionComparator; // @synthesize versionComparator=_versionComparator;
@property(nonatomic) __weak id <FBAutoupdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearOTAUpdateCheckHistoryData;
- (double)intervalSinceLastSuccessfulDownload;
- (_Bool)autoupdaterDriver:(id)arg1 shouldRetryWithFullUpdateAfterDeltaUpdateFailure:(id)arg2;
- (_Bool)autoupdaterDriver:(id)arg1 shouldAllowCellularAccessForUpdate:(id)arg2;
- (id)autoupdaterFeedOverrideReleaseID;
- (void)autoupdaterFeed:(id)arg1 didFail:(id)arg2;
- (void)autoupdaterFeed:(id)arg1 didFinishLoadingUpdate:(id)arg2;
- (void)_cleanUpOldUpdates;
- (void)_finishedFetch;
- (void)_failLoadingUpdateWithMessage:(id)arg1;
- (void)_failLoadingUpdateWithError:(id)arg1;
- (void)_checkTimerTriggered;
- (void)_refreshLegacyTimerIfPossible;
- (_Bool)_shouldInstallUpdate:(id)arg1;
- (id)activeUpdateWithError:(id *)arg1;
- (id)appliedUpdateWithError:(id *)arg1;
- (_Bool)verifyInstallPreconditionsForUpdate:(id)arg1;
- (void)processUpdateInformation:(id)arg1;
- (_Bool)shouldAllowCellularDownloadForUpdate:(id)arg1;
- (void)fetchUpdate;
- (void)setRetryFullUpdateWhenDeltaFailure:(_Bool)arg1;
- (void)setMaximumUpdateCheckInterval:(double)arg1;
- (void)setMinimumUpdateCheckInterval:(double)arg1;
- (void)backoffCheckingInterval;
- (void)checkForUpdate;
- (void)startServiceWithOtaVersion:(id)arg1;
- (_Bool)serviceIsRunning;
- (void)stopService;
- (void)startService;
- (id)initWithDelegate:(id)arg1 host:(id)arg2 delegateQueue:(id)arg3 feed:(id)arg4 driver:(id)arg5 updateCheckConfig:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

