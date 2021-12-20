//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <FBSharedFramework/IGCoreTextLinkHandler-Protocol.h>
#import <FBSharedFramework/IGCoreTextNonLinkHandler-Protocol.h>

@class NSString;
@protocol IGTextViewItemViewModelProtocol, IGTextViewSectionControllerDelegate;

@interface IGTextViewSectionController : IGListSectionController <IGCoreTextLinkHandler, IGCoreTextNonLinkHandler>
{
    id <IGTextViewItemViewModelProtocol> _viewModel;
    id <IGTextViewSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTextViewSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <IGTextViewItemViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
- (void)coreTextViewDidTapOnNonLinkedString:(id)arg1 touchEvent:(unsigned long long)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

