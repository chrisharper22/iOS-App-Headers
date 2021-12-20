//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface IGAdPlatformSeenStatesTrackingModelBuilder : NSObject
{
    NSString *_mediaId;
    NSArray *_timespent;
    NSNumber *_maxPercentVisible;
    double _impressionTimestamp;
}

+ (id)adPlatformSeenStatesTrackingModelFromExistingAdPlatformSeenStatesTrackingModel:(id)arg1;
+ (id)adPlatformSeenStatesTrackingModel;
- (void).cxx_destruct;
- (id)withImpressionTimestamp:(double)arg1;
- (id)withMaxPercentVisible:(id)arg1;
- (id)withTimespent:(id)arg1;
- (id)withMediaId:(id)arg1;
- (id)build;

@end

