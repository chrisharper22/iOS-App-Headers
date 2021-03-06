//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedPillView, POPSpringAnimation, UIView;
@protocol IGBottomPillControllerDelegate;

@interface IGBottomPillController : NSObject
{
    UIView *_containerView;
    IGFeedPillView *_pill;
    double _bottomInset;
    POPSpringAnimation *_spring;
    _Bool _enabled;
    id <IGBottomPillControllerDelegate> _delegate;
    double _pillRevealState;
}

- (void).cxx_destruct;
@property(nonatomic) double pillRevealState; // @synthesize pillRevealState=_pillRevealState;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <IGBottomPillControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handlePillTap:(id)arg1;
- (void)_layoutPill;
- (void)hide;
- (void)reveal;
- (id)initWithContainerView:(id)arg1 pillTitle:(id)arg2 leftAccessoryView:(id)arg3 bottomInset:(double)arg4;
- (id)initWithContainerView:(id)arg1 pillTitle:(id)arg2 bottomInset:(double)arg3;

@end

