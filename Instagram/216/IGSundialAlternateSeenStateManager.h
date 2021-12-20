//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSundialSeenStateManagingProtocol-Protocol.h"

@class FBTimer, IGObjectDiskStorage, IGSundialSeenStateUploader, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface IGSundialAlternateSeenStateManager : NSObject <IGSundialSeenStateManagingProtocol>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    IGObjectDiskStorage *_pendingSeenStateFile;
    IGSundialSeenStateUploader *_seenStateUploader;
    NSSet *_uploadingMediaIds;
    NSMutableSet *_uploadedMediaIds;
    FBTimer *_uploadTimer;
    _Bool _isNetworkReachable;
    NSSet *_pendingMediaIds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *pendingMediaIds; // @synthesize pendingMediaIds=_pendingMediaIds;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_writePendingMediaIdsToDisk:(id)arg1;
- (void)_didFailInWritingSeenStateForMediaIds:(id)arg1;
- (void)_didSucceedInWritingSeenStateForMediaIds:(id)arg1;
- (void)uploadSeenStateIfNecessary;
- (_Bool)haveSeenMedia:(id)arg1;
- (void)appendSeenState:(id)arg1;
- (void)flushDidSucceedForMediaIds:(id)arg1;
- (id)flushSeenState;
- (void)trackVideoWithMediaIdAsSeen:(id)arg1;
- (id)initWithNetworker:(id)arg1 diskManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
