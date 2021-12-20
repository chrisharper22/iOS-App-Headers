//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPerformanceAnnotationLoggable-Protocol.h>

@class NSError, NSString;
@protocol IGPerformanceLoggerDelegate;

@protocol IGPerformanceLoggable <IGPerformanceAnnotationLoggable>
@property(nonatomic) __weak id <IGPerformanceLoggerDelegate> delegate;
- (_Bool)isActiveAndSampled;
- (_Bool)isActive;
- (void)drop;
- (void)endWithActionID:(short)arg1;
- (void)cancel;
- (void)failWithReason:(NSString *)arg1;
- (void)failWithError:(NSError *)arg1;
- (void)fail;
- (void)success;
- (void)addPointWithName:(NSString *)arg1 timestamp:(long long)arg2;
- (void)addPointWithName:(NSString *)arg1 dataString:(NSString *)arg2;
- (void)addPointWithName:(NSString *)arg1;
- (void)cleanupJoinInfoForComponentName:(NSString *)arg1 joinURLType:(unsigned long long)arg2;
- (void)registerJoinInfoForComponentName:(NSString *)arg1 joinURLType:(unsigned long long)arg2;
- (void)start;
@end

