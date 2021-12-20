//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGUserListSectionControllerFanClubAllowSubscribeDelegate-Protocol.h"

@class IGAsyncTask, IGBasicListViewController, IGFeedScrollViewAnnouncer, IGSpinnerLabelViewModel, IGUserSession, NSMutableOrderedSet, NSString;

@interface IGFanClubRemovedMemberListViewController : IGViewController <IGFeedScrollViewListener, IGListAdapterDataSource, IGUserListSectionControllerFanClubAllowSubscribeDelegate>
{
    IGUserSession *_userSession;
    IGBasicListViewController *_mainListViewController;
    NSMutableOrderedSet *_displayedUsers;
    IGAsyncTask *_memberRequest;
    IGSpinnerLabelViewModel *_spinnerModel;
    _Bool _shouldAddSpinner;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    NSString *_maxId;
    _Bool _moreAvailable;
}

- (void).cxx_destruct;
- (void)userListSectionController:(id)arg1 didAllowToSubscribe:(id)arg2 isSuccess:(_Bool)arg3;
- (void)_onRemovedMemberListRequestFailure:(id)arg1;
- (void)_onRemovedMemberListRequestSuccess:(id)arg1;
- (void)_fetchRemovedMemberList;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
