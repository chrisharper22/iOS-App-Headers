//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGAnalyticsEvent, NSArray, NSString;

@protocol IGAnalyticsLoggerBatched <NSObject>
@property(readonly, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *previousSessionID;
- (void)uploadEvents;
- (void)appendEvents:(NSArray *)arg1;
- (void)logTimeSpentWithTimeStamp:(double)arg1;
- (void)endSession;
- (void)beginSessionWithUserID:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)enableLogFileCompression;
- (void)logEvent:(IGAnalyticsEvent *)arg1;
@end
