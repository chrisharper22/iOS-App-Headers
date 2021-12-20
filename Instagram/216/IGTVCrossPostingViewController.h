//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFacebookPagesDataSourceDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGTVCrossPostingFBConnectSectionControllerDelegate-Protocol.h"
#import "IGTVCrossPostingFBPageSectionControllerDelegate-Protocol.h"

@class FBSDKAccessToken, IGBusinessSelectionFlowHeaderView, IGFacebookPagesDataSource, IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGTVCrossPostingViewController : IGViewController <IGFacebookPagesDataSourceDelegate, IGTVCrossPostingFBConnectSectionControllerDelegate, IGTVCrossPostingFBPageSectionControllerDelegate, IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    IGBusinessSelectionFlowHeaderView *_headerView;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGFacebookPagesDataSource *_pagesDataSource;
    FBSDKAccessToken *_facebookAccessToken;
    NSArray *_pageResults;
    _Bool _isFetchingPages;
    long long _selectedIndex;
}

- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)fbPageSectionControllerDidSelect:(id)arg1;
- (void)fBConnectSectionControllerDidTap:(id)arg1;
- (void)pagesDataSource:(id)arg1 didReceiveError:(id)arg2;
- (void)pagesDataSource:(id)arg1 didLoadPages:(id)arg2;
- (void)_updateDoneButton;
- (void)_fetchPages;
- (_Bool)_isLoggedInToFacebook;
- (void)_doneButtonTapped;
- (void)_cancelButtonTapped;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

