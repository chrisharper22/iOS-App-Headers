//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectPendingInboxRankedMetadata, IGDirectPendingInboxTimeSortedMetadata;

@interface IGDirectPendingInboxMetadataBuilder : NSObject
{
    IGDirectPendingInboxTimeSortedMetadata *_timeSortedMetadata;
    IGDirectPendingInboxRankedMetadata *_rankedMetadata;
}

+ (id)directPendingInboxMetadataFromExistingDirectPendingInboxMetadata:(id)arg1;
+ (id)directPendingInboxMetadata;
- (void).cxx_destruct;
- (id)withRankedMetadata:(id)arg1;
- (id)withTimeSortedMetadata:(id)arg1;
- (id)build;

@end
