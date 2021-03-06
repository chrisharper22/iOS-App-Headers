//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGDirectMessageReactionContainerView, IGTapButton, NSString, UILabel;
@protocol IGDirectMessageReactionEditViewDelegate;

@interface IGDirectMessageReactionEditView : UIView
{
    IGDirectMessageReactionContainerView *_reactionContainerView;
    IGTapButton *_resetButton;
    IGTapButton *_doneButton;
    IGTapButton *_titleButton;
    UILabel *_descriptionLabel;
    UILabel *_doubleTapLabel;
    id <IGDirectMessageReactionEditViewDelegate> _delegate;
    NSString *_doubleTapEmojiUnicode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *doubleTapEmojiUnicode; // @synthesize doubleTapEmojiUnicode=_doubleTapEmojiUnicode;
@property(nonatomic) __weak id <IGDirectMessageReactionEditViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapDoneButton;
- (void)_didTapResetButton;
- (struct CGSize)constrainedSizeForWidth:(double)arg1 containerViewTopOffset:(double)arg2;
- (void)setDoubleTapLabelHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_setUpLabels;
- (void)_setUpButtons;
- (id)initWithFrame:(struct CGRect)arg1 reactionContainerView:(id)arg2 doubleTapEmojiUnicode:(id)arg3;

@end

