//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGCoreTextNonLinkHandler-Protocol.h"

@class IGShoppingConsumptionFeedItemLogger, IGShoppingPDPSellerBadgeViewModel, IGUserSession, NSString;

@interface IGShoppingPDPSellerBadgeSectionController : IGListSectionController <IGCoreTextLinkHandler, IGCoreTextNonLinkHandler>
{
    IGShoppingPDPSellerBadgeViewModel *_model;
    IGUserSession *_userSession;
    IGShoppingConsumptionFeedItemLogger *_logger;
}

- (void).cxx_destruct;
- (void)coreTextViewDidTapOnNonLinkedString:(id)arg1 touchEvent:(unsigned long long)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithSellerBadgeViewModel:(id)arg1 session:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

