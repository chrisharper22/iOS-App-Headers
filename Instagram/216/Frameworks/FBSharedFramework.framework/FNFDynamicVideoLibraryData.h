//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface FNFDynamicVideoLibraryData : NSObject
{
    unsigned long long _state;
    NSNumber *_dvlStatusCode;
    NSNumber *_latestSegmentId;
    NSMutableDictionary *_representationBitrates;
    NSMutableDictionary *_representationLiveheads;
}

- (void).cxx_destruct;
- (id)listData;
- (_Bool)hasAnyData;
- (unsigned long long)state;
- (id)latestSegmentId;
- (id)liveheadForRepresentation:(id)arg1;
- (id)bandwidthForRepresentation:(id)arg1;
- (id)initWithState:(id)arg1 latestSegmentId:(id)arg2 liveHeads:(id)arg3 bitrates:(id)arg4 dvlStatusCode:(id)arg5;
- (id)initWithHeaders:(id)arg1;

@end

