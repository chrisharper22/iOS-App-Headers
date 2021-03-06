//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashTrackEntryContaining-Protocol.h>

@class NSArray, NSString;

@interface FNFDashTrackEntryContainer : NSObject <FNFDashTrackEntryContaining>
{
    NSArray *_timelineEntries;
    NSString *_urlTemplate;
    vector_cd3186ef _logicalIndexLookup;
    vector_b42bd36b _logicalTimeLookup;
    int _sequenceCount;
    _Bool _hasRepetition;
    _Bool _isPredictive;
    unsigned long long _averageSegmentDuration;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isPredictive;
- (id)urlTemplate;
- (unsigned long long)averageSegmentDuration;
- (int)physicalIndexForLogicalIndex:(int)arg1;
- (id)physicalTimelineEntries;
- (unsigned long long)relativeStartTimeForEntryAtIndex:(int)arg1;
- (int)sequenceIndexForRelativeTime:(unsigned long long)arg1;
- (id)timelineEntryAtIndex:(int)arg1;
- (id)lastEntry;
- (id)firstEntry;
- (int)count;
- (id)initWithTimelineEntries:(id)arg1 mediaUrlTemplate:(id)arg2 isPredictive:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

