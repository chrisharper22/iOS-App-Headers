//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGImageView, UIImageView, UILabel, UIView;
@protocol IGCameraEffectNetworkConsentPillDelegate;

@interface IGStoryCameraHeaderPill : UIControl
{
    UILabel *_title;
    UILabel *_subtitle;
    UIImageView *_chevronView;
    IGImageView *_imageView;
    UIView *_containerView;
    CDUnknownBlockType _pillTapBlock;
    id <IGCameraEffectNetworkConsentPillDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCameraEffectNetworkConsentPillDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (void)_didTap;
- (void)_didPan:(id)arg1;
- (void)configure:(id)arg1 pillTapBlock:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithAnalyticsModule:(id)arg1;

@end
