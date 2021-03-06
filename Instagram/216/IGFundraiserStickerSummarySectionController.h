//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFundraiserStickerSummaryCellDelegate-Protocol.h"

@class IGFundraiserStickerViewerListSummaryModel, IGUserSession, NSString;
@protocol IGFundraiserStickerSummarySectionControllerDelegate;

@interface IGFundraiserStickerSummarySectionController : IGListSectionController <IGFundraiserStickerSummaryCellDelegate>
{
    IGFundraiserStickerViewerListSummaryModel *_fundraiserSummaryModel;
    IGUserSession *_userSession;
    id <IGFundraiserStickerSummarySectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFundraiserStickerSummarySectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fundraiserStickerSummaryCellDidTapAmountInfoIcon:(id)arg1;
- (void)fundraiserStickerSummaryCellDidTapSayThanksButton:(id)arg1;
- (void)fundraiserStickerSummaryCellDidTapBeneficiaryUsername:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

