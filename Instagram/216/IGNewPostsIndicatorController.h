//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNewPostsIndicatorViewDelegate-Protocol.h"

@class NSString, UIView;
@protocol IGNewPostsIndicatorControllerDelegate;

@interface IGNewPostsIndicatorController : NSObject <IGNewPostsIndicatorViewDelegate>
{
    UIView *_newPostsIndicatorView;
    double _top;
    UIView *_containerView;
    UIView *_siblingView;
    NSString *_message;
    double _topInsetAdjustment;
    _Bool _isShowingNewPostsIndicatorView;
    id <IGNewPostsIndicatorControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isShowingNewPostsIndicatorView; // @synthesize isShowingNewPostsIndicatorView=_isShowingNewPostsIndicatorView;
@property(nonatomic) __weak id <IGNewPostsIndicatorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)newPostsIndicatorViewWasTapped:(id)arg1;
- (double)_offscreenY;
- (void)_layoutPill;
- (void)_showPillAnimated:(_Bool)arg1;
- (_Bool)hideNewPostsIndicatorViewAnimated:(_Bool)arg1;
- (_Bool)showNewPostsIndicatorViewAnimated:(_Bool)arg1;
- (_Bool)showNewPostsIndicatorViewAnimated:(_Bool)arg1 topInsetAdjustment:(double)arg2;
- (void)configureWithMessage:(id)arg1;
- (void)updateTopInsetAdjustment:(double)arg1 animated:(_Bool)arg2;
- (id)initWithContainerView:(id)arg1 insertingBelowView:(id)arg2 topInset:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
