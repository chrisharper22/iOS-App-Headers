//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, IGImageView, UITapGestureRecognizer;
@protocol IGPromoteEducationDrawerBannerViewDelegate;

@interface IGPromoteEducationDrawerBannerView : UIView
{
    UIView *_bannerView;
    IGImageView *_iconImageView;
    IGCoreTextView *_textView;
    IGImageView *_chevronImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <IGPromoteEducationDrawerBannerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteEducationDrawerBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapOnView;
- (void)_layoutBannerSubviews;
- (double)_heightThatFitsWithWidth:(double)arg1;
- (void)dockToBottomOfHostView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1 shouldDisplayCallCenterIcon:(_Bool)arg2 analyticsModule:(id)arg3;

@end

