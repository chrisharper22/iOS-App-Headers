//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGTVAnalyticsModuleSuffix, IGTVDestinationEntryPoint, IGUser, NSString;
@protocol IGTVChannelDataSourceType;

@interface IGTVSeriesDataSourceUserIntentTarget : NSObject <FBIntentTarget>
{
    id <IGTVChannelDataSourceType> _dataSource;
    IGUser *_user;
    IGTVAnalyticsModuleSuffix *_analyticsModuleSuffix;
    NSString *_seriesEntryPoint;
    NSString *_destinationSessionID;
    IGTVDestinationEntryPoint *_destinationEntryPoint;
    long long _component;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long component; // @synthesize component=_component;
@property(readonly, nonatomic) IGTVDestinationEntryPoint *destinationEntryPoint; // @synthesize destinationEntryPoint=_destinationEntryPoint;
@property(readonly, nonatomic) NSString *destinationSessionID; // @synthesize destinationSessionID=_destinationSessionID;
@property(readonly, nonatomic) NSString *seriesEntryPoint; // @synthesize seriesEntryPoint=_seriesEntryPoint;
@property(readonly, nonatomic) IGTVAnalyticsModuleSuffix *analyticsModuleSuffix; // @synthesize analyticsModuleSuffix=_analyticsModuleSuffix;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) id <IGTVChannelDataSourceType> dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithDataSource:(id)arg1 user:(id)arg2 analyticsModuleSuffix:(id)arg3 seriesEntryPoint:(id)arg4 destinationSessionID:(id)arg5 destinationEntryPoint:(id)arg6 component:(long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

