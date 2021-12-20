//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGInsightsNullStateSectionControllerDelegate-Protocol.h"
#import "IGInsightsUnitHeaderSectionControllerDelegate-Protocol.h"
#import "IGTextViewSectionControllerDelegate-Protocol.h"

@class IGInsightsAdapterDataSource, IGInsightsGraphQLDataFetcher, IGInsightsLogger, IGInsightsLoggingData, IGInsightsPerfLogger, IGInsightsStoryInsightsData, IGInsightsStoryInsightsViewModelGenerator, IGListAdapter, IGMedia, IGUserSession, NSDate, NSString, UICollectionView;

@interface IGInsightsStoryInsightsNativeViewController : IGViewController <IGInsightsUnitHeaderSectionControllerDelegate, IGInsightsNullStateSectionControllerDelegate, IGTextViewSectionControllerDelegate>
{
    UICollectionView *_collectionView;
    IGInsightsAdapterDataSource *_dataSource;
    IGListAdapter *_listAdapter;
    IGUserSession *_userSession;
    IGMedia *_media;
    IGInsightsLogger *_logger;
    IGInsightsLoggingData *_defaultLoggingData;
    IGInsightsPerfLogger *_perfLogger;
    IGInsightsGraphQLDataFetcher *_dataFetcher;
    IGInsightsStoryInsightsData *_insightsData;
    IGInsightsStoryInsightsViewModelGenerator *_viewModelGenerator;
    _Bool _hasFetchedInsights;
    NSDate *_startDateForLogging;
}

- (void).cxx_destruct;
- (void)_logTapActionWithActionState:(id)arg1 component:(id)arg2 parentUnit:(id)arg3 unit:(id)arg4;
- (void)_logLoadingStateWithStartDate:(id)arg1;
- (void)_logError:(id)arg1;
- (void)_logWithBuilderBlock:(CDUnknownBlockType)arg1;
- (void)textViewSectionController:(id)arg1 didTapOnNonLinkedString:(id)arg2 touchEvent:(unsigned long long)arg3;
- (void)textViewSectionController:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)didSelectTextViewSectionController:(id)arg1;
- (void)textViewSectionController:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)insightsNullStateSectionController:(id)arg1 didTapOnActionButton:(id)arg2 withViewModel:(id)arg3;
- (void)insightsSectionController:(id)arg1 didTapMoreButtonForIdentifier:(id)arg2;
- (void)insightsSectionController:(id)arg1 didTapInfoButtonForIdentifier:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_fetchInsightsForMedia:(id)arg1;
- (id)initWithUserSession:(id)arg1 media:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

