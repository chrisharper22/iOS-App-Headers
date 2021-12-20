//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGMonetizationEligibilityViolationViewDelegate-Protocol.h"

@class IGCoreTextView, IGMonetizationEligibilityNotEligibleViewModel, IGTextButton, NSArray, NSString, UIImageView, UILabel, UIScrollView;
@protocol IGMonetizationEligibilityNotEligibleViewDelegate;

@interface IGMonetizationEligibilityNotEligibleView : UIView <IGCoreTextLinkHandler, IGMonetizationEligibilityViolationViewDelegate>
{
    UIScrollView *_contentScrollView;
    UIImageView *_imageView;
    UILabel *_title;
    UILabel *_descriptionLabel;
    IGCoreTextView *_eligibilityStandardsView;
    UILabel *_appealLabel;
    UIView *_contentTopSeparator;
    UILabel *_violationsSectionTitle;
    NSArray *_violationViews;
    UILabel *_appealabilityExplanationLabel;
    IGTextButton *_appealButton;
    NSArray *_violations;
    IGMonetizationEligibilityNotEligibleViewModel *_viewModel;
    id <IGMonetizationEligibilityNotEligibleViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMonetizationEligibilityNotEligibleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_createAppealButtonIfNecessary;
- (void)_updateAppealButtonWithButtonState:(long long)arg1 explanation:(id)arg2;
- (void)_updateSubviewsWithViolations:(id)arg1;
- (void)_submitAppealButtonTapped;
- (void)monetizationEligiblityViolationView:(id)arg1 didTapLearnMoreLink:(id)arg2 violationType:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)configureWithAppealButtonState:(long long)arg1 explanation:(id)arg2;
- (void)configureWithViolations:(id)arg1;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
