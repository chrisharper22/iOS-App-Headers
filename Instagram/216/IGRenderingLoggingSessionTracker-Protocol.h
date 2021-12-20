//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGRenderedComponentArray, NSArray, NSDictionary, NSMutableSet;

@protocol IGRenderingLoggingSessionTracker <NSObject>
- (NSArray *)missingComponents:(NSMutableSet *)arg1;
- (_Bool)didLogRenderingInfoForAllComponents:(NSMutableSet *)arg1;
- (NSDictionary *)renderingAnalyticsExtras;
- (void)addRenderedComponentArray:(IGRenderedComponentArray *)arg1;
@end

