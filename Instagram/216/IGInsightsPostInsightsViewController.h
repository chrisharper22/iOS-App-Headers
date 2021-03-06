//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGInsightsNullStateSectionControllerDelegate-Protocol.h"
#import "IGInsightsUnitHeaderSectionControllerDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGTextViewSectionControllerDelegate-Protocol.h"

@class IGInsightsAdapterDataSource, IGInsightsGraphQLDataFetcher, IGInsightsLogger, IGInsightsLoggingData, IGInsightsPerfLogger, IGInsightsPostInsightsData, IGInsightsPostInsightsViewModelGenerator, IGListAdapter, IGMedia, IGUserSession, NSDate, NSString, UICollectionView, UIViewController;

@interface IGInsightsPostInsightsViewController : IGViewController <IGInsightsNullStateSectionControllerDelegate, IGInsightsUnitHeaderSectionControllerDelegate, IGTextViewSectionControllerDelegate, IGGestureHandler, IGPartialModalSheetListener>
{
    UICollectionView *_collectionView;
    IGInsightsAdapterDataSource *_dataSource;
    IGListAdapter *_listAdapter;
    IGUserSession *_userSession;
    IGMedia *_media;
    IGInsightsGraphQLDataFetcher *_dataFetcher;
    IGInsightsPostInsightsData *_insightsData;
    IGInsightsPostInsightsViewModelGenerator *_viewModelGenerator;
    IGInsightsLogger *_logger;
    IGInsightsLoggingData *_defaultLoggingData;
    IGInsightsPerfLogger *_perfLogger;
    _Bool _hasFetchedInsights;
    _Bool _isFullscreen;
    NSDate *_startDateForLogging;
    _Bool _hasLoggedFullscreenImpression;
    _Bool _hasError;
    unsigned long long _currentPartialModalState;
    UIViewController *_partialModalSheetPresentingViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *partialModalSheetPresentingViewController; // @synthesize partialModalSheetPresentingViewController=_partialModalSheetPresentingViewController;
- (void)_logTapActionWithActionState:(id)arg1 component:(id)arg2 parentUnit:(id)arg3 unit:(id)arg4;
- (void)_logError:(id)arg1;
- (void)_logPartialStateDismissWithStartDate:(id)arg1;
- (void)_logFullScreenDismissWithStartDate:(id)arg1;
- (void)_logSwipeActionWithDirection:(id)arg1;
- (void)_logLoadingStateWithStartDate:(id)arg1;
- (void)_logWithBuilderBlock:(CDUnknownBlockType)arg1;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)textViewSectionController:(id)arg1 didTapOnNonLinkedString:(id)arg2 touchEvent:(unsigned long long)arg3;
- (void)textViewSectionController:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)didSelectTextViewSectionController:(id)arg1;
- (void)textViewSectionController:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)insightsNullStateSectionController:(id)arg1 didTapOnActionButton:(id)arg2 withViewModel:(id)arg3;
- (void)insightsSectionController:(id)arg1 didTapMoreButtonForIdentifier:(id)arg2;
- (void)insightsSectionController:(id)arg1 didTapInfoButtonForIdentifier:(id)arg2;
- (double)preferredInitialHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_handleFetchInsightsCompletedWithInsightsData:(id)arg1 error:(id)arg2;
- (void)_fetchInsightsForMedia:(id)arg1;
- (id)initWithUserSession:(id)arg1 media:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

