//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGGDPRConsentBottomButtonViewDelegate-Protocol.h"

@class IGCoreTextView, IGGDPRConsentBottomButtonView, IGGDPRConsentLayoutSpec, IGGDPRConsentMultiTextView, NSString, UIScrollView;
@protocol IGGDPRConsentIntroViewDelegate;

@interface IGGDPRConsentIntroView : UIView <IGCoreTextLinkHandler, IGGDPRConsentBottomButtonViewDelegate>
{
    UIScrollView *_contentView;
    IGCoreTextView *_contentTitle;
    IGGDPRConsentMultiTextView *_contentTextView;
    IGCoreTextView *_linkText;
    IGGDPRConsentBottomButtonView *_bottomButtonView;
    IGGDPRConsentLayoutSpec *_layoutSpec;
    id <IGGDPRConsentIntroViewDelegate> _introViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGDPRConsentIntroViewDelegate> introViewDelegate; // @synthesize introViewDelegate=_introViewDelegate;
- (double)_contentHeight;
- (void)GDPRConsentBottomButtonViewDidTapSecondaryBottomButton;
- (void)GDPRConsentBottomButtonViewDidTapPrimaryBottomButton:(_Bool)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)configureViewWithTitleText:(id)arg1 contentData:(id)arg2 buttonText:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutSpec:(id)arg2 introViewDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
