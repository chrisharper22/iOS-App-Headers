//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"

@class IGBottomButtonsView, IGCoreTextView, IGMonetizationEligibilityEligibleViewModel, NSString, UIImageView, UILabel, UIScrollView, UIStackView;
@protocol IGMonetizationEligibilityEligibleViewDelegate;

@interface IGMonetizationEligibilityEligibleView : UIView <IGCoreTextLinkHandler>
{
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_title;
    IGCoreTextView *_descriptionTextView;
    UIView *_contentTopSeparator;
    UILabel *_tipsSectionTitle;
    UIStackView *_doTipsStack;
    UIStackView *_dontTipsStack;
    IGBottomButtonsView *_ctaButton;
    IGMonetizationEligibilityEligibleViewModel *_viewModel;
    id <IGMonetizationEligibilityEligibleViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMonetizationEligibilityEligibleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapCTAButton;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

