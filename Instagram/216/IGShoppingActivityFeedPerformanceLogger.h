//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPerformanceMarker, NSString;

@interface IGShoppingActivityFeedPerformanceLogger : NSObject
{
    NSString *_containerModule;
    NSString *_priorModule;
    NSString *_loadSource;
    IGPerformanceMarker *_ttiMarker;
}

- (void).cxx_destruct;
- (void)_endQPLMarkerWithActionId:(short)arg1;
- (void)_beginQPLMarkerWithMarkerId:(id)arg1;
- (void)markExit;
- (void)markPause;
- (void)markTTISuccess;
- (void)markTTIFailure;
@property(readonly, nonatomic) _Bool isActive;
- (void)markTTIBegin;
- (id)initWithContainerModule:(id)arg1 priorModule:(id)arg2 loadSource:(id)arg3;

@end
