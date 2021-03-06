//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, NSString, UIImage, UIImageView, UILabel;
@protocol IGPayoutOnboardingHeaderViewDelegate;

@interface IGPayoutOnboardingHeaderView : UIView <IGCoreTextLinkHandler>
{
    UIImage *_lightImage;
    UIImage *_darkImage;
    UIImageView *_iconImageView;
    UILabel *_title;
    IGCoreTextView *_headerDescriptionTextView;
    id <IGPayoutOnboardingHeaderViewDelegate> _delegate;
}

+ (double)preferredHeightForCellWithWidth:(double)arg1 title:(id)arg2 description:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPayoutOnboardingHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 description:(id)arg2 iconLightImage:(id)arg3 iconDarkImage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

