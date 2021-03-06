//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSArray, NSString;

@interface IGALTrackingContext : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_mediaMetricsContext_eventTraceId;
    NSString *_mediaMetricsContext_url;
    NSArray *_mediaMetricsContext_tracking;
    NSArray *_mediaMetricsContext_trackingNodes;
    _Bool _mediaMetricsContext_isSponsored;
    double _mediaMetricsContext_logTime;
    NSString *_externalNavContext_url;
    NSString *_externalNavContext_module;
    double _externalNavContext_logTime;
}

+ (id)mediaMetricsContextWithEventTraceId:(id)arg1 url:(id)arg2 tracking:(id)arg3 trackingNodes:(id)arg4 isSponsored:(_Bool)arg5 logTime:(double)arg6;
+ (id)externalNavContextWithUrl:(id)arg1 module:(id)arg2 logTime:(double)arg3;
- (void).cxx_destruct;
- (void)matchMediaMetricsContext:(CDUnknownBlockType)arg1 externalNavContext:(CDUnknownBlockType)arg2;

@end

