//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGInsightsChartViewDelegate-Protocol.h"

@class IGUserSession, NSArray, NSString;

@interface IGActivityInsightsSurfaceTopicsSectionController : IGListGenericSectionController <IGInsightsChartViewDelegate>
{
    IGUserSession *_userSession;
    NSArray *_dataPoints;
}

- (void).cxx_destruct;
- (void)chartView:(id)arg1 didSelectDataPointAtIndex:(unsigned long long)arg2;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

