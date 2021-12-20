//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "QuickPromotion-Protocol.h"

@class IGQPClause, IGQPCreative, IGQPTemplate, NSArray, NSDate, NSString;

@interface IGQPPromotion : NSObject <QuickPromotion, NSCoding>
{
    _Bool _isExposureHoldout;
    _Bool _isServerForcePass;
    _Bool _shouldLogEligibilityWaterfall;
    NSString *_promotionID;
    IGQPCreative *_qpCreative;
    long long _maxImpressions;
    long long _priority;
    NSDate *_startTime;
    NSDate *_endTime;
    IGQPTemplate *_qpTemplate;
    NSArray *_triggers;
    NSString *_loggingData;
    IGQPClause *_contextualFilters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGQPClause *contextualFilters; // @synthesize contextualFilters=_contextualFilters;
@property(readonly, copy, nonatomic) NSString *loggingData; // @synthesize loggingData=_loggingData;
@property(readonly, nonatomic) _Bool shouldLogEligibilityWaterfall; // @synthesize shouldLogEligibilityWaterfall=_shouldLogEligibilityWaterfall;
@property(readonly, nonatomic) _Bool isServerForcePass; // @synthesize isServerForcePass=_isServerForcePass;
@property(readonly, nonatomic) _Bool isExposureHoldout; // @synthesize isExposureHoldout=_isExposureHoldout;
@property(readonly, copy, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(readonly, nonatomic) IGQPTemplate *qpTemplate; // @synthesize qpTemplate=_qpTemplate;
@property(readonly, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) long long maxImpressions; // @synthesize maxImpressions=_maxImpressions;
@property(readonly, nonatomic) IGQPCreative *qpCreative; // @synthesize qpCreative=_qpCreative;
@property(readonly, copy, nonatomic) NSString *promotionID; // @synthesize promotionID=_promotionID;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugInfo;
- (id)bloksVersionID;
- (id)templatename;
- (id)filters;
- (id)rootClause;
- (long long)clientTTLSeconds;
- (id)isValid;
- (id)initWithPromotionID:(id)arg1 qpCreative:(id)arg2 maxImpressions:(long long)arg3 priority:(long long)arg4 startTime:(id)arg5 endTime:(id)arg6 qpTemplate:(id)arg7 triggers:(id)arg8 isExposureHoldout:(_Bool)arg9 isServerForcePass:(_Bool)arg10 loggingData:(id)arg11 shouldLogEligibilityWaterfall:(_Bool)arg12 contextualFilters:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

