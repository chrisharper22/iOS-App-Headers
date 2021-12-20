//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGDirectVisualMessageActivityDataSource, IGListAdapter, IGRefreshControl, IGTapButton, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGDirectVisualMessageChronologicalActivityViewController : IGViewController <IGListAdapterDataSource, UIScrollViewDelegate>
{
    IGUserSession *_userSession;
    long long _mediaType;
    IGDirectVisualMessageActivityDataSource *_activityDataSource;
    _Bool _isGroupThread;
    NSArray *_activities;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGRefreshControl *_refreshControl;
    IGTapButton *_retryButton;
}

- (void).cxx_destruct;
- (long long)preferredTabBarBehavior;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_fetch;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)dismiss;
- (void)_setupCollectionViewAndListAdapter;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMediaType:(long long)arg1 userSession:(id)arg2 activityDataSource:(id)arg3 isGroupThread:(_Bool)arg4 analyticsModule:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

