//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGEmptyFeedViewDelegate-Protocol.h>
#import <FBSharedFramework/IGListAdapterDataSource-Protocol.h>
#import <FBSharedFramework/IGListAdapterUpdateListener-Protocol.h>
#import <FBSharedFramework/IGNetworkSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGTextViewSectionControllerDelegate-Protocol.h>

@class IGEmptyFeedView, IGListAdapter, IGNetworkSource, IGShoppingPurchaseProtectionResponse, IGUserSession, NSString, UICollectionView;

@interface IGShoppingPurchaseProtectionViewController : IGViewController <IGEmptyFeedViewDelegate, IGListAdapterDataSource, IGListAdapterUpdateListener, IGNetworkSourceDelegate, IGTextViewSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGNetworkSource *_networkSource;
    IGShoppingPurchaseProtectionResponse *_response;
    IGEmptyFeedView *_emptyFeedView;
}

- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (void)textViewSectionController:(id)arg1 didTapOnNonLinkedString:(id)arg2 touchEvent:(unsigned long long)arg3;
- (void)textViewSectionController:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)textViewSectionController:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didSelectTextViewSectionController:(id)arg1;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)_createEmptyFeedViewIfNeeded;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3 requestTag:(id)arg4;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
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
