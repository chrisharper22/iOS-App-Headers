//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFeaturedUserDismissedListener-Protocol.h"
#import "IGHScrollAYMFCellSectionControllerDelegate-Protocol.h"
#import "IGHScrollBannerCellDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGMultipleProfilesNavigationViewControllerDelegate-Protocol.h"

@class IGHScrollBannerCell, IGListAdapter, IGProfileChainingLogger, IGProfileChainingModel, IGUserSession, NSArray, NSString, UIColor;
@protocol IGFollowPeopleLoggerProtocol, IGProfileChainingSectionControllerDelegate, IGProfileChainingSectionControllerLoggingDelegate;

@interface IGProfileChainingSectionController : IGListSectionController <IGListDisplayDelegate, IGHScrollBannerCellDelegate, IGListAdapterDataSource, IGHScrollAYMFCellSectionControllerDelegate, IGListAdapterDelegate, IGFeaturedUserDismissedListener, IGMultipleProfilesNavigationViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGProfileChainingModel *_model;
    UIColor *_backgroundColor;
    NSArray *_cellClasses;
    IGListAdapter *_adapter;
    NSArray *_userInfos;
    id <IGFollowPeopleLoggerProtocol> _logger;
    id <IGProfileChainingSectionControllerDelegate> _delegate;
    NSString *_module;
    _Bool _findFriendsDisplayed;
    IGHScrollBannerCell *_bannerCell;
    IGProfileChainingLogger *_multipleProfileLogger;
    id <IGProfileChainingSectionControllerLoggingDelegate> _loggingDelegate;
}

+ (double)_heightForCellOfClass:(Class)arg1 width:(double)arg2 model:(id)arg3 userSession:(id)arg4;
+ (id)_cellClassesForModel:(id)arg1;
+ (double)heightForSectionWithWidth:(double)arg1 profileChainingModel:(id)arg2 userSession:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGProfileChainingSectionControllerLoggingDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
- (void)multipleProfilesNavigationViewController:(id)arg1 didProfileImpressionForUser:(id)arg2 startTime:(id)arg3;
- (void)multipleProfilesNavigationViewController:(id)arg1 didNavigateToIndex:(long long)arg2 user:(id)arg3;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)_removeChainingSuggestion:(id)arg1;
- (void)featuredUserDismissed:(id)arg1;
- (void)aymfSectionController:(id)arg1 seeAllButtonTapped:(id)arg2;
- (void)aymfSectionController:(id)arg1 followRequestButtonTappedWithAYMFCellType:(long long)arg2 userAction:(long long)arg3;
- (void)aymfSectionController:(id)arg1 shopButtonTappedWithAYMFCellType:(long long)arg2 profile:(id)arg3;
- (void)didScrollProfileUnitAYMFSectionController:(id)arg1;
- (void)aymfSectionControllerDidImportContacts:(id)arg1;
- (void)aymfSectionController:(id)arg1 connectToFBTappedWithAYMFCellType:(long long)arg2;
- (void)aymfSectionController:(id)arg1 followButtonTappedWithAYMFCellType:(long long)arg2 userAction:(long long)arg3;
- (void)aymfSectionController:(id)arg1 wasTappedWithAYMFCellType:(long long)arg2;
- (void)aymfSectionController:(id)arg1 didDismissWithAYMFCellType:(long long)arg2;
- (void)aymfSectionController:(id)arg1 closeFriendButtonTappedForUser:(id)arg2 didAdd:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)hScrollBannerCellDidTapMoreButton:(id)arg1;
- (void)hScrollBannerCellDidTapDismissButton:(id)arg1;
- (void)didTapActionButton:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)_navigateToDiscoverAccounts;
- (id)initWithUserSession:(id)arg1 model:(id)arg2 backgroundColor:(id)arg3 delegate:(id)arg4 module:(id)arg5;
- (id)initWithUserSession:(id)arg1 model:(id)arg2 delegate:(id)arg3 module:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

