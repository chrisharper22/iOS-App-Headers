//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class NSArray, NSString;
@protocol IGFeedFilterType;

@interface IGTopicUserIntentTarget : NSObject <FBIntentTarget>
{
    id <IGFeedFilterType> _filter;
    NSArray *_relatedFilters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *relatedFilters; // @synthesize relatedFilters=_relatedFilters;
@property(readonly, nonatomic) id <IGFeedFilterType> filter; // @synthesize filter=_filter;
- (id)initWithFilter:(id)arg1 relatedFilters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

