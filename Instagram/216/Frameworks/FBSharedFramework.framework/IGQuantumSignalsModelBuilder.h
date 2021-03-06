//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGQuantumSignalsCTAModelBuilder, IGQuantumSignalsLikeStatesModelBuilder, IGQuantumSignalsSeenStatesModelBuilder, IGQuantumSignalsXOutsModelBuilder;

@interface IGQuantumSignalsModelBuilder : NSObject
{
    IGQuantumSignalsCTAModelBuilder *_ctaModelBuilder;
    IGQuantumSignalsLikeStatesModelBuilder *_likeStatesBuilder;
    IGQuantumSignalsSeenStatesModelBuilder *_seenStatesBuilder;
    IGQuantumSignalsXOutsModelBuilder *_xoutsBuilder;
}

- (void).cxx_destruct;
- (id)buildXOutsModelWithContainerModule:(id)arg1 inventorySource:(id)arg2 authorId:(id)arg3 itemId:(id)arg4 itemType:(unsigned long long)arg5 signalType:(unsigned long long)arg6 mediaIds:(id)arg7 xoutTimeStamp:(double)arg8 xoutMediaId:(id)arg9 reason:(id)arg10;
- (id)buildSeenStatesSignalWithItemId:(id)arg1 mediaId:(id)arg2 containerModule:(id)arg3 timespent:(double)arg4 maxPercentVisible:(id)arg5 itemType:(unsigned long long)arg6 signalType:(unsigned long long)arg7 metaIds:(id)arg8 sponsoredItemId:(id)arg9 inventorySource:(id)arg10;
- (id)buildLikeStateSignalWithItemId:(id)arg1 authorId:(id)arg2 containerModule:(id)arg3 inventorySource:(id)arg4 timestamp:(double)arg5 itemType:(unsigned long long)arg6 mediaIds:(id)arg7 tapMediaId:(id)arg8 isLike:(_Bool)arg9;
- (id)buildClickCTASignalWithItemId:(id)arg1 authorId:(id)arg2 containerModule:(id)arg3 inventorySource:(id)arg4 timestamp:(double)arg5 itemType:(unsigned long long)arg6 mediaIds:(id)arg7 tapMediaId:(id)arg8;
- (id)init;

@end

