//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface FBAnalyticsUpload : NSObject
{
    NSData *_serializedUploadData;
    NSString *_serializedUploadString;
    struct FBStructuredLogUploadMetadata _logUploadMetadata;
    NSMutableArray *_serializedAnalyticsEventStrings;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *serializedAnalyticsEventStrings; // @synthesize serializedAnalyticsEventStrings=_serializedAnalyticsEventStrings;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *eventsInUpload;
@property(readonly, nonatomic) struct FBStructuredLogUploadMetadata *logUploadMetadata;
@property(readonly, nonatomic) unsigned long long retryCount;
@property(readonly, nonatomic) _Bool isMultiBatch;
@property(readonly, nonatomic) unsigned long long numberOfAnalyticsBatches;
@property(readonly, nonatomic) unsigned long long numberOfAnalyticsEvents;
- (id)serializedUploadString;
@property(readonly, nonatomic) NSData *serializedUploadData;
- (unsigned long long)incrementRetryCount;
- (id)initWithSerializedUploadString:(id)arg1 logUploadMetadata:(struct FBStructuredLogUploadMetadata)arg2;
- (id)initWithSerializedUploadData:(id)arg1 logUploadMetadata:(struct FBStructuredLogUploadMetadata)arg2;

@end

