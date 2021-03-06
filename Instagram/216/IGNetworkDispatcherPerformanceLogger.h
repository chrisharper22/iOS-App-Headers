//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNetworkDispatcherPerformanceLogging-Protocol.h"

@class NSMapTable, NSString;

@interface IGNetworkDispatcherPerformanceLogger : NSObject <IGNetworkDispatcherPerformanceLogging>
{
    NSMapTable *_requestMarkerMap;
}

- (void).cxx_destruct;
- (void)markRequestDidCancel:(id)arg1;
- (void)markRequestDidFail:(id)arg1;
- (void)markRequestDidSucceed:(id)arg1;
- (void)markRequest:(id)arg1 withResponseSize:(unsigned long long)arg2;
- (void)markRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)markRequestDidStart:(id)arg1;
- (void)startMarkerForRequest:(id)arg1 policy:(id)arg2;
- (id)initWithSampleRate:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

