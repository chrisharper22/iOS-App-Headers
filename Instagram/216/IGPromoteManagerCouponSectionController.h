//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

#import "IGPromoteManagerCouponViewCellDelegate-Protocol.h"

@class IGPromoteManagerCouponViewModel, IGUserSession, NSString;
@protocol IGPromoteManagerCouponSectionControllerDelegate;

@interface IGPromoteManagerCouponSectionController : IGListBindingSingleSectionController <IGPromoteManagerCouponViewCellDelegate>
{
    IGUserSession *_userSession;
    IGPromoteManagerCouponViewModel *_viewModel;
    id <IGPromoteManagerCouponSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteManagerCouponSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGPromoteManagerCouponViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (void)didTapEnrollCoupon;
- (void)didTapOpenPromoteMediaPicker;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
