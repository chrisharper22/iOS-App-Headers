//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGTooltipViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGBottomButtonsView, IGCoreTextView, IGListCollectionView, IGNUXLayoutSpec, IGTooltipView, NSString, UIButton, UILabel;
@protocol IGRegistrationAccountLinkingViewDelegate;

@interface IGRegistrationAccountLinkingView : UIView <IGCoreTextLinkHandler, IGTooltipViewDelegate, UIGestureRecognizerDelegate>
{
    IGTooltipView *_tooltipView;
    NSString *_tooltipUsername;
    UIButton *_backButton;
    UILabel *_titleLabel;
    IGCoreTextView *_descriptionView;
    IGBottomButtonsView *_bottomButtonsView;
    IGNUXLayoutSpec *_layoutSpec;
    struct UIEdgeInsets _preferredContentInsets;
    id <IGRegistrationAccountLinkingViewDelegate> _delegate;
    IGListCollectionView *_accountListView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGListCollectionView *accountListView; // @synthesize accountListView=_accountListView;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)hideTooltip;
- (void)showTooltipForUsername:(id)arg1 inView:(id)arg2 pointInView:(struct CGPoint)arg3;
- (void)_didTapCreateNewPasswordInsteadButton;
- (void)_didTapNextButton;
- (void)_didTapBackButton;
- (void)didTapTooltipView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

