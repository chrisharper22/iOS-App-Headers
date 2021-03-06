//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGEmptyFeedViewDelegate-Protocol.h"
#import "IGInsightsMediaThumbnailsSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGInsightsCombinedMediaGridModel, IGInsightsDateRange, IGInsightsGraphQLDataFetcher, IGInsightsLogger, IGInsightsLoggingData, IGInsightsNavigationService, IGListAdapter, IGUserSession, NSDate, NSString, UICollectionView;

@interface IGInsightsCombinedMediaGridViewController : IGViewController <IGEmptyFeedViewDelegate, IGInsightsMediaThumbnailsSectionControllerDelegate, IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    IGInsightsDateRange *_dateRange;
    IGInsightsGraphQLDataFetcher *_dataFetcher;
    IGInsightsCombinedMediaGridModel *_combinedMediaGridModel;
    _Bool _isLoading;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGInsightsNavigationService *_navigationService;
    NSDate *_startDateForLogging;
    IGInsightsLogger *_logger;
    IGInsightsLoggingData *_defaultLoggingData;
}

- (void).cxx_destruct;
- (void)insightsSectionController:(id)arg1 didSelectMediaWithIndex:(unsigned long long)arg2 view:(id)arg3;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)_logError:(id)arg1;
- (void)_logLoadingState;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)_handleFetchInsightsCompletedWithData:(id)arg1 error:(id)arg2;
- (void)_fetchData;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 dateRange:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

