//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGListWorkingRangeHandler : NSObject
{
    struct unordered_set<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::allocator<_IGListWorkingRangeHandlerIndexPath>> _visibleSectionIndices;
    struct unordered_set<_IGListWorkingRangeHandlerSectionControllerWrapper, _IGListWorkingRangeHashID, std::equal_to<_IGListWorkingRangeHandlerSectionControllerWrapper>, std::allocator<_IGListWorkingRangeHandlerSectionControllerWrapper>> _workingRangeSectionControllers;
    long long _workingRangeSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long workingRangeSize; // @synthesize workingRangeSize=_workingRangeSize;
- (void)_updateWorkingRangesWithListAdapter:(id)arg1;
- (void)didEndDisplayingItemAtIndexPath:(id)arg1 forListAdapter:(id)arg2;
- (void)willDisplayItemAtIndexPath:(id)arg1 forListAdapter:(id)arg2;
- (id)initWithWorkingRangeSize:(long long)arg1;

@end

