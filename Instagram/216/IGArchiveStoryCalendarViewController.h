//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGArchiveStoryPresenterDelegate-Protocol.h"
#import "IGCalendarViewCellBinder-Protocol.h"
#import "IGDayCellDelegate-Protocol.h"
#import "IGMediaDeletedListener-Protocol.h"
#import "IGMediaShellGalleryControllerDelegate-Protocol.h"
#import "IGStoryDataControllerStoryItemListener-Protocol.h"
#import "IGTabControlSegment-Protocol.h"

@class IGArchiveLoadingPillController, IGArchiveStoryPresenter, IGCalendarViewDataSource, IGMediaShellGalleryController, IGUserSession, NSArray, NSIndexPath, NSMutableDictionary, NSMutableSet, NSString, UICollectionView;

@interface IGArchiveStoryCalendarViewController : IGViewController <IGArchiveStoryPresenterDelegate, IGMediaShellGalleryControllerDelegate, IGStoryDataControllerStoryItemListener, IGCalendarViewCellBinder, IGDayCellDelegate, IGMediaDeletedListener, IGTabControlSegment>
{
    IGUserSession *_userSession;
    double _contentTopInset;
    IGCalendarViewDataSource *_calendarViewDataSource;
    UICollectionView *_collectionView;
    IGMediaShellGalleryController *_shellController;
    NSMutableDictionary *_reelDates;
    NSString *_launchReelPKAfterFetch;
    NSString *_viewerFocusedReelPK;
    NSIndexPath *_tappedDayCellIndexPath;
    NSMutableDictionary *_mediaIdToReelId;
    NSMutableSet *_reelPksWithDeletedMedia;
    NSArray *_reelPksInViewer;
    IGArchiveStoryPresenter *_archiveStoryPresenter;
    IGArchiveLoadingPillController *_loadingPillController;
}

- (void).cxx_destruct;
- (void)_resetTappedCellIfNeeded;
- (id)fallbackIcon;
- (id)title;
- (void)archiveStoryPresenter:(id)arg1 didTapViewDayForStoryViewer:(id)arg2;
- (id)dismissingToViewForArchiveStoryPresenter:(id)arg1;
- (void)didDismissArchiveStoryPresenter:(id)arg1;
- (void)archiveStoryPresenter:(id)arg1 didPresentStoryItem:(id)arg2;
- (void)archiveStoryPresenter:(id)arg1 didFocusonReelWithPK:(id)arg2 forStoryViewer:(id)arg3;
- (void)archiveStoryPresenter:(id)arg1 didFinishStoryViewer:(id)arg2;
- (void)archiveStoryPresenter:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (void)mediaShellController:(id)arg1 loadingGalleryDidFailWithError:(id)arg2;
- (void)mediaShellControllerDidLoadGallery:(id)arg1;
- (void)storyDataController:(id)arg1 didReturnNoStoryItemResultsForReelPK:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(id)arg1 fetchItemsDidFailForReelPK:(id)arg2 error:(id)arg3 refreshType:(long long)arg4 updateDuration:(double)arg5;
- (void)storyDataController:(id)arg1 didUpdateReel:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)mediaItemDeleted:(id)arg1 storyReelPK:(id)arg2;
- (void)bindDayCell:(id)arg1 toModel:(id)arg2 withCalendarEntries:(id)arg3;
- (void)bindSpacerCell:(id)arg1 toModel:(id)arg2;
- (void)bindDayHeaderCell:(id)arg1 toModel:(id)arg2;
- (void)bindMonthHeaderCell:(id)arg1 toModel:(id)arg2;
- (double)_dayDimension:(id)arg1;
- (struct CGSize)sizeForDay:(id)arg1;
- (struct CGSize)sizeForSpacer:(id)arg1;
- (struct CGSize)sizeForDayHeader:(id)arg1;
- (struct CGSize)sizeForMonthHeader:(id)arg1;
- (id)reuseIdentifierForModel:(id)arg1;
- (void)dayCellWasTapped:(id)arg1;
- (void)_launchReel:(id)arg1;
- (void)_preloadAndLaunch:(id)arg1 cell:(id)arg2 indexPath:(id)arg3;
- (void)_recordMediaInReelPk:(id)arg1;
- (_Bool)_isClientRemovedReelPk:(id)arg1;
@property(readonly, nonatomic) IGArchiveLoadingPillController *loadingPillController;
- (long long)preferredTabBarBehavior;
- (void)_updateCalendar:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 contentTopInset:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

