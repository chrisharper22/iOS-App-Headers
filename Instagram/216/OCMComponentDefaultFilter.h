//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OCMComponentFilterProtocol-Protocol.h"

@class NSMutableArray, NSString, OCMEKSource;
@protocol OCMControllerProtocol;

@interface OCMComponentDefaultFilter : NSObject <OCMComponentFilterProtocol>
{
    id <OCMControllerProtocol> _context;
    OCMEKSource *_filtersChangeEvents;
    NSMutableArray *_filterObjects;
}

- (void).cxx_destruct;
- (void)replaceFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)replaceFilter:(id)arg1 withFilter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAllFiltersWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeFilterAtIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeFilters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeFilter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertFilter:(id)arg1 atIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addFilters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFilter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentFilteredFilters;
- (id)currentFilters;
- (void)exportFilterConfigsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearInMemoryCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)setFilters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)filtersChangeEvents;
- (void)_sendOutEventWithType:(unsigned long long)arg1 filters:(id)arg2 index:(unsigned long long)arg3;
- (void)willDetachWithContext:(id)arg1;
- (void)didAttachWithContext:(id)arg1;
- (long long)supportedControllerStates;
- (id)dependentComponentIDs;
- (id)componentID;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

