//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGPBIAProxyProfileHeaderCellDelegate-Protocol.h"

@class IGPBIAProxyProfileHeaderViewModel, IGSeparatorSupplementaryViewSource, NSString;
@protocol IGPBIAProxyProfileHeaderSectionControllerDelegate, IGProfileLayoutMetrics;

@interface IGPBIAProxyProfileHeaderSectionController : IGListSectionController <IGPBIAProxyProfileHeaderCellDelegate>
{
    id <IGProfileLayoutMetrics> _layoutMetrics;
    IGPBIAProxyProfileHeaderViewModel *_viewModel;
    IGSeparatorSupplementaryViewSource *_separatorViewSource;
    id <IGPBIAProxyProfileHeaderSectionControllerDelegate> _delegate;
    _Bool _enableActionButton;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isActionButtonEnabled) _Bool enableActionButton; // @synthesize enableActionButton=_enableActionButton;
- (void)pbiaProxyProfileHeaderCellActionButtonDidTap:(id)arg1;
- (id)supplementaryViewSource;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithLayoutMetrics:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

