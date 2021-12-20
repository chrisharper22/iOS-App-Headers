//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRTCStatsListener-Protocol.h"

@class NSString;
@protocol IGRTCVideoCallSessionLogger;

@interface IGRTCStatsWaterfallLoggingAdapter : NSObject <IGRTCStatsListener>
{
    id <IGRTCVideoCallSessionLogger> _videoCallSessionLogger;
}

- (void).cxx_destruct;
- (void)didFetchLocalStats:(id)arg1 remoteStats:(id)arg2;
- (id)initWithVideoCallSessionLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

