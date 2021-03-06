//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol IGAnalyticsConfiguration <NSObject>
- (NSDictionary *)fbAnalyticsCoreLoggerExperimentValues;
- (_Bool)fbAnalyticsCoreEnabled;
- (NSArray *)dynoStatsTags;
- (long long)dropLargeEventsThreshold;
- (_Bool)dropLargeEventsEnabled;
- (long long)maxMultiBatchFileSize;
- (_Bool)multiBatchEnabled;
- (_Bool)httpBodyCompressionEnabled;
- (_Bool)compressionEnabled;
- (long long)retryDelayTimeInSeconds;
- (_Bool)waitForTasksToCompleteOnTermination;
- (_Bool)stripNonJSON;
- (_Bool)uploadLogsAfterCleanup;
- (long long)periodicUploadInterval;
- (_Bool)retryUploadIndefinitelyForCertainErrors;
- (_Bool)useSharedContainer;
- (float)postCleanupRetentionRatio;
- (long long)maxNumberOfRetries;
- (long long)logFileBatchSize;
- (long long)maxNumberOfLogFiles;
- (NSString *)userID;
- (NSString *)deviceID;
- (NSString *)appID;
- (NSString *)clientToken;
- (NSString *)key;
@end

