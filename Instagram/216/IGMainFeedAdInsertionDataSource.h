//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAdInsertionDataSource-Protocol.h"

@class IGFeedNetworkSource, NSString;

@interface IGMainFeedAdInsertionDataSource : NSObject <IGAdInsertionDataSource>
{
    NSString *_analyticsModule;
    IGFeedNetworkSource *_feedNetworkSource;
}

- (void).cxx_destruct;
- (id)allSurfaceDataSourceItems;
- (long long)lastSeenSponsoredItemIndexWithItemType:(unsigned long long)arg1 currentIndex:(long long)arg2;
- (long long)lastFirstAdPodAdInsertionIndex;
- (long long)focusedIndexforInsertion;
- (id)createSurfaceAdRequestParams;
- (id)adPlatformAnalyticsModule;
- (long long)adInsertionSurfaceEntryIndex;
- (long long)adInsertionCurrentPageIndex;
- (id)adPlatformSurfaceLoggingExtraForSponsoredItem:(id)arg1;
- (id)initWithAnalyticsModule:(id)arg1 feedNetworkSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

