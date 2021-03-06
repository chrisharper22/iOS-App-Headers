//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGRTCCommonTrackStats-Protocol.h"

@class NSString;

@protocol IGRTCVideoStatsParser <IGRTCCommonTrackStats>
- (NSString *)bandwidthLimitedResolution;
- (NSString *)cpuLimitedResolution;
- (NSString *)qpSum;
- (NSString *)adaptationChanges;
- (NSString *)encodeUsagePercent;
- (NSString *)avgEncodeMs;
- (NSString *)framesEncoded;
- (NSString *)frameHeightInput;
- (NSString *)frameWidthInput;
- (NSString *)targetDelayMs;
- (NSString *)minPlayoutDelayMs;
- (NSString *)maxDecodeMs;
- (NSString *)framesDecoded;
- (NSString *)interframeDelayMax;
- (NSString *)renderDelayMs;
- (NSString *)nacksTransmitted;
- (NSString *)firsTransmitted;
- (NSString *)plisTransmitted;
- (NSString *)frameRateIO;
- (NSString *)frameRateDecoded;
- (NSString *)frameRateTransmitted;
- (NSString *)frameHeightTransmitted;
- (NSString *)frameWidthTransmitted;
- (NSString *)decodeMs;
- (NSString *)codecImplementationName;
@end

