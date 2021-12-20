//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGPostAnalyticsProvider-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGPostLogEventCounter, IGPostShareIntent, NSDate, NSMutableDictionary, NSNumber, NSString;
@protocol IGAnalyticsUploadWaterfall;

@interface IGPostLoggingContext : NSObject <IGPostAnalyticsProvider, NSCoding, NSCopying>
{
    id <IGAnalyticsUploadWaterfall> _waterfall;
    NSString *_postId;
    long long _dataType;
    NSMutableDictionary *_carouselItemUploadIdToDataType;
    long long _entryPointType;
    _Bool _highQuality;
    IGPostShareIntent *_shareIntent;
    CDStruct_1b6d18a9 _videoDuration;
    NSString *_analyticsModule;
    NSString *_cameraSessionId;
    NSDate *_creationDate;
    NSObject *_ingestUserFlowLoggingLock;
    _Bool _ingestUserFlowLoggingIsActive;
    NSNumber *_fromDraft;
    _Bool _isPanavision;
    _Bool _disableStepEvent;
    IGPostLogEventCounter *_eventCounter;
    long long _accountType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
- (void)createEventWithName:(id)arg1 logger:(id)arg2 preLogggingEventModification:(CDUnknownBlockType)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventCounter;
- (id)fromDraft;
- (_Bool)isPanavision;
- (void)associatedIngestUserFlowLoggingMarkInactive:(CDUnknownBlockType)arg1;
- (void)associatedIngestUserFlowLoggingMarkActive:(CDUnknownBlockType)arg1;
- (id)cameraSessionId;
- (CDStruct_1b6d18a9)videoDuration;
- (void)setVideoDuration:(CDStruct_1b6d18a9)arg1;
- (long long)dataTypeForCarouselUploadId:(id)arg1;
- (_Bool)uploadIdIsCarouselItem:(id)arg1;
- (void)setCarouselDataType:(long long)arg1 forUploadId:(id)arg2;
- (id)carouselDataTypes;
- (_Bool)isCarouselUpload:(id)arg1;
- (long long)dataType;
- (id)shareIntent;
- (_Bool)highQuality;
- (long long)entryPointType;
- (id)shareType;
- (id)postId;
@property(readonly, copy, nonatomic) NSString *waterfallId;
- (id)initWithWaterfall:(id)arg1 postId:(id)arg2 dataType:(long long)arg3 entryPointType:(long long)arg4 highQuality:(_Bool)arg5 shareIntent:(id)arg6 analyticsModule:(id)arg7 cameraSessionId:(id)arg8 accountType:(long long)arg9 isPanavision:(_Bool)arg10 fromDraft:(id)arg11 enableEventCounting:(_Bool)arg12 disableStepEvent:(_Bool)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

