//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAutoupdaterDelegate-Protocol.h"
#import "FBAutoupdaterDriverProgressDelegate-Protocol.h"

@class FBAutoupdater, FBAutoupdaterCompositeLogger, FBTimer, NSString;
@protocol FBAutoupdaterReactServiceDelegate;

@interface FBAutoupdaterReactService : NSObject <FBAutoupdaterDriverProgressDelegate, FBAutoupdaterDelegate>
{
    NSString *_nativeBundleVersion;
    FBTimer *_backgroundTimer;
    _Bool _needBackgroundUpdate;
    FBAutoupdaterCompositeLogger *_compositeLogger;
    _Bool _startupOptimization;
    _Bool _useQPLLogging;
    FBAutoupdater *_autoupdater;
    NSString *_lastUpdateErrorMessage;
    id <FBAutoupdaterReactServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useQPLLogging; // @synthesize useQPLLogging=_useQPLLogging;
@property(nonatomic) __weak id <FBAutoupdaterReactServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *lastUpdateErrorMessage; // @synthesize lastUpdateErrorMessage=_lastUpdateErrorMessage;
@property(readonly, nonatomic) FBAutoupdater *autoupdater; // @synthesize autoupdater=_autoupdater;
- (id)_normalizeReactBundleVersion:(id)arg1;
- (void)showUpdateProcessInStatusBar:(id)arg1;
- (id)overrideReleaseIDWitAutoupdater:(id)arg1;
- (void)autoupdaterStartedCheckingOTAUpdate:(id)arg1;
- (void)autoupdaterDidFinishCheckWithoutUpdate:(id)arg1;
- (void)autoupdater:(id)arg1 didFailLoadingUpdateWithError:(id)arg2;
- (void)autoupdater:(id)arg1 didFinishLoadingUpdate:(id)arg2 willContinueToDownload:(_Bool)arg3;
- (void)autoupdaterDidSkipOTAUpdateCheck:(id)arg1;
- (void)autoupdaterDriver:(id)arg1 didCancel:(id)arg2;
- (void)autoupdaterDriver:(id)arg1 didFailUpdate:(id)arg2 error:(id)arg3;
- (void)autoupdaterDriverDidRemoveAllInactiveUpdatesAndResetActiveUpdate:(id)arg1;
- (void)autoupdaterDriver:(id)arg1 didProcessUpdate:(id)arg2;
- (void)autoupdaterDriver:(id)arg1 didFinishVerifyingUpdate:(id)arg2;
- (void)autoupdaterDriver:(id)arg1 didFinishDeltaPatchingUpdate:(id)arg2;
- (void)autoupdaterDriver:(id)arg1 didFinishUnarchivingUpdate:(id)arg2;
- (void)autoupdaterDriver:(id)arg1 didFinishDownloadingUpdate:(id)arg2;
- (void)autoupdaterDriver:(id)arg1 didStartDownloadingUpdate:(id)arg2 expectedLength:(long long)arg3;
- (void)forceRefresh;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (id)nextActiveReactBundleVersion;
- (id)currentActiveReactBundleVersion;
- (id)expectedReactBundleVersion;
- (void)removeAllUpdatesIfPossible;
- (void)didActivateResourceAfterLockingUpdate;
- (void)didRequestReactResource;
- (void)checkForUpdate;
- (void)stopService;
- (void)startService;
- (void)setAllowDownloadDelta:(_Bool)arg1;
- (void)_didActivateUpdate:(id)arg1;
- (id)initWithHost:(id)arg1 feed:(id)arg2 loggerBlocks:(id)arg3 updateCheckConfig:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

