//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, IGTextButton, NSString, UILabel, UIScrollView;
@protocol IGTwoFactorAuthAppManualSetupViewDelegate;

@interface IGTwoFactorAuthAppManualSetupView : UIView <IGCoreTextLinkHandler>
{
    UIScrollView *_containerScrollView;
    UIView *_stickyBottomButtonView;
    UILabel *_headerLabel;
    UILabel *_seedsLabel;
    UILabel *_contentLabel;
    IGCoreTextView *_linkView;
    UILabel *_separatorLineLabel;
    IGTextButton *_bottomButton;
    id <IGTwoFactorAuthAppManualSetupViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTwoFactorAuthAppManualSetupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_contentHeight;
- (void)_didTapOnBottomButton;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)configureWithHeaderText:(id)arg1 seedsText:(id)arg2 contentText:(id)arg3 linkViewText:(id)arg4 bottomButtonText:(id)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

