//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/MOSAdaptiveImageDownloadStrategyProtocol-Protocol.h>

@class NSDictionary, NSString;
@protocol MOSAdaptiveImageBandwidthProvider;

@interface MOSAdaptiveImageDownloadSingleBandwidthThresholdPJPEGStrategy : NSObject <MOSAdaptiveImageDownloadStrategyProtocol>
{
    id <MOSAdaptiveImageBandwidthProvider> _bandwidthProvider;
    NSDictionary *_scansProfileThresholdConfigs;
}

- (void).cxx_destruct;
- (id)queryForNetworkConditionsAndScanProfile:(id)arg1 options:(CDStruct_6eb6aa4a)arg2;
- (id)urlForImageURL:(id)arg1 scanProfile:(id)arg2 options:(CDStruct_6eb6aa4a)arg3;
- (id)initWithBandwidthProvider:(id)arg1 scansProfileThresholdConfigs:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
