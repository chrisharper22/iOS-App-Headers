//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFeedSectionPlaceholderProviding-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGListSingleSectionControllerDelegate-Protocol.h"
#import "IGShoppingSellerEphemeralCreatorMediaNetworkSourceListener-Protocol.h"

@class IGListAdapter, IGShoppingSellerManagementEphemeralCreatorMediaViewModel, IGShoppingSellerManagementStoryViewerPresenter, IGUserSession, NSString;
@protocol IGShoppingSellerManagementEphemeralCreatorMediaSectionControllerDelegate;

@interface IGShoppingSellerManagementEphemeralCreatorMediaSectionController : IGListSectionController <IGListAdapterDataSource, IGListSingleSectionControllerDelegate, IGListDisplayDelegate, IGShoppingSellerEphemeralCreatorMediaNetworkSourceListener, IGFeedSectionPlaceholderProviding>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    IGShoppingSellerManagementEphemeralCreatorMediaViewModel *_viewModel;
    IGShoppingSellerManagementStoryViewerPresenter *_storyPresenter;
    NSString *_module;
    id <IGShoppingSellerManagementEphemeralCreatorMediaSectionControllerDelegate> _delegate;
}

+ (id)defaultPlaceholderSpecWithContext:(id)arg1;
+ (id)placeholderSpecForObject:(id)arg1 withContext:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingSellerManagementEphemeralCreatorMediaSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ephemeralCreatorMediaNetworkSourceDidUpdate:(id)arg1 isInitialLoad:(_Bool)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)didSelectSectionController:(id)arg1 withObject:(id)arg2;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 module:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

