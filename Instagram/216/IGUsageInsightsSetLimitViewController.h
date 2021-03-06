//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGRadioCellListModelSectionControllerDelegate-Protocol.h"

@class IGBottomButtonsView, IGListAdapter, IGRadioCellListModelSectionController, IGTableLayoutSpec, IGTimeSpentReminderModel, IGUsageInsightsLogger, IGUsageInsightsSetLimitViewModel, IGUserSession, NSString, UICollectionView, UIImpactFeedbackGenerator;

@interface IGUsageInsightsSetLimitViewController : IGViewController <IGListAdapterDataSource, IGRadioCellListModelSectionControllerDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    long long _entrypoint;
    IGUsageInsightsLogger *_logger;
    IGTimeSpentReminderModel *_reminder;
    CDUnknownBlockType _completion;
    IGUsageInsightsSetLimitViewModel *_viewModel;
    long long _selectedIndex;
    IGTableLayoutSpec *_layoutSpec;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGRadioCellListModelSectionController *_radioSectionController;
    IGBottomButtonsView *_bottomButtonsView;
    UIImpactFeedbackGenerator *_impactGenerator;
}

- (void).cxx_destruct;
- (void)_storeSelectedTimeInterval:(double)arg1;
- (void)_handleDismiss;
- (void)_updateRadioControllerSelection;
- (void)IGRadioCellListModelSectionControllerDidSelectItemAtIndex:(long long)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)modalSheetViewController;
- (void)configureWithReminder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 entrypoint:(long long)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

