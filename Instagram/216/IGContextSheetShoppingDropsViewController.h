//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGContextSheetHeaderViewDelegate-Protocol.h"
#import "IGContextSheetProductActionsSectionControllerDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGContextSheetHeaderView, IGContextSheetHeaderViewModel, IGListAdapter, IGMedia, IGProductItem, IGSaveProductLogger, IGSessionTracker, IGShoppingSaveController, IGShoppingStoryDestination, IGShoppingStoryProductCollection, IGUserSession, NSDictionary, NSString, UICollectionView, UILabel, UIView;
@protocol IGContextSheetProductViewControllerDelegate;

@interface IGContextSheetShoppingDropsViewController : IGViewController <IGListAdapterDataSource, IGContextSheetHeaderViewDelegate, IGContextSheetProductActionsSectionControllerDelegate, IGGestureHandler>
{
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGUserSession *_userSession;
    IGProductItem *_productItem;
    _Bool _isDropsReminder;
    UIView *_horizontalLine;
    IGContextSheetHeaderView *_headerView;
    UILabel *_dropsReminderExplanation;
    IGMedia *_media;
    NSString *_mediaId;
    IGSaveProductLogger *_saveLogger;
    NSDictionary *_loggingExtras;
    IGShoppingSaveController *_shoppingSaveController;
    NSString *_priorModule;
    IGContextSheetHeaderViewModel *_headerViewModel;
    IGShoppingStoryProductCollection *_productCollection;
    IGShoppingStoryDestination *_shoppingDestination;
    IGSessionTracker *_shoppingSessionTracker;
    id <IGContextSheetProductViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGContextSheetProductViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_headerViewLayoutSpec;
- (void)contextSheetProductActionsSectionControllerDidSelectShareDropsSticker:(id)arg1;
- (void)contextSheetHeaderViewDidPressFollowButton;
- (void)contextSheetHeaderViewDidPressTertiaryTitleLabel:(id)arg1;
- (void)contextSheetHeaderViewDidPressView:(id)arg1;
- (void)contextSheetHeaderViewDidPressSubtitleLabel:(id)arg1;
- (void)contextSheetHeaderViewDidPressTitleLabel:(id)arg1;
- (void)contextSheetHeaderViewDidPressImage:(id)arg1 profilePictureImageView:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)analyticsModule;
- (void)tryCollectionToggleSave;
- (void)tryToggleSave;
- (double)productSheetViewHeight;
- (void)viewDidLayoutSubviews;
- (id)initWithShoppingDestination:(id)arg1 isDropsReminder:(_Bool)arg2 media:(id)arg3 mediaId:(id)arg4 userSession:(id)arg5 saveLogger:(id)arg6 loggingExtras:(id)arg7 priorModule:(id)arg8 shoppingSessionTracker:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

