//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGInsightsNullStateSectionControllerDelegate-Protocol.h"
#import "IGInsightsUnitHeaderSectionControllerDelegate-Protocol.h"
#import "IGProfileInsightsChildViewController-Protocol.h"

@class IGInsightsAdapterDataSource, IGInsightsLogger, IGInsightsLoggingData, IGInsightsProfileFetchStatus, IGListAdapter, IGProfileActivityInsightsViewModelGenerator, IGUserSession, NSDate, NSString, UICollectionView;
@protocol IGProfileInsightsChildViewControllerDelegate;

@interface IGProfileActivityInsightsViewController : IGViewController <IGInsightsNullStateSectionControllerDelegate, IGInsightsUnitHeaderSectionControllerDelegate, IGProfileInsightsChildViewController>
{
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGInsightsAdapterDataSource *_dataSource;
    IGListAdapter *_listAdapter;
    IGProfileActivityInsightsViewModelGenerator *_viewModelGenerator;
    IGInsightsProfileFetchStatus *_fetchStatus;
    NSDate *_startDateForLogging;
    IGInsightsLogger *_logger;
    IGInsightsLoggingData *_defaultLoggingData;
    id <IGProfileInsightsChildViewControllerDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGProfileInsightsChildViewControllerDelegate> delegate; // @synthesize delegate;
- (void)_logTapActionWithActionState:(id)arg1 component:(id)arg2 parentUnit:(id)arg3 unit:(id)arg4;
- (void)_logWithBuilderBlock:(CDUnknownBlockType)arg1;
- (void)_logError:(id)arg1;
- (void)_logLoadingState;
- (void)_logUnitsDidAppear;
- (void)insightsSectionController:(id)arg1 didTapMoreButtonForIdentifier:(id)arg2;
- (void)insightsSectionController:(id)arg1 didTapInfoButtonForIdentifier:(id)arg2;
- (void)insightsNullStateSectionController:(id)arg1 didTapOnActionButton:(id)arg2 withViewModel:(id)arg3;
- (void)updateWithStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly) struct CGSize intrinsicContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

