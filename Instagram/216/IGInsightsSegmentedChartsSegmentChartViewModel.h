//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGInsightsChartViewModel, NSArray;

@interface IGInsightsSegmentedChartsSegmentChartViewModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGInsightsChartViewModel *_simple_chartViewModel;
    NSArray *_paged_pages;
}

+ (id)simpleWithChartViewModel:(id)arg1;
+ (id)pagedWithPages:(id)arg1;
- (void).cxx_destruct;
- (void)matchSimple:(CDUnknownBlockType)arg1 paged:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanSimple:(CDUnknownBlockType)arg1 paged:(CDUnknownBlockType)arg2;

@end

