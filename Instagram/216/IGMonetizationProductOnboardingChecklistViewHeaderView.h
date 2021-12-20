//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, IGImageView, NSString, UILabel;
@protocol IGMonetizationProductOnboardingChecklistViewHeaderViewDelegate;

@interface IGMonetizationProductOnboardingChecklistViewHeaderView : UIView <IGCoreTextLinkHandler>
{
    IGImageView *_headerImageView;
    UILabel *_title;
    IGCoreTextView *_headerDescriptionCoreTextView;
    id <IGMonetizationProductOnboardingChecklistViewHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMonetizationProductOnboardingChecklistViewHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithHeaderImage:(id)arg1 roundedCorners:(_Bool)arg2 titleText:(id)arg3 description:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

