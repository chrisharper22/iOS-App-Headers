//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UIStackView;
@protocol IGQuizStickerSummaryViewDelegate;

@interface IGQuizStickerSummaryView : UIView
{
    UIStackView *_stackView;
    _Bool _resharingEnabled;
    IGTapButton *_reshareButton;
    id <IGQuizStickerSummaryViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGQuizStickerSummaryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapShareResultsButton;
- (void)_didTapOptionView:(id)arg1;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1 resharingEnabled:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

