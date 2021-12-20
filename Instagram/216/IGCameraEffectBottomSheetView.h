//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCameraEffectBottomSheetHeaderViewDelegate-Protocol.h"

@class IGCameraEffectBottomSheetHeaderView, IGCameraEffectBottomSheetViewModel, IGImageView, IGQRCodeView, IGStackView, IGStoryViewerBottomSheetIconAndLabelView, NSString;
@protocol IGCameraEffectBottomSheetViewDelegate;

@interface IGCameraEffectBottomSheetView : UIView <IGCameraEffectBottomSheetHeaderViewDelegate>
{
    id <IGCameraEffectBottomSheetViewDelegate> _delegate;
    IGCameraEffectBottomSheetViewModel *_viewModel;
    IGImageView *_profileImageView;
    UIView *_separator;
    IGQRCodeView *_embeddedQRCodeView;
    IGStackView *_actionStackView;
    IGStoryViewerBottomSheetIconAndLabelView *_tryItView;
    IGStoryViewerBottomSheetIconAndLabelView *_moreByView;
    IGStoryViewerBottomSheetIconAndLabelView *_browseView;
    IGStoryViewerBottomSheetIconAndLabelView *_effectPageView;
    IGStoryViewerBottomSheetIconAndLabelView *_licensingView;
    IGStoryViewerBottomSheetIconAndLabelView *_reportView;
    IGStoryViewerBottomSheetIconAndLabelView *_removeView;
    IGStoryViewerBottomSheetIconAndLabelView *_moreView;
    IGStoryViewerBottomSheetIconAndLabelView *_saveView;
    IGStoryViewerBottomSheetIconAndLabelView *_sendToView;
    IGStoryViewerBottomSheetIconAndLabelView *_saveToWishlistView;
    IGStoryViewerBottomSheetIconAndLabelView *_viewProductView;
    IGStoryViewerBottomSheetIconAndLabelView *_qrCodeView;
    IGStoryViewerBottomSheetIconAndLabelView *_videoCallView;
    _Bool _isShoppingItemSavedToWishlist;
    IGCameraEffectBottomSheetHeaderView *_headerView;
    unsigned long long _saveState;
}

+ (_Bool)_shouldHideActionsForViewModel:(id)arg1;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 viewModel:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShoppingItemSavedToWishlist; // @synthesize isShoppingItemSavedToWishlist=_isShoppingItemSavedToWishlist;
@property(nonatomic) unsigned long long saveState; // @synthesize saveState=_saveState;
@property(retain, nonatomic) IGCameraEffectBottomSheetHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)_didTapVideoCall;
- (void)_didTapQRCode;
- (void)_didTapViewProduct;
- (void)_didTapSaveToWishlist;
- (void)_didTapSendTo;
- (void)_didTapEffectPage;
- (void)_didTapSave;
- (void)_didTapMore;
- (void)_didTapReportButton;
- (void)_didTapLicensingButton;
- (void)_didTapTryIt:(id)arg1;
- (void)_didTapRemoveButton;
- (void)_didTapBrowse;
- (void)_didTapMoreBy;
- (void)cameraEffectAttributionViewDidTapProfile:(id)arg1;
- (void)cameraEffectAttributionViewDidTapEffectIcon:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long storyState;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
