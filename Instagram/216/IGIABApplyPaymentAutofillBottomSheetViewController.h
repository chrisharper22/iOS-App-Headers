//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGIABAutofillBottomSheetFooterSectionControllerDelegate-Protocol.h"
#import "IGImageTitleSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGTextViewSectionControllerDelegate-Protocol.h"

@class FBPaymentsW3CClientMaskedCard, IGIABAutofillPaymentBottomSheetViewModel, IGListAdapter, NSArray, NSString, UICollectionView;
@protocol IGIABApplyPaymentAutofillBottomSheetViewControllerDelegate;

@interface IGIABApplyPaymentAutofillBottomSheetViewController : IGViewController <IGListAdapterDataSource, IGIABAutofillBottomSheetFooterSectionControllerDelegate, IGImageTitleSectionControllerDelegate, IGTextViewSectionControllerDelegate, IGGestureHandler>
{
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    NSArray *_dataSource;
    NSArray *_paymentCards;
    FBPaymentsW3CClientMaskedCard *_selectedCard;
    id <IGIABApplyPaymentAutofillBottomSheetViewControllerDelegate> _delegate;
    unsigned long long _bottomSheetType;
    IGIABAutofillPaymentBottomSheetViewModel *_viewModel;
}

+ (double)viewControllerHeightWithViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)didSelectTextViewSectionController:(id)arg1;
- (void)textViewSectionController:(id)arg1 didTapOnNonLinkedString:(id)arg2 touchEvent:(unsigned long long)arg3;
- (void)textViewSectionController:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)textViewSectionController:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)footerSectionDidTapSecondaryButton;
- (void)footerSectionDidTapPrimaryButton;
- (void)imageTitleSectionController:(id)arg1 didSelectActionForViewModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (unsigned long long)userInteractionType;
- (void)viewWillLayoutSubviews;
- (id)initWithDelegate:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

