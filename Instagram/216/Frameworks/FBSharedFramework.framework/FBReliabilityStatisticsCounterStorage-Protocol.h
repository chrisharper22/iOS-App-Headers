//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSMutableDictionary;

@protocol FBReliabilityStatisticsCounterStorage <NSObject>
- (void)clear;
- (NSArray *)allCounters;
- (void)overwriteStorageWithCounters:(NSArray *)arg1;
- (void)setCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 count:(int)arg3 datalossEnabledFunnels:(NSMutableDictionary *)arg4;
- (void)bumpCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 delta:(int)arg3;
- (void)bumpCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 delta:(int)arg3 datalossEnabledFunnels:(NSMutableDictionary *)arg4;
@end

