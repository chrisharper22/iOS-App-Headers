//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCanvasButtonCellDelegate-Protocol.h"
#import "IGCanvasSwipeUpViewDelegate-Protocol.h"

@class IGCanvasButtonCell, IGCanvasSwipeUpAnimator, IGCanvasSwipeUpView, IGCanvasSwipeUpViewModel, IGGradientView, NSString;
@protocol IGCanvasFooterViewDelegate;

@interface IGCanvasFooterView : UIView <IGCanvasButtonCellDelegate, IGCanvasSwipeUpViewDelegate>
{
    IGGradientView *_gradientView;
    IGCanvasButtonCell *_button;
    id <IGCanvasFooterViewDelegate> _delegate;
    UIView *_borderView;
    IGCanvasSwipeUpView *_swipeUpView;
    IGCanvasSwipeUpAnimator *_swipeUpAnimator;
    _Bool _displaySwipeUpView;
    IGCanvasSwipeUpViewModel *_swipeUpViewModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool displaySwipeUpView; // @synthesize displaySwipeUpView=_displaySwipeUpView;
@property(readonly, nonatomic) IGCanvasSwipeUpViewModel *swipeUpViewModel; // @synthesize swipeUpViewModel=_swipeUpViewModel;
- (void)animateButtonView;
- (void)animateSwipeUpView;
- (void)configureFooter:(id)arg1 delegate:(id)arg2;
- (void)canvasSwipeUpViewDidTap;
- (void)canvasButtonCellDidTapButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

