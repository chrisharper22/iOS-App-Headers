//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRTCVideoViewDelegate-Protocol.h"
#import "IGRTCVideoViewStallingControllerDelegate-Protocol.h"
#import "IGStallObserverDelegate-Protocol.h"

@class IGThreadSafeMutableSet, NSMapTable, NSMutableDictionary, NSString;
@protocol IGRTCVideoViewManagerDelegate;

@interface IGRTCVideoViewManager : NSObject <IGRTCVideoViewDelegate, IGRTCVideoViewStallingControllerDelegate, IGStallObserverDelegate>
{
    NSMutableDictionary *_managedViews;
    IGThreadSafeMutableSet *_notifiedVideoStreamIds;
    NSMutableDictionary *_stallingControllersForStreamIds;
    NSMutableDictionary *_nextFrameReceivedHandlers;
    NSMapTable *_streamIdForStallObserver;
    _Bool _useNewStallObserver;
    id <IGRTCVideoViewManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRTCVideoViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stallObserverDidResume:(id)arg1 stallDuration:(double)arg2;
- (void)stallObserverDidStall:(id)arg1;
- (void)videoViewStallingControllerDidResume:(id)arg1;
- (void)videoViewStallingControllerDidStall:(id)arg1;
- (void)videoViewDidReceiveFrame:(id)arg1;
- (void)addNextFrameReceivedHandler:(CDUnknownBlockType)arg1 forStreamId:(id)arg2;
- (id)getVideoViewForStreamId:(id)arg1;
- (void)cleanup;
- (void)removeVideoTrackForStreamId:(id)arg1;
- (void)addVideoTrack:(id)arg1 forStreamId:(id)arg2;
- (id)initWithNewStallObserver:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

