//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

#import "IGDirectInboxPartnershipsHeaderBannerCellDelegate-Protocol.h"

@class IGDirectInboxPartnershipsHeaderBannerViewModel, IGUserSession, NSString;

@interface IGDirectInboxPartnershipsHeaderBannerCellSectionController : IGListBindingSingleSectionController <IGDirectInboxPartnershipsHeaderBannerCellDelegate>
{
    IGUserSession *_session;
    IGDirectInboxPartnershipsHeaderBannerViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGDirectInboxPartnershipsHeaderBannerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)didTapPartnershipMonetizationPoliciesLink:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)didDeselectItemWithCell:(id)arg1;
- (void)didSelectItemWithCell:(id)arg1;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

