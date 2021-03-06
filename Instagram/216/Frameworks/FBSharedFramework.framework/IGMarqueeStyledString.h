//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import <FBSharedFramework/IGCoreTextLinkHandler-Protocol.h>
#import <FBSharedFramework/IGCoreTextNonLinkHandler-Protocol.h>

@class CAGradientLayer, IGCoreTextView, IGStyledString, NSString, UIView;
@protocol IGMarqueeStyledStringDelegate;

@interface IGMarqueeStyledString : IGPassthroughView <IGCoreTextLinkHandler, IGCoreTextNonLinkHandler>
{
    CAGradientLayer *_gradientMask;
    UIView *_containerView;
    IGCoreTextView *_leftView;
    IGCoreTextView *_rightView;
    double _scrollDistance;
    _Bool _animating;
    id <IGMarqueeStyledStringDelegate> _delegate;
    IGStyledString *_contentString;
    double _scrollProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double scrollProgress; // @synthesize scrollProgress=_scrollProgress;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) IGStyledString *contentString; // @synthesize contentString=_contentString;
@property(nonatomic) __weak id <IGMarqueeStyledStringDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapContainerView:(id)arg1;
- (void)coreTextViewDidTapOnNonLinkedString:(id)arg1 touchEvent:(unsigned long long)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

