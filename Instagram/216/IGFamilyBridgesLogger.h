//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGFamilyBridgesLogger : NSObject
{
}

+ (void)_logEvent:(id)arg1 entriesDict:(id)arg2 analyticsLogger:(id)arg3;
+ (void)_logOpenFamilyAppWithSourceSurface:(id)arg1 destType:(id)arg2 funnelId:(id)arg3 extraDataDict:(id)arg4 analyticsLogger:(id)arg5;
+ (id)generateFunnelId;
+ (void)logOpenFamilyAppWithSourceSurface:(id)arg1 destType:(id)arg2 funnelId:(id)arg3 analyticsLogger:(id)arg4;
+ (void)logOpenFamilyAppWithSourceSurface:(id)arg1 destType:(id)arg2 netegoTrackingToken:(id)arg3 netegoId:(id)arg4 funnelId:(id)arg5 analyticsLogger:(id)arg6;
+ (void)logOpenedFromFamilyAppWithOpenedUrl:(id)arg1 analyticsLogger:(id)arg2;

@end

