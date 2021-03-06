//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGTVProfileSortAndFilterBottomSheetViewControllerDelegate-Protocol.h"
#import "IGTVSeriesProfileListViewControllerDelegate-Protocol.h"

@class IGNavigationController, IGTVDestinationLoggingContext, IGTVProfileSortAndFilterBottomSheetViewController, IGTVSeriesProfileListViewController, IGUser, IGUserSession, NSString;
@protocol IGTVProfileSortAndFilterContainerViewControllerDelegate;

@interface IGTVProfileSortAndFilterContainerViewController : IGViewController <IGTVProfileSortAndFilterBottomSheetViewControllerDelegate, IGTVSeriesProfileListViewControllerDelegate>
{
    IGTVDestinationLoggingContext *_loggingContext;
    IGUserSession *_userSession;
    IGUser *_user;
    unsigned long long _sortType;
    id <IGTVProfileSortAndFilterContainerViewControllerDelegate> _delegate;
    _Bool _hasPostLiveItems;
    IGTVProfileSortAndFilterBottomSheetViewController *_sortAndFilterBottomSheetViewController;
    IGNavigationController *_containerNavigationController;
    IGTVSeriesProfileListViewController *_seriesListBottomSheetViewController;
}

- (void).cxx_destruct;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersNavigationBarDividerHidden;
- (void)seriesProfileListViewController:(id)arg1 didSelectSeriesChannelDataSource:(id)arg2;
- (void)profileSortAndFilterViewControllerDidTapSeriesRow:(id)arg1;
- (void)profileSortAndFilterViewController:(id)arg1 didTapSortType:(unsigned long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 user:(id)arg2 sortType:(unsigned long long)arg3 delegate:(id)arg4 hasPostLiveItems:(_Bool)arg5 loggingContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

