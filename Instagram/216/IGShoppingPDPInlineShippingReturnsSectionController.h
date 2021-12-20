//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSectionController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGListBindingSectionControllerDataSource-Protocol.h"

@class IGShoppingPDPInlineShippingReturnsViewModel, IGUserSession, NSString;

@interface IGShoppingPDPInlineShippingReturnsSectionController : IGListBindingSectionController <IGCoreTextLinkHandler, IGListBindingSectionControllerDataSource>
{
    IGUserSession *_userSession;
    IGShoppingPDPInlineShippingReturnsViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)sectionController:(id)arg1 viewModelsForObject:(id)arg2;
- (struct CGSize)sectionController:(id)arg1 sizeForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)sectionController:(id)arg1 cellForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)dataSource;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

