//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCameraEffectContextSheetActionsSectionControllerDelegate-Protocol.h"
#import "IGContextSheetHeaderViewDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGCameraEffectBottomSheetConfiguration, IGContextSheetHeaderView, IGListAdapter, IGUserSession, NSString, UICollectionView;
@protocol IGCameraEffectContextSheetViewDelegate;

@interface IGCameraEffectContextSheetView : UIView <IGCameraEffectContextSheetActionsSectionControllerDelegate, IGContextSheetHeaderViewDelegate, IGListAdapterDataSource>
{
    id <IGCameraEffectContextSheetViewDelegate> _delegate;
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    UIView *_headerViewHorizontalLine;
    IGContextSheetHeaderView *_headerView;
    IGCameraEffectBottomSheetConfiguration *_config;
    NSString *_analyticsModule;
    _Bool _isShoppingItemSavedToWishlist;
    unsigned long long _saveState;
    unsigned long long _storyState;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 config:(id)arg2 userSession:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long storyState; // @synthesize storyState=_storyState;
@property(nonatomic) _Bool isShoppingItemSavedToWishlist; // @synthesize isShoppingItemSavedToWishlist=_isShoppingItemSavedToWishlist;
@property(nonatomic) unsigned long long saveState; // @synthesize saveState=_saveState;
@property(retain, nonatomic) IGContextSheetHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)_ringSpec;
- (void)cameraEffectActionsSectionControllerVideoCall:(id)arg1;
- (void)cameraEffectActionsSectionControllerViewEffectPage:(id)arg1;
- (void)cameraEffectActionsSectionControllerQRCode:(id)arg1;
- (void)cameraEffectActionsSectionControllerBrowseEmployeeEffectLink:(id)arg1;
- (void)cameraEffectActionsSectionControllerBrowseShareLink:(id)arg1;
- (void)cameraEffectActionsSectionControllerBrowseEffectGallery:(id)arg1;
- (void)cameraEffectActionsSectionControllerMoreFromCreator:(id)arg1;
- (void)cameraEffectActionsSectionControllerRemoveEffect:(id)arg1;
- (void)cameraEffectActionsSectionControllerReportEffect:(id)arg1;
- (void)cameraEffectActionsSectionControllerViewLicensing:(id)arg1;
- (void)cameraEffectActionsSectionControllerSaveToWishlist:(id)arg1;
- (void)cameraEffectActionsSectionControllerViewProduct:(id)arg1;
- (void)cameraEffectActionsSectionControllerSendTo:(id)arg1;
- (void)cameraEffectActionsSectionControllerSaveEffect:(id)arg1;
- (void)cameraEffectActionsSectionControllerTryIt:(id)arg1;
- (void)cameraEffectActionsSectionControllerNavigateToProfile:(id)arg1;
- (void)contextSheetHeaderViewDidPressFollowButton;
- (void)contextSheetHeaderViewDidPressTertiaryTitleLabel:(id)arg1;
- (void)contextSheetHeaderViewDidPressSubtitleLabel:(id)arg1;
- (void)contextSheetHeaderViewDidPressTitleLabel:(id)arg1;
- (void)contextSheetHeaderViewDidPressView:(id)arg1;
- (void)contextSheetHeaderViewDidPressImage:(id)arg1 profilePictureImageView:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)configure:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

