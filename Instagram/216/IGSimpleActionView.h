//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGImageView, IGSimpleAction, UIButton, UILabel;
@protocol IGSimpleActionViewDelegate;

@interface IGSimpleActionView : UIView
{
    id <IGSimpleActionViewDelegate> _delegate;
    IGSimpleAction *_simpleAction;
    IGImageView *_imageView;
    UILabel *_titleView;
    UILabel *_messageView;
    UIButton *_startButton;
    UIButton *_dismissButton;
}

- (void).cxx_destruct;
- (void)_didTapDismissButton;
- (void)_didTapStartButton;
- (id)_createDismissButton;
- (id)_createButton;
- (id)_createMessageView;
- (id)_createTitleView;
- (id)_createImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithSimpleAction:(id)arg1 backgroundColor:(id)arg2 delegate:(id)arg3;

@end

