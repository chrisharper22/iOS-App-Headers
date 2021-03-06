//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGKeyboardObserverFrameChangeDelegate-Protocol.h"

@class IGKeyboardObserver, IGStackLayout, NSString, UILabel;

@interface IGCommentThreadEmptyView : UIView <IGKeyboardObserverFrameChangeDelegate>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGStackLayout *_stackLayout;
    IGKeyboardObserver *_keyboardObserver;
    struct CGRect _visibleKeyboardRect;
    long long _viewType;
    double _navBarHeight;
    double _composerHeight;
    _Bool _showKeyboardWhenViewAppears;
    double _keyboardPercentPresented;
}

- (void).cxx_destruct;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)animateViewWithKeyboardPercentPresented:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithViewType:(long long)arg1 showKeyboardWhenViewAppears:(_Bool)arg2 navbarHeight:(double)arg3 composerHeight:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

